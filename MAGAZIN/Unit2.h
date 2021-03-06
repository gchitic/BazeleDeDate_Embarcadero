//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFReceptie : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *Panel5;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Edit1;
	TSpeedButton *SpeedButton1;
	TEdit *Edit2;
	TDateTimePicker *DateTimePicker1;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	TDateTimePicker *DateTimePicker2;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TDBGrid *DBGrid1;
	TPanel *Panel6;
	TPanel *Panel7;
	TSpeedButton *SpeedButton7;
	TDBGrid *DBGrid2;
	TPanel *Panel8;
	TPanel *Panel9;
	TPageControl *PageControl2;
	TPageControl *PageControl3;
	TTabSheet *TabSheet6;
	TTabSheet *TabSheet7;
	TTabSheet *TabSheet8;
	TGroupBox *GroupBox1;
	TRadioButton *RB1;
	TRadioButton *RB2;
	TEdit *ECautare;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton10;
	TSpeedButton *SpeedButton11;
	TSpeedButton *SpeedButton12;
	TDBGrid *DBGrid3;
	TLabel *Label10;
	TEdit *Edit9;
	TLabel *Label11;
	TEdit *Edit10;
	TSpeedButton *SpeedButton13;
	TSpeedButton *SpeedButton14;
	TLabel *Label12;
	TEdit *Edit11;
	TLabel *Label13;
	TEdit *s;
	TSpeedButton *SpeedButton15;
	TSpeedButton *SpeedButton16;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall ECautareChange(TObject *Sender);
	void __fastcall RB1Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall SpeedButton13Click(TObject *Sender);
	void __fastcall SpeedButton10Click(TObject *Sender);
	void __fastcall SpeedButton14Click(TObject *Sender);
	void __fastcall SpeedButton11Click(TObject *Sender);
	void __fastcall SpeedButton16Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SpeedButton9Click(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFReceptie(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFReceptie *FReceptie;
//---------------------------------------------------------------------------
#endif
