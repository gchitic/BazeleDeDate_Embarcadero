//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Logarea.h"
#include "Unit2.h"
#include "Unit1.h"
#include "ComandaNoua.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFAutentificare *FAutentificare;
//---------------------------------------------------------------------------
__fastcall TFAutentificare::TFAutentificare(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFAutentificare::SpeedButton1Click(TObject *Sender)
{
	if( (!Edit1->Text.IsEmpty()) && (!Edit2->Text.IsEmpty()) )
	{
		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(" SELECT * FROM OPERATOR WHERE USERNAME=:USERNAME AND PAROLA=:PAROLA ");
		dm->QLiber->ParamByName("USERNAME")->AsString = Edit1->Text;
		dm->QLiber->ParamByName("PAROLA")->AsString = Edit2->Text;
		dm->QLiber->Open();
		//operat = dm->QLiber->FieldByName("OPERATOR_ID")->AsInteger;

		if(!dm->QLiber->IsEmpty())
		{
			//Main->Label2->Caption = dm->QLiber->FieldByName("NUME")->AsString + " " + dm->QLiber->FieldByName("PRENUME")->AsString;
			Main->Label2->Caption = dm->QLiber->FieldByName("NUME")->AsString;
			Main->Label9->Caption = dm->QLiber->FieldByName("PRENUME")->AsString;
			Close();
			Main->AlphaBlend = false;
		}
		else
		{
			ShowMessage("Autentificare esuata");
            Edit1->Clear();
        	Edit2->Clear();
		}


	}
	else
	{
		ShowMessage("Nu sunt completate campurile de logare");
	}
}
//---------------------------------------------------------------------------
