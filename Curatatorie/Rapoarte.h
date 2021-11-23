//---------------------------------------------------------------------------

#ifndef RapoarteH
#define RapoarteH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TFRapoarte : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TDateTimePicker *DateTimePicker1;
	TLabel *Label2;
	TLabel *Label3;
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TFRapoarte(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFRapoarte *FRapoarte;
//---------------------------------------------------------------------------
#endif
