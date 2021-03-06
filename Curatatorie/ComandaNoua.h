//---------------------------------------------------------------------------

#ifndef ComandaNouaH
#define ComandaNouaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TNewComand : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TLabel *Label1;
	TEdit *Edit1;
	TEdit *Edit2;
	TDateTimePicker *DateTimePicker1;
	TLabel *Label2;
	TDateTimePicker *DateTimePicker2;
	TLabel *Label3;
	TEdit *Edit3;
	TEdit *Edit4;
	TLabel *Label4;
	TLabel *Label5;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TGroupBox *GroupBox1;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TEdit *Edit5;
	TEdit *Edit6;
	TPanel *Panel4;
	TEdit *Edit7;
	TLabel *Label6;
	TSpeedButton *SBactive;
	TSpeedButton *SBinactive;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TImage *Image2;
	TSpeedButton *SBTotal;
	TMemo *Memo1;
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SBactiveClick(TObject *Sender);
	void __fastcall SBinactiveClick(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall SBTotalClick(TObject *Sender);
	void __fastcall Edit3DblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TNewComand(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TNewComand *NewComand;
//---------------------------------------------------------------------------
#endif
