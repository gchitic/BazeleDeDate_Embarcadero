//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Phys.ODBC.hpp>
#include <FireDAC.Phys.ODBCDef.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label5;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label1;
	TTimer *Timer1;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TTabSheet *TabSheet4;
	TPanel *Panel4;
	TPanel *Panel5;
	TPanel *Panel6;
	TPanel *Panel7;
	TImage *Image1;
	TLabel *Label6;
	TLabel *Label7;
	TEdit *Edit1;
	TEdit *Edit2;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TLabel *Label4;
	TPanel *Panel8;
	TPanel *Panel9;
	TPageControl *PageControl2;
	TTabSheet *TabSheet5;
	TTabSheet *TabSheet6;
	TTabSheet *TabSheet7;
	TLabel *Label8;
	TEdit *Edit3;
	TSpeedButton *SpeedButton3;
	TLabel *Label9;
	TLabel *Label12;
	TSpeedButton *SpeedButton5;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TEdit *Edit8;
	TLabel *Label17;
	TEdit *Edit9;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton6;
	TDBGrid *DBGrid1;
	TFDConnection *FDConnection1;
	TFDQuery *FDQuery1;
	TDataSource *DataSource1;
	TLabel *Label22;
	TEdit *Edit7;
	TSpeedButton *SpeedButton10;
	TSpeedButton *SpeedButton9;
	TEdit *Edit10;
	TLabel *Label23;
	TLabel *Label19;
	TLabel *Label18;
	TLabel *Label20;
	TLabel *Label21;
	TEdit *Edit6;
	TEdit *Edit5;
	TSpeedButton *SpeedButton8;
	TSpeedButton *SpeedButton7;
	TDateTimePicker *DateTimePicker1;
	TDateTimePicker *DateTimePicker2;
	TDateTimePicker *DateTimePicker3;
	TDateTimePicker *DateTimePicker4;
	TEdit *Edit4;
	TPanel *Panel10;
	TPanel *Panel11;
	TDBGrid *DBGrid2;
	TButton *Button1;
	TButton *Button2;
	TDataSource *DSQCLIENT;
	TFDQuery *QCLIENT;
	TDataSource *DataSource2;
	TFDConnection *FDConnection2;
	TPanel *Panel12;
	TPanel *Panel13;
	TSpeedButton *SpeedButton11;
	TSpeedButton *SpeedButton12;
	TDBGrid *DBGrid3;
	TFDQuery *QPRODUS;
	TDataSource *DSQPRODUS;
	TFDQuery *QINREG;
	TSpeedButton *SpeedButton13;
	TFDQuery *QDELETE;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton11Click(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
	void __fastcall SpeedButton13Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
