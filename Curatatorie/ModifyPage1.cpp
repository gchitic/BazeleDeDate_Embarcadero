//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ModifyPage1.h"
#include "Unit1.h"
#include "Modify.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFModifCom *FModifCom;
//---------------------------------------------------------------------------
__fastcall TFModifCom::TFModifCom(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFModifCom::Button2Click(TObject *Sender)
{
   FModifCom->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFModifCom::Button1Click(TObject *Sender)
{
	dm->QLiber->Close();
	dm->QLiber->SQL->Clear();
	dm->QLiber->SQL->Add(" SELECT C.ACTIV,C.COMANDA_ID,C.DENUMIRE,C.CANTITATE,C.SPALAT,C.CALCAT,C.DATA_INREG,C.DATA_INTOARC,C.PRET,C.PRET_SPALAT,C.PRET_CALCAT,CC.NUME_CLIENT,CC.NR_TEL FROM COMANDA C INNER JOIN CLIENT CC ON C.CLIENT_ID=CC.CLIENT_ID WHERE COMANDA_ID=:COMANDA_ID ");
	dm->QLiber->ParamByName("COMANDA_ID")->AsInteger =  Edit1->Text.ToInt();
	dm->QLiber->Open();

	FModify->Edit1->Text = dm->QLiber->FieldByName("NUME_CLIENT")->AsString;
    FModify->Edit2->Text = dm->QLiber->FieldByName("NR_TEL")->AsString;
	FModify->DateTimePicker1->Date = dm->QLiber->FieldByName("DATA_INREG")->AsDateTime;
    FModify->DateTimePicker2->Date = dm->QLiber->FieldByName("DATA_INTOARC")->AsDateTime;
	FModify->Edit7->Text = dm->QLiber->FieldByName("CANTITATE")->AsString;
	FModify->Label8->Caption = dm->QLiber->FieldByName("PRET")->AsString;
	FModify->Memo1->Lines->Text =  dm->QLiber->FieldByName("DENUMIRE")->AsString;

	FModify->Edit3->Text =  FModify->Label8->Caption;

	if( dm->QLiber->FieldByName("SPALAT")->AsBoolean == 1 )
	{
		FModify->CheckBox1->Checked = true;
		FModify->Edit5->Visible = true;
		FModify->Edit5->Text = dm->QLiber->FieldByName("PRET_SPALAT")->AsString;
	}

	if( dm->QLiber->FieldByName("CALCAT")->AsBoolean == 1 )
	{
		FModify->CheckBox2->Checked = true;
		FModify->Edit6->Visible = true;
		FModify->Edit6->Text = dm->QLiber->FieldByName("PRET_CALCAT")->AsString;
	}

	if( dm->QLiber->FieldByName("ACTIV")->AsBoolean == 1 )
	{
		FModify->SBactive->Font->Color  = clRed;
        FModify->SBinactive->Font->Color  = clBlack;
	}
	else
	{
		FModify->SBinactive->Font->Color  = clRed;
        FModify->SBinactive->Font->Color  = clBlack;
	}

	FModify->ShowModal();



	//FModifCom->Close();
}
//---------------------------------------------------------------------------
