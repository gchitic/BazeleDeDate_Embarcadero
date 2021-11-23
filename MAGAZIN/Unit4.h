//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFCEC : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *Panel5;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label1;
	TDateTimePicker *DT1;
	TLabel *Label2;
	TDateTimePicker *DT2;
	TSpeedButton *cauta;
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TSpeedButton *SpeedButton1;
	void __fastcall cautaClick(TObject *Sender);
	void __fastcall DBGrid1CellClick(TColumn *Column);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SpeedButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFCEC(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFCEC *FCEC;
//---------------------------------------------------------------------------
#endif
