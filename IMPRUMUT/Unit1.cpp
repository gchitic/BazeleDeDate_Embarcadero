//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
TDateTime DT;   //variabila de tip data si ora
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
	Label3->Caption = DT.CurrentDate();
	TabSheet2->TabVisible = false;
	TabSheet3->TabVisible = false;
	TabSheet4->TabVisible = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	Label10->Caption = DT.CurrentTime();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
	if( (Edit1->Text != "") && (!Edit2->Text.IsEmpty()) )
	{
		if(Edit1->Text == "1" && Edit2->Text == "1")
		{
            FDQuery1->Close();
			FDQuery1->Open();

			TabSheet1->TabVisible = false;
			TabSheet3->TabVisible = true;
            Label4->Caption = "ADMIN ADMIN";
		}
		else
		{
			ShowMessage("Autentificare esuata");
            Edit2->Clear();
		}
	}
	else
	{
        ShowMessage("Dvs nu ati completat campurile pentru autentificare");
	}
}
//---------------------------------------------------------------------------



void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
    Edit3->Text=QCLIENT->FieldByName("NPP")->AsString;
	TabSheet3->TabVisible = false;  //imprumut
	TabSheet2->TabVisible=true;       //client
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	QCLIENT->Close();
	QCLIENT->Open();
	TabSheet2->TabVisible = false;
	TabSheet3->TabVisible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
	QPRODUS->Close();
	QPRODUS->Open();
	TabSheet2->TabVisible = false;    //IMPRUMUT
	TabSheet4->TabVisible=true;       //PRODUS
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton11Click(TObject *Sender)
{
    Edit4->Text=QPRODUS->FieldByName("NUME_PRODUS")->AsString;
	TabSheet4->TabVisible = false;  //PRODUS
	TabSheet3->TabVisible=true;     //CLIENT
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton8Click(TObject *Sender)
{
	if( (Edit3->Text!Align="") && (Edit4->Text!="") && (Edit5->Text!="") && (Edit6->Text!=""))
	{
		QINREG->Close();
		QINREG->ParamByName("PRODUS_ID")->AsInteger=AsInteger=QPRODUS->FieldByName("PRODUS_ID")->AsInteger;
		QINREG->ParamByName("OPERATOR_ID")->AsInteger=1;
		QINREG->ParamByName("CLIENT_ID")->AsInteger=QCLIENT->FieldByName("OPERATOR_ID")->AsInteger;
		QINREG->ParamByName("DATA_ELIBERARII")->AsDate=DateTimePicker1->Date;
		QINREG->ParamByName("DATA_RAMBURSARII")->AsDate=DateTimePicker2->Date;
		QINREG->ParamByName("GAJ")->AsFloat=Edit5->Text.ToDouble();
		QINREG->ParamByName("SUMA_ACHITARE")->AsFloat=StrToFloat(Edit6->Text);
		QINREG->ExecSQL();

		FDQuary1->Close();
		FDQuary1->Open();

		ShowMessage("Inegistrare cu succes");

		Edit3->Clear();
		Edit4->Clear();
		Edit5->Clear();
		Edit6->Clear();
	}
	else
	{
        ShoowMessage("Dvs nu ati indeplinit toate campurile");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton13Click(TObject *Sender)
{
	if(MessageDld("DVS INTRADEVAR DORITI SA ELIMINATI INREGISTRAREA?",mtConfirmation,TMsDlButtons() << mb)
	{
		QDELETE->Close();
		QDELETE->ParamByName("Imprumut_id")->AsInteger()=FDQuary1->FieldByName("IMPRUMUT_ID")->AsIneger();

	}

    if (MessageDlg("DVS INTRADEVAR DORITI SA ELIMINATI INREGISTRAREA?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo,0) == mrYes)

	{
        QDELETE->Close();
		QDELETE->ParamByName("Imprumut_id")->AsInteger()=FDQuary1->FieldByName("IMPRUMUT_ID")->AsIneger();
		QDELETE->ExecSQL();

        //REFRESH
        FDQuary1->Close();
		FDQuary1->Open();
		MessageDld("ELIMINARE CU SUCCES",mtInformation,TMsDlgButtons()<<mbOK,0);


	}
}
//---------------------------------------------------------------------------

