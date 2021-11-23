//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFReceptie *FReceptie;
int fac_id;
//---------------------------------------------------------------------------
__fastcall TFReceptie::TFReceptie(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFReceptie::FormShow(TObject *Sender)
{
	TabSheet1->TabVisible = true;
	TabSheet2->TabVisible = false;
    TabSheet3->TabVisible = false;
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton3Click(TObject *Sender)
{
	dm->QUM->Close();
    dm->QUM->Open();
	TabSheet1->TabVisible = false;
    TabSheet3->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton7Click(TObject *Sender)
{
    Edit4->Text=dm->QUM->FieldByName("Abreviere")->AsString;
	TabSheet3->TabVisible = false;
	TabSheet1->TabVisible = true;
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::ECautareChange(TObject *Sender)
{
	AnsiString s;
	if(ECautare->Text!="")
	{
		s="SELECT * FROM PRODUSE WHERE ";
		if(RB1->Checked) //cautarea dupa nume
		{
			s=s+" DENUMIRE LIKE '"+ECautare->Text+"%' ";
		}
		else
		{
			s=s+" COD_PRODUS LIKE '"+ECautare->Text+"%' ";
		}

		s=s+" ORDER BY DENUMIRE ";

		dm->QProdus->Close();
		dm->QProdus->SQL->Clear(); //se curata codul
		dm->QProdus->SQL->Add(s);
		dm->QProdus->Open();

	}
	else
	{
        dm->QProdus->Close();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::RB1Click(TObject *Sender)
{
	if(RB1->Checked) ECautare->NumbersOnly = false;
	else ECautare->NumbersOnly = true;

}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton2Click(TObject *Sender)
{
	TabSheet1->TabVisible = false;  //receptia
	TabSheet2->TabVisible = true;   //produse

	TabSheet7->TabVisible = false;
    TabSheet8->TabVisible = false;

}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton8Click(TObject *Sender)
{
    Edit3->Text = dm->QProdus->FieldByName("denumire")->AsString;
	TabSheet1->TabVisible = true;  //receptia
	TabSheet2->TabVisible = false;  //produs
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton1Click(TObject *Sender)
{
	if((Edit1->Text!="")&&(Edit2->Text!=""))
	{
		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add("SELECT * FROM FACTURA_REC WHERE DATA_FACTURA=:DATA_FACTURA AND NR_FACTURA=:NR_FACTURA");
		dm->QLiber->ParamByName("DATA_FACTURA")->AsDate=DateTimePicker1->Date;
		dm->QLiber->ParamByName("NR_FACTURA")->AsInteger=StrToInt(Edit2->Text);
		dm->QLiber->Open();

		if(dm->QLiber->IsEmpty())
		{
            dm->FDStoredProc1->Close();
			dm->FDStoredProc1->Params->Items[1]->AsDate=DateTimePicker1->Date;
			dm->FDStoredProc1->Params->Items[2]->AsString=Edit2->Text;
			dm->FDStoredProc1->Params->Items[3]->AsString=Edit1->Text;
			dm->FDStoredProc1->ExecProc();
			fac_id=dm->FDStoredProc1->Params->Items[0]->AsInteger;
            dm->FDStoredProc1->Close();
			dm->FDStoredProc1->Params->Items[1]->AsDate=DateTimePicker1->Date;
			dm->FDStoredProc1->Params->Items[2]->AsString=Edit2->Text;
			dm->FDStoredProc1->Params->Items[3]->AsString=Edit1->Text;
			dm->FDStoredProc1->ExecProc();
			fac_id=dm->FDStoredProc1->Params->Items[0]->AsInteger;

			ShowMessage("Factura creata cu succes!");
			//SpeedButton1->Enabled=false;
			Panel1->Enabled=false;
			Panel4->Enabled=true;
		}
		else ShowMessage("Factura data este inregistrata");


	}
	else
	{
		ShowMessage("Nu sunt indeplinite toate campurile");
	}
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton6Click(TObject *Sender)
{
	if(MessageDlg("Dvs intradevar doriti sa inchideti factura?",mtConfirmation,TMsgDlgButtons() << mbYes << mbNo,0) == mrYes)
	{
        SpeedButton1->Enabled=true;
		Panel1->Enabled=true;
		Panel4->Enabled=false;

		Edit1->Clear();
		Edit2->Clear();
        Edit7->Clear();
		Edit6->Clear();
		Edit5->Clear();
		Edit4->Clear();
		Edit3->Clear();

        dm->QReceptie->Close();
	}


}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton4Click(TObject *Sender)
{
	if((Edit3->Text!="")&&(Edit4->Text!="")&&(Edit5->Text!="")&&(Edit6->Text!="")&&(Edit7->Text!=""))
	{
		AnsiString s;
		s=" INSERT INTO RECEPTIE(PRODUSE_ID,UNIT_MASURA_ID,FACTURA_REC_ID,OPERATOR_ID, ";
		s+=" STOCK1,STOCK2,PRET_INTRARE,PRET_VANZARE) ";
		s+=" VALUES (:PRODUSE_ID,:UNIT_MASURA_ID,:FACTURA_REC_ID,:OPERATOR_ID, " ;
		s+=" :STOCK1,:STOCK2,:PRET_INTRARE,:PRET_VANZARE)";

		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(s);
		dm->QLiber->ParamByName("PRODUSE_ID")->AsInteger = dm->QProdus->FieldByName("PRODUSE_ID")->AsInteger;
		dm->QLiber->ParamByName("UNIT_MASURA_ID")->AsInteger = dm->QUM->FieldByName("UNIT_MASURA_ID")->AsInteger;
		dm->QLiber->ParamByName("FACTURA_REC_ID")->AsInteger = fac_id;
		dm->QLiber->ParamByName("OPERATOR_ID")->AsInteger = 1;
		dm->QLiber->ParamByName("STOCK1")->AsInteger = Edit5->Text.ToInt();
		dm->QLiber->ParamByName("STOCK2")->AsInteger = Edit5->Text.ToInt();
		dm->QLiber->ParamByName("PRET_INTRARE")->AsFloat = Edit6->Text.ToDouble();
		dm->QLiber->ParamByName("PRET_VANZARE")->AsFloat = Edit7->Text.ToDouble();

		dm->QLiber->ExecSQL();

		dm->QReceptie->Close();
		dm->QReceptie->ParamByName("FACTURA_REC_ID")->AsInteger = fac_id;
        dm->QReceptie->Open();

		ShowMessage("Executare cu succes");
		Edit7->Clear();
		Edit6->Clear();
		Edit5->Clear();
		Edit4->Clear();
		Edit3->Clear();
	}
    else ShowMessage("Nu sunt indeplinite toate campurile");

}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton13Click(TObject *Sender)
{
	AnsiString s;

	s=" INSERT INTO PRODUSE(DENUMIRE,COD_PRODUS) ";
	s+=" VALUES (:DENUMIRE,:COD_PRODUS) ";

	dm->QLiber->Close();
	dm->QLiber->SQL->Clear();
	dm->QLiber->SQL->Add(s);

	dm->QLiber->ParamByName("DENUMIRE")->AsString = Edit9->Text;
	dm->QLiber->ParamByName("COD_PRODUS")->AsString = Edit10->Text;

	if((Edit9->Text=="")&&(Edit10->Text=="")) ShowMessage("Nu a fost efectuata nici o inregistrare!");
	else ShowMessage("Inregistrare cu succes");
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton10Click(TObject *Sender)
{
	TabSheet7->TabVisible = true;
	TabSheet6->TabVisible = false;
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton14Click(TObject *Sender)
{
	TabSheet6->TabVisible = true;
	TabSheet7->TabVisible = false;
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton11Click(TObject *Sender)
{
    TabSheet8->TabVisible = true;
	TabSheet6->TabVisible = false;
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::SpeedButton16Click(TObject *Sender)
{
    TabSheet6->TabVisible = true;
	TabSheet8->TabVisible = false;
}
//---------------------------------------------------------------------------

void __fastcall TFReceptie::FormClose(TObject *Sender, TCloseAction &Action)
{
    	SpeedButton1->Enabled=true;
		Panel1->Enabled=true;
		Panel4->Enabled=false;

		Edit1->Clear();
		Edit2->Clear();
		Edit6->Clear();
		Edit5->Clear();
		Edit4->Clear();
		Edit3->Clear();

        dm->QReceptie->Close();
}
//---------------------------------------------------------------------------



void __fastcall TFReceptie::SpeedButton9Click(TObject *Sender)
{
	TabSheet1->TabVisible = true;  //receptia
	TabSheet2->TabVisible = false;   //produse
}
//---------------------------------------------------------------------------


void __fastcall TFReceptie::SpeedButton5Click(TObject *Sender)
{
	Edit7->Clear();
	Edit6->Clear();
	Edit5->Clear();
	Edit4->Clear();
	Edit3->Clear();
	Edit2->Clear();
	Edit1->Clear();
    Panel4->Enabled = false;

}
//---------------------------------------------------------------------------

