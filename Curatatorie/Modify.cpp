//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Modify.h"
#include "Unit1.h"
#include "ComandaNoua.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFModify *FModify;
bool Cactive,spalat=0,calcat=0;
int client,operat;
float suma;
//---------------------------------------------------------------------------
__fastcall TFModify::TFModify(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFModify::SBactiveClick(TObject *Sender)
{
	Cactive=true;
	SBactive->Font->Color  = clRed;
	SBinactive->Font->Color  = clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TFModify::SBinactiveClick(TObject *Sender)
{
	Cactive=false;
	SBinactive->Font->Color  = clRed;
	SBactive->Font->Color  = clBlack;
}
//---------------------------------------------------------------------------
void __fastcall TFModify::SpeedButton1Click(TObject *Sender)
{
    //extragem id-ul clientului
	dm->QCautare->Close();
	dm->QCautare->SQL->Clear();
	dm->QCautare->SQL->Add(" SELECT CLIENT_ID FROM CLIENT WHERE NUME_CLIENT=:NUME_CLIENT AND NR_TEL=:NR_TEL ");
	dm->QCautare->ParamByName("NUME_CLIENT")->AsString = Edit1->Text;
	dm->QCautare->ParamByName("NR_TEL")->AsString = Edit2->Text;
	dm->QCautare->Open();

	client = dm->QCautare->FieldByName("CLIENT_ID")->AsInteger;

    //extragem id-ul operatorului
	dm->QCautare->Close();
	dm->QCautare->SQL->Clear();
	dm->QCautare->SQL->Add(" SELECT OPERATOR_ID FROM OPERATOR WHERE NUME=:NUME AND PRENUME=:PRENUME ");
	dm->QCautare->ParamByName("NUME")->AsString = Main->Label2->Caption;
	dm->QCautare->ParamByName("PRENUME")->AsString = Main->Label9->Caption;
	dm->QCautare->Open();

	operat=dm->QCautare->FieldByName("OPERATOR_ID")->AsInteger;

	//QCautare il folosim ca QLiber
	AnsiString s;
	s="UPDATE COMANDA SET DENUMIRE=:DENUMIRE,CANTITATE=:CANTITATE,SPALAT=:SPALAT,CALCAT=:CALCAT,";
	s+="DATA_INREG=:DATA_INREG,DATA_INTOARC=:DATA_INTOARC,CLIENT_ID=:CLIENT_ID,OPRATOR_ID=:OPERATOR_ID,PRET=:PRET,";
	s+="ACTIC=:ACTIV,PRET_SPALAT=:PRET_SPALAT,PRET_CALCAT=:PRET_CALCAT WHERE COMANDA_ID=COMANDA_ID ";

	dm->QCautare->Close();
	dm->QCautare->SQL->Clear();
	dm->QCautare->SQL->Add(s);

	dm->QComand->ParamByName("DENUMIRE")->AsString = Memo1->Lines->Text;
	dm->QComand->ParamByName("CANTITATE")->AsInteger = Edit7->Text.ToInt();
	dm->QComand->ParamByName("SPALAT")->AsBoolean = spalat;
	dm->QComand->ParamByName("CALCAT")->AsBoolean = calcat;
	dm->QComand->ParamByName("DATA_INREG")->AsDate = DateTimePicker1->Date;
	dm->QComand->ParamByName("DATA_INTOARC")->AsDate = DateTimePicker2->Date;
	dm->QComand->ParamByName("CLIENT_ID")->AsInteger = client;
    dm->QComand->ParamByName("OPERATOR_ID")->AsInteger = operat;
	dm->QComand->ParamByName("PRET")->AsFloat = suma;
	dm->QComand->ParamByName("PRET_SPALAT")->AsFloat = Edit5->Text.ToDouble();
    dm->QComand->ParamByName("PRET_CALCAT")->AsFloat = Edit6->Text.ToDouble();
	dm->QComand->ParamByName("ACTIV")->AsBoolean = Cactive;
	dm->QComand->ExecSQL();

    ShowMessage("Modificare cu succes");
}
//---------------------------------------------------------------------------


void __fastcall TFModify::CheckBox2Click(TObject *Sender)
{
    if( CheckBox2->Checked==true )
	{
		calcat=true;
		Edit6->Visible=1;
		Edit6->Text = "0";
	}
	else
	{
		calcat=0;
		Edit6->Visible=0;
        Edit6->Text = "0";
	}
}
//---------------------------------------------------------------------------

void __fastcall TFModify::CheckBox1Click(TObject *Sender)
{
    if( CheckBox1->Checked==true )
	{
		spalat=true;
		Edit5->Visible=1;
		Edit5->Text = "0";
	}
	else
	{
		spalat=0;
		Edit5->Visible=0;
		Edit5->Text = "0";
	}
}
//---------------------------------------------------------------------------

void __fastcall TFModify::SBTotalClick(TObject *Sender)
{
	suma = (Edit5->Text.ToDouble()+Edit6->Text.ToDouble())*Edit7->Text.ToDouble();
    Label8->Caption = FloatToStr(suma);
}
//---------------------------------------------------------------------------

void __fastcall TFModify::Edit4Change(TObject *Sender)
{
    Edit4->Text = FloatToStr(suma-Edit3->Text.ToInt());
}
//---------------------------------------------------------------------------

