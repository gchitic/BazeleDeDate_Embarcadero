//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Autentificare.h"
#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
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
	if((Edit1->Text!="")&&(Edit2->Text!=""))
	{
		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add("SELECT * FROM OPERATOR WHERE USERNAME=:USERNAME AND PASS=:PASS AND FIRMA_ID=:FIRMA_ID");
		dm->QLiber->ParamByName("USERNAME")->AsString = Edit1->Text;
		dm->QLiber->ParamByName("PASS")->AsString = Edit2->Text;
		dm->QLiber->ParamByName("FIRMA_ID")->AsString = 1;
		dm->QLiber->Open();

		if(!dm->QLiber->IsEmpty())
		{
			FMain->Label3->Caption = dm->QLiber->FieldByName("NUME")->AsString+" "+dm->QLiber->FieldByName("PRENUME")->AsString;
			FMain->Label2->Caption=dm->QLiber->FieldByName("FUNCTIA")->AsString;
			UTILIZATOR=dm->QLiber->FieldByName("OPERATOR_ID")->AsInteger;
			switch(dm->QLiber->FieldByName("TIP_ACCES")->AsInteger)
			{
				case 3: //operator vanzare
				{
					Close();
					FMain->AlphaBlend=false;
					break;
				}

				case 4: //operator receptie
				{
					Close();
					FReceptie->ShowModal();
					break;
				}

				default :  //admin +
				{

				}
			}

		}
		else
		{
			ShowMessage("Autentificare esuata");
			Edit2->Clear();
		}
	}
	else
	{
		ShowMessage("Nu sunt completate campurile de logare");
	}
}
//---------------------------------------------------------------------------
void __fastcall TFAutentificare::SpeedButton2Click(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------
