//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TMain : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TImage *Image2;
	TLabel *Label3;
	TLabel *Label5;
	TImage *Image4;
	TPanel *Panel4;
	TImage *Image5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TDBGrid *DBGrid1;
	TTimer *Timer1;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label9;
	TImage *Image6;
	TLabel *Label10;
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall RadioButton3Click(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMain *Main;
//---------------------------------------------------------------------------
#endif
