//---------------------------------------------------------------------------

#ifndef ModifyPage1H
#define ModifyPage1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFModifCom : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TLabel *Label3;
	TButton *Button1;
	TButton *Button2;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFModifCom(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFModifCom *FModifCom;
//---------------------------------------------------------------------------
#endif
