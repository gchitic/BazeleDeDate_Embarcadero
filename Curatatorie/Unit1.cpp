//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "ComandaNoua.h"
#include "Cautare.h"
#include "Unit2.h"
#include "Rapoarte.h"
#include "Logarea.h"
#include "Modify.h"
#include "ModifyPage1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMain *Main;
TDateTime DT;

//---------------------------------------------------------------------------
__fastcall TMain::TMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMain::Image2Click(TObject *Sender)
{
	NewComand->Edit1->Clear();
	NewComand->Edit2->Clear();
	NewComand->Memo1->Lines->Clear();
	NewComand->Edit7->Clear();
	NewComand->Edit5->Clear();
	NewComand->Edit6->Clear();
	NewComand->Edit3->Clear();
	NewComand->Edit4->Clear();
	NewComand->Label8->Caption = "0.00";
	NewComand->CheckBox1->Checked = 0;
	NewComand->CheckBox2->Checked = 0;

	NewComand->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMain::Image4Click(TObject *Sender)
{
    FCautare->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMain::FormShow(TObject *Sender)
{
	Label6->Caption=DT.CurrentDate();
	FAutentificare->ShowModal();

}
//---------------------------------------------------------------------------

void __fastcall TMain::Timer1Timer(TObject *Sender)
{
    Label7->Caption=DT.CurrentTime();
}
//---------------------------------------------------------------------------


void __fastcall TMain::RadioButton1Click(TObject *Sender)
{
    dm->QMAIN->Close();
	dm->QMAIN->SQL->Clear();
	dm->QMAIN->SQL->Add(" SELECT * FROM COMANDA C INNER JOIN CLIENT CC ON C.CLIENT_ID=CC.CLIENT_ID ");
	dm->QMAIN->Open();
}
//---------------------------------------------------------------------------


void __fastcall TMain::RadioButton2Click(TObject *Sender)
{
    dm->QMAIN->Close();
	dm->QMAIN->SQL->Clear();
	dm->QMAIN->SQL->Add(" SELECT * FROM COMANDA C INNER JOIN CLIENT CC ON C.CLIENT_ID=CC.CLIENT_ID WHERE C.ACTIV=1 ");
	dm->QMAIN->Open();
}
//---------------------------------------------------------------------------

void __fastcall TMain::RadioButton3Click(TObject *Sender)
{
    dm->QMAIN->Close();
	dm->QMAIN->SQL->Clear();
	dm->QMAIN->SQL->Add(" SELECT * FROM COMANDA C INNER JOIN CLIENT CC ON C.CLIENT_ID=CC.CLIENT_ID WHERE C.ACTIV=0 ");
	dm->QMAIN->Open();
}
//---------------------------------------------------------------------------



void __fastcall TMain::Image3Click(TObject *Sender)
{
    FRapoarte->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TMain::Image6Click(TObject *Sender)
{
	FModifCom->ShowModal();
}
//---------------------------------------------------------------------------

