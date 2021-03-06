//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Cautare.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFCautare *FCautare;
//---------------------------------------------------------------------------
__fastcall TFCautare::TFCautare(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFCautare::SpeedButton1Click(TObject *Sender)
{
    FCautare->Close();
}
//---------------------------------------------------------------------------


void __fastcall TFCautare::SpeedButton2Click(TObject *Sender)
{
	if(RadioButton1->Checked)
	{
		dm->QMAIN->Close();
		dm->QMAIN->SQL->Clear();
		dm->QMAIN->SQL->Add(" SELECT * FROM COMANDA C INNER JOIN CLIENT CC ON C.CLIENT_ID=CC.CLIENT_ID WHERE NUME_CLIENT=:NUME_CLIENT");
		dm->QMAIN->ParamByName("NUME_CLIENT")->AsString = Edit1->Text;
		dm->QMAIN->Open();
	}
	else if(RadioButton2->Checked)
	{
		dm->QMAIN->Close();
		dm->QMAIN->SQL->Clear();
		dm->QMAIN->SQL->Add(" SELECT * FROM COMANDA C INNER JOIN CLIENT CC ON C.CLIENT_ID=CC.CLIENT_ID WHERE DATA_INTOARC=:DATA_INTOARC");
		dm->QMAIN->ParamByName("DATA_INTOARC")->AsDate = DateTimePicker1->Date;
		dm->QMAIN->Open();
	}
	else
	{
        dm->QMAIN->Close();
		dm->QMAIN->SQL->Clear();
		dm->QMAIN->SQL->Add(" SELECT * FROM COMANDA C INNER JOIN CLIENT CC ON C.CLIENT_ID=CC.CLIENT_ID WHERE COMANDA_ID=:COMANDA_ID");
		dm->QMAIN->ParamByName("COMANDA_ID")->AsInteger = Edit3->Text.ToInt();
		dm->QMAIN->Open();
	}
}
//---------------------------------------------------------------------------

