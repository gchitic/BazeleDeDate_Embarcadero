//---------------------------------------------------------------------------

#ifndef ModifyH
#define ModifyH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFModify : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TImage *Image2;
	TPanel *Panel4;
	TSpeedButton *SBactive;
	TSpeedButton *SBinactive;
	TEdit *Edit1;
	TEdit *Edit2;
	TDateTimePicker *DateTimePicker1;
	TDateTimePicker *DateTimePicker2;
	TGroupBox *GroupBox1;
	TSpeedButton *SBTotal;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TMemo *Memo1;
	TPanel *Panel3;
	TLabel *Label5;
	TLabel *Label10;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TEdit *Edit3;
	TEdit *Edit4;
	void __fastcall SBactiveClick(TObject *Sender);
	void __fastcall SBinactiveClick(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall SBTotalClick(TObject *Sender);
	void __fastcall Edit4Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFModify(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFModify *FModify;
//---------------------------------------------------------------------------
#endif
