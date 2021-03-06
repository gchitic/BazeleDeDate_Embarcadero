//---------------------------------------------------------------------------

#ifndef LogareaH
#define LogareaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFAutentificare : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TEdit *Edit1;
	TEdit *Edit2;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	void __fastcall SpeedButton1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFAutentificare(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TFAutentificare *FAutentificare;
//---------------------------------------------------------------------------
#endif
