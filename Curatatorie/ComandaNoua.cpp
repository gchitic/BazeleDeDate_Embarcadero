//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ComandaNoua.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Logarea.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TNewComand *NewComand;
bool ComandActive,CSpalat,CCalcat;
int client=1,nrComand=0,operat=1;
float suma=0,pretS=0,pretC=0,datoria,achitat;

//---------------------------------------------------------------------------
__fastcall TNewComand::TNewComand(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TNewComand::SpeedButton2Click(TObject *Sender)
{
    NewComand->Close();
}
//---------------------------------------------------------------------------


void __fastcall TNewComand::SpeedButton1Click(TObject *Sender)
{


	if((Edit1->Text!="") && (Edit2->Text!="") && (Memo1->Lines->Text!="") && (Edit7->Text!="") )
	{
		//nr.comenzii

        //extragem id-ul clientului
		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(" SELECT CLIENT_ID FROM CLIENT WHERE NUME_CLIENT=:NUME_CLIENT AND NR_TEL=:NR_TEL ");
		dm->QLiber->ParamByName("NUME_CLIENT")->AsString = Edit1->Text;
		dm->QLiber->ParamByName("NR_TEL")->AsString = Edit2->Text;
		dm->QLiber->Open();

		client = dm->QLiber->FieldByName("CLIENT_ID")->AsInteger;
		//ShowMessage(client);


		//extragem id-ul operatorului
		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add(" SELECT OPERATOR_ID FROM OPERATOR WHERE NUME=:NUME AND PRENUME=:PRENUME ");
		dm->QCautare->ParamByName("NUME")->AsString = Main->Label2->Caption;
		dm->QCautare->ParamByName("PRENUME")->AsString = Main->Label9->Caption;
		dm->QCautare->Open();

		operat=dm->QCautare->FieldByName("OPERATOR_ID")->AsInteger;

		//inregistram comanda
		AnsiString s;
		s=" INSERT INTO COMANDA(DENUMIRE,CANTITATE,SPALAT,CALCAT,DATA_INREG,DATA_INTOARC,CLIENT_ID,OPERATOR_ID,PRET,ACTIV) ";
		s+=" VALUES(:DENUMIRE,:CANTITATE,:SPALAT,:CALCAT,:DATA_INREG,:DATA_INTOARC,:CLIENT_ID,:OPERATOR_ID,:PRET,:ACTIV) ";
		dm->QComand->Close();
		dm->QComand->SQL->Clear();
        dm->QComand->SQL->Add(s);
		dm->QComand->ParamByName("DENUMIRE")->AsString = Memo1->Lines->Text;
		dm->QComand->ParamByName("CANTITATE")->AsInteger = Edit7->Text.ToInt();
		dm->QComand->ParamByName("SPALAT")->AsBoolean = CSpalat;
		dm->QComand->ParamByName("CALCAT")->AsBoolean = CCalcat;
		dm->QComand->ParamByName("DATA_INREG")->AsDate = DateTimePicker1->Date;
		dm->QComand->ParamByName("DATA_INTOARC")->AsDate = DateTimePicker2->Date;
		dm->QComand->ParamByName("CLIENT_ID")->AsInteger = client;
		dm->QComand->ParamByName("OPERATOR_ID")->AsInteger = operat;
		dm->QComand->ParamByName("PRET")->AsFloat = suma;
		dm->QComand->ParamByName("ACTIV")->AsBoolean = ComandActive;
		dm->QComand->ExecSQL();
		 
		ShowMessage("Comanda a fost inregistrata cu succes");
	}
	else  ShowMessage("Nu sunt completate toate campurile!");
}
//---------------------------------------------------------------------------

void __fastcall TNewComand::SBactiveClick(TObject *Sender)
{
	ComandActive=true;
	SBactive->Font->Color  = clRed;
    SBinactive->Font->Color  = clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TNewComand::SBinactiveClick(TObject *Sender)
{
	ComandActive=false;
	SBinactive->Font->Color  = clRed;
    SBactive->Font->Color  = clBlack;
}
//---------------------------------------------------------------------------

void __fastcall TNewComand::CheckBox2Click(TObject *Sender)
{
	if( CheckBox2->Checked==true )
	{
		CCalcat=true;
		Edit6->Visible=1;
		Edit6->Text = "0";
	}
	else
	{
		CCalcat=0;
		Edit6->Visible=0;
        Edit6->Text = "0";
	}
}
//---------------------------------------------------------------------------

void __fastcall TNewComand::CheckBox1Click(TObject *Sender)
{
	if( CheckBox1->Checked==true )
	{
		CSpalat=true;
		Edit5->Visible=1;
		Edit5->Text = "0";
	}
	else
	{
		CSpalat=0;
		Edit5->Visible=0;
		Edit5->Text = "0";
	}
}
//---------------------------------------------------------------------------

void __fastcall TNewComand::Image2Click(TObject *Sender)
{
	//inregistram clientul
    AnsiString s;
	s=" INSERT INTO CLIENT(NUME_CLIENT,NR_TEL) ";
	s+=" VALUES(:NUME_CLIENT,:NR_TEL) ";
	dm->QLiber->Close();
	dm->QLiber->SQL->Clear();
	dm->QLiber->SQL->Add(s);
	dm->QLiber->ParamByName("NUME_CLIENT")->AsString = Edit1->Text;
	dm->QLiber->ParamByName("NR_TEL")->AsString = Edit2->Text;
	dm->QLiber->ExecSQL();

    ShowMessage("Client inregistrat cu succes");

}
//---------------------------------------------------------------------------

void __fastcall TNewComand::FormShow(TObject *Sender)
{
	Edit4->TextHint = "0";    //datoria
	Edit5->Text = "0";    //spalat
    Edit6->Text = "0";    //calcat
}
//---------------------------------------------------------------------------

void __fastcall TNewComand::SBTotalClick(TObject *Sender)
{
	//calculam suma
	pretS = Edit5->Text.ToDouble() *Edit7->Text.ToInt();
	pretC = Edit6->Text.ToDouble() *Edit7->Text.ToInt();
	suma = pretC + pretS;
	Label8->Caption = FloatToStr(suma);

	Edit4->TextHint = FloatToStr(suma); //datoria
}
//---------------------------------------------------------------------------

void __fastcall TNewComand::Edit3DblClick(TObject *Sender)
{
    Edit4->TextHint = FloatToStr(suma - Edit3->Text.ToDouble());
}
//---------------------------------------------------------------------------

