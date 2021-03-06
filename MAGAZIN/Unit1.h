//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Graphics.hpp>
//---------------------------------------------------------------------------
class TFMain : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TLabel *Label1;
	TImage *Image1;
	TImage *Image2;
	TLabel *Label2;
	TLabel *Label3;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TEdit *EScan;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TLabel *Label4;
	TLabel *LDescriere;
	TLabel *Label6;
	TLabel *Label7;
	TDBGrid *DBGrid1;
	TPanel *Panel4;
	TPanel *Panel5;
	TPanel *Panel6;
	TPanel *Panel7;
	TLabel *Label8;
	TLabel *Label9;
	TImage *Connect;
	TLabel *Label10;
	TLabel *Label11;
	TPanel *Panel8;
	TImage *Image8;
	TLabel *Label12;
	TLabel *LCasa;
	TLabel *Label14;
	TLabel *LSumaCec;
	TImage *Image9;
	TLabel *Label16;
	TLabel *Label17;
	TImage *Image10;
	TImage *Image11;
	TLabel *Label18;
	TLabel *Label19;
	TLabel *Label20;
	TImage *Image12;
	TLabel *Label21;
	TLabel *Label22;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TImage *Disconnect;
	TTimer *Timer1;
	TPanel *Panel9;
	TLabel *Label23;
	TLabel *Label24;
	TLabel *Label26;
	TEdit *Edit2;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TCheckBox *CBClient;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton9;
	TSpeedButton *SpeedButton10;
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall CBClientClick(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
	void __fastcall SpeedButton9Click(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton10Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFMain *FMain;
//---------------------------------------------------------------------------
#endif
