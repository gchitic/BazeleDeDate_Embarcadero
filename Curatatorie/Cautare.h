//---------------------------------------------------------------------------

#ifndef CautareH
#define CautareH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TFCautare : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TLabel *Label1;
	TEdit *Edit1;
	TEdit *Edit3;
	TDateTimePicker *DateTimePicker1;
	TPanel *Panel3;
	TSpeedButton *SpeedButton1;
	TDBGrid *DBGrid2;
	TSpeedButton *SpeedButton2;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFCautare(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFCautare *FCautare;
//---------------------------------------------------------------------------
#endif
