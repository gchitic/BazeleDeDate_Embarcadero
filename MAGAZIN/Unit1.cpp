//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Autentificare.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMain *FMain;
TDateTime DT;
int CEC,CLIENT=1,OPERATOR=1;
float DISCOUNT=0;
//---------------------------------------------------------------------------
__fastcall TFMain::TFMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFMain::SpeedButton4Click(TObject *Sender)
{
    FReceptie->ShowModal();
}
//---------------------------------------------------------------------------



void __fastcall TFMain::SpeedButton2Click(TObject *Sender)
{
	if(SpeedButton2->Visible) SpeedButton2->Visible = false;
	else SpeedButton2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Timer1Timer(TObject *Sender)
{
	if(Disconnect->Visible) Disconnect->Visible = false;
	else Disconnect->Visible = true;

	Label22->Caption=DT.CurrentTime();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::FormShow(TObject *Sender)
{
	Label21->Caption=DT.CurrentDate();
    FAutentificare->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::SpeedButton1Click(TObject *Sender)
{
	AnsiString s;

	if(EScan->Text!="")
	{
		if(CBClient->Checked==false)
		{
			s = " SELECT R.*,P.DENUMIRE AS PRODUS,P.COD_PRODUS,UM.ABREVIERE ";
			s+= " FROM RECEPTIE R INNER JOIN UNIT_MASURA UM ON UM.UNIT_MASURA_ID=R.UNIT_MASURA_ID ";
			s+= " INNER JOIN PRODUSE P ON P.PRODUSE_ID=R.PRODUSE_ID ";
			s+= " WHERE COD_PRODUS=:COD_PRODUS AND STOCK1>0 ";
		}
		else
		{
			s=" SELECT * FROM CLIENT C INNER JOIN DICOUNT D ON C.CLIENT_ID=D.CLIENT_ID AND C.COD_CLIENT=:COD_PRODUS ";

		}
		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(s);
		dm->QLiber->ParamByName("COD_PRODUS")->AsString = EScan->Text;
		dm->QLiber->Open();
		ShowMessage(dm->QLiber->FieldByName("nume")->AsString);

		if(CBClient->Checked==false)  //cat timp e produs
		{

			if(!dm->QLiber->IsEmpty())
			{
				LDescriere->Caption = dm->QLiber->FieldByName("PRODUS")->AsString+", cost: "+dm->QLiber->FieldByName("PRET_VANZ")->AsString+"/"+dm->QLiber->FieldByName("ABREVIERE")->AsString+" lei/";

				float suma = dm->QLiber->FieldByName("PRET_VANZ")->AsFloat;
				int REC = dm->QLiber->FieldByName("RECEPTIE_ID")->AsInteger;

				if( (dm->QVanzare->Active==false) && (dm->QVanzare->IsEmpty()) )
				{
					//formam cecul
					dm->PROCCEX->Close();
					dm->PROCCEX->Params->Items[1]->AsInteger=FAutentificare->UTILIZATOR;   //OPERATOR
					dm->PROCCEX->Params->Items[2]->AsInteger=CLIENT;   //CLIENT
					dm->PROCCEX->Params->Items[3]->AsInteger=1;  //FIRMA
					dm->PROCCEX->ExecProc();
					CEC=dm->PROCCEX->Params->Items[0]->AsInteger;
				}

				//verificam daca exista asa produs pe baza de cod prous
				s= " SELECT V.* FROM VANZARE V INNER JOIN RECEPTIE R ON R.RECEPTIE_ID=V.RECEPTIE_ID ";
				s+=" INNER JOIN PRODUSE P ON P.PRODUSE_ID = R.PRODUSE_ID ";
				s+=" WHERE P.COD_PRODUS=:COD_PRODUS AND V.CEC_ID=:CEC_ID " ;

				dm->QLiber2->Close();
				dm->QLiber2->SQL->Clear();
				dm->QLiber2->SQL->Add("SELECT VANZARE_ID FROM VANZARE V INNER JOIN PRODUS P ON V. WHERE ");
				dm->QLiber2->ParamByName("CEC_ID")->AsInteger = CEC;
				dm->QLiber2->ParamByName("COD_PRODUS")->AsString = EScan->Text;
				dm->QLiber2->Open();

				if(dm->QLiber2->IsEmpty())
				{

					s =" INSERT INTO VANZARE (CEC_ID,RECEPTIE_ID,CANTITATE,SUMA,SUMA_DISC,SUMA_TOTAL) ";
					s+=" VALUES (:CEC_ID,:RECEPTIE_ID,1,:SUMA,:SUMA_DISC,:SUMA_TOTAL) ";

					dm->QLiber->Close();
					dm->QLiber->SQL->Clear();
					dm->QLiber->SQL->Add(s);
					dm->QLiber->ParamByName("CEC_ID")->AsInteger = CEC;
					dm->QLiber->ParamByName("RECEPTIE_ID")->AsInteger = REC;

			}   }
			else
			{

				s =" UPDATE VANZARE SET CEC_ID,CANTITATEA=CANTITATEA+1,SUMA=suma + :SUMA,SUMA_DISC=SUMA_DISC + :SUMA_DISC,SUMA_TOTAL=:SUMA_TOTAL WHERE VANZARE_ID=:VANZARE_ID ";
				dm->QLiber->Close();
				dm->QLiber->SQL->Clear();
				dm->QLiber->SQL->Add(s);
				dm->QLiber->ParamByName("VANZARE_ID")->AsInteger = dm->QLiber2->FieldByName("VANZARE_ID")->AsInteger;

			}

            dm->QLiber->ParamByName("SUMA")->AsFloat = suma;
			dm->QLiber->ParamByName("SUMA_DISC")->AsFloat = suma *( DISCOUNT / 100 );
			dm->QLiber->ParamByName("SUMA_TOTAL")->AsFloat = suma-(suma * (DISCOUNT/ 100);;
			dm->QLiber->ExecSQL();
		}
			else  //daca e client
			{
				if(!dm->QLiber->IsEmpty())
				{
					ShowMessage(dm->QLiber->FieldByName("nume")->AsString);
					Label7->Caption=dm->QLiber->FieldByName("NUME")->AsString+" "+dm->QLiber->FieldByName("PRENUME")->AsAnsiString+" - discount "+dm ...........
                    CLIENT=dm->QLiber->FieldByName("CLIENT_ID")->AsInteger;
					DISCOUNT=dm->QLiber->FieldByName("VALOAREA")->AsInteger;

					//daca avem deja vanzari facute atunci  facem recalcul
					if( (dm->QVanzare->Active==true) || (!dm->QVanzare->IsEmpty())) )
					{
                        ShowMessage(DISCOUNT);
						s=" UPDATE VANZARE SET SUMA_DISC=suma*( :DISCOUNT /cast(100 as float) ),SUMA_TOTAL=suma-(suma*( :DISC /100 )) WHERE CEC_ID=:CEC_ID ";
						dm->QLiber->Close();
						dm->QLiber->SQL->Clear();
						dm->QLiber->SQL->Add(s);
						dm->QLiber->ParamByName("CEC_ID")->AsInteger = CEC;
						dm->QLiber->ParamByName("DISCOUNT")->AsFloat = DISCOUNT;
						dm->QLiber->ExecSQL();

						dm->QLiber->Close();
						dm->QLiber->SQL->Clear();
						dm->QLiber->SQL->Add(" UPDATE CEC SET CIENT_ID=:CLIENT_ID WHERE CEC_ID=:CEC_ID");
						dm->QLiber->ParamByName("CEC_ID")->AsInteger = CLIENT;
						dm->QLiber->ParamByName("CLIENT_ID")->AsInteger = CLIENT;
						dm->QLiber->ExecSQL();

					}
				}
				else
				{
					Label7->Caption = "Neidentificatv";
                }

			}
			dm->QVanzare->Close();
			dm->QVanzare->ParamByName("CEC_ID")->AsInteger = CEC;
			dm->QVanzare->Open();
			dm->QLiber->Close();
			dm->QLiber->SQL->Clear();
			dm->QLiber->SQL->Add("SELECT sum(SUMA_TOTAL) as SUMA_TOTAL  FROM VANZARE WHERE CEC_ID=:CEC_ID");
			dm->ParamByName("CEC_ID")->AsInteger=CEC;
			dm->QLiber->Open();
			LSumaCec->Caption = dm->QLiber->FieldByName("suma_total")->AsString;

			EScan->Clear();
			CBClient->Checked=false;

		}
		else
		{
            LDescriere->Caption = "Neidentificat";
        }
	}
}
//---------------------------------------------------------------------------

void __fastcall TFMain::CBClientClick(TObject *Sender)
{
	EScan->SetFocus();

}
//---------------------------------------------------------------------------


void __fastcall TFMain::SpeedButton7Click(TObject *Sender)
{
	CLIENT=1;
	DISCOUNT=0;
	CEC=0;
	dm->QVanzare->Close();
	Label7->Clear();
    LDescriere->Clear();

    dm->QLiber->Close();
	dm->QLiber->SQL->Clear();
	dm->QLiber->SQL->Add(" UPDATE CEC SET SUMA_CEC=:SUMA_CEC,NR_CEC = (SELECT ISNULL(MAX(NR_CEC),0)+1 FROM CEC) WHERE CEC_ID=:CEC_ID ");   //ISNULL(---,0) -DACA VALOAREA E NULL ATUNCI I SE VA ATRIBUI 0
	dm->ParamByName("OPERATOR_ID")->AsInteger=OPERATOR;
	dm->QLiber->Open();
	dm->QLiber->ParamByName("CEC_ID")->AsInteger=CEC;
	dm->QLiber->ParamByName("SUMA_CEC")->AsFloat=LSumaCec->Caption->ToDouble();
	dm->QLiber->ExecSQL(;)

	AnsiString s=" SELECT sum(V.SUMA_TOTAL) as SUMA_TOTAL  FROM VANZARE V INNER JOIN CEC ON CEC.CEC_ID=V.CEC_ID WHERE CAST(DATA_CEC AS DATE)=CAST(GETDATE() AS DATE ) ";
    s+=" AND OPERATOR_ID=:OPERATOR_ID ";
	dm->QLiber->Close();
	dm->QLiber->SQL->Clear();
	dm->QLiber->SQL->Add("s");
	dm->ParamByName("OPERATOR_ID")->AsInteger=OPERATOR;
	dm->QLiber->Open();
	LSumaCec->Caption = "0.00";
	LCasa->Caption = dm->QLiber->FieldByName("suma_total")->AsString;

	EScan->Clear();
	CBClient->Checked=false;


}
//---------------------------------------------------------------------------

void __fastcall TFMain::SpeedButton8Click(TObject *Sender)
{
	Label23->Caption = dm->QVanzare->FieldByName("PRODUS")->AsString;
	Edit2->Clear();  //cantitatea
	Panel9->Visible= true;
	Edit2->SetFocus();

}
//---------------------------------------------------------------------------

void __fastcall TFMain::SpeedButton9Click(TObject *Sender)
{
    EScan->SetFocus();
	Panel9->Visible=false;

}
//---------------------------------------------------------------------------

void __fastcall TFMain::SpeedButton5Click(TObject *Sender)
{
		AnsiString s;
		float tot , cost;
		cost=dm->QLiber->ParamByName("SUMA")->AsFloat / dm->QLiber->ParamByName("CANTITATEA")->AsFloat;
		tot = cost * Edit2->Text.ToDouble();

		s =" UPDATE VANZARE SET CEC_ID,CANTITATEA=:CANTITATEA,SUMA=:SUMA,SUMA_DISC=:SUMA_DISC,SUMA_TOTAL:=SUMA_TOTAL WHERE VANZARE_ID=:VANZARE_ID ";
		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(s);
		dm->QLiber->ParamByName("VANZARE_ID")->AsInteger = dm->QVanzare->FieldByName("VANZARE_ID")->AsInteger;
		dm->QLiber->ParamByName("CANTITATEA")->AsInteger = Edit2->Text.ToInt();
		dm->QLiber->ParamByName("SUMA")->AsFloat = tot;
		dm->QLiber->ParamByName("SUMA_DISC")->AsFloat = tot *( DISCOUNT / 100 );
		dm->QLiber->ParamByName("SUMA_TOTAL")->AsFloat = tot-(suma * (DISCOUNT/ 100);;
		dm->QLiber->ExecSQL();

        dm->QVanzare->Close();
		dm->QVanzare->ParamByName("CEC_ID")->AsInteger = CEC;
		dm->QVanzare->Open();
		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add("SELECT sum(SUMA_TOTAL) as SUMA_TOTAL  FROM VANZARE WHERE CEC_ID=:CEC_ID");
		dm->ParamByName("CEC_ID")->AsInteger=CEC;
		dm->QLiber->Open();
		LSumaCec->Caption = dm->QLiber->FieldByName("suma_total")->AsString;

		EScan->Clear();
		CBClient->Checked=false;
        Panel9->Visible = false
}
//---------------------------------------------------------------------------

void __fastcall TFMain::SpeedButton10Click(TObject *Sender)
{
	FCEC->DT1->Date = Now();
	FCEC->DT2->Date = Now();
	FCEC->cauta->Click();
    FCEC->ShowModal();
}
//---------------------------------------------------------------------------

