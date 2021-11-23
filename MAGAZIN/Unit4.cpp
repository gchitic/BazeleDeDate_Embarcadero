//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit1.h"
#include "Autentificare.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFCEC *FCEC;
//---------------------------------------------------------------------------
__fastcall TFCEC::TFCEC(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFCEC::cautaClick(TObject *Sender)
{
	dm->QCec->Close();
	dm-> QCec->ParamByName("OPERATOR_ID")->AsInteger=1;
	dm-> QCec->ParamByName("d1")->AsInteger=DT1->Date;
	dm-> QCec->ParamByName("d2")->AsInteger=DT2->Date;

	dm->QTotalCEC->Close();
	dm-> QTotalCEC->ParamByName("OPERATOR_ID")->AsInteger=1;
	dm-> QTotalCEC->ParamByName("d1")->AsInteger=DT1->Date;
	dm-> QTotalCEC->ParamByName("d2")->AsInteger=DT2->Date;
}
//---------------------------------------------------------------------------
void __fastcall TFCEC::DBGrid1CellClick(TColumn *Column)
{
	dm->QVanzare->Close();
	dm->QVanzare->ParamByName("CEC_ID")->AsInteger=dm->QCec->FieldByName("CEC_ID")->AsInteger;
    dm->Qvanzare->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFCEC::FormClose(TObject *Sender, TCloseAction &Action)
{
    dm->QVanzare->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFCEC::SpeedButton1Click(TObject *Sender)
{
	if(!dm->QCec!=IsEmpty())
	{
		dm->R1->ShowReport(true);
	}
	else
	{
        ShowMessage("Dvs nu aveti date pentru a face raport");
	}
}
//---------------------------------------------------------------------------
