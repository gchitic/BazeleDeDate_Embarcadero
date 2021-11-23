//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Rapoarte.cpp", FRapoarte);
USEFORM("Unit2.cpp", dm); /* TDataModule: File Type */
USEFORM("Unit1.cpp", Main);
USEFORM("ComandaNoua.cpp", NewComand);
USEFORM("Cautare.cpp", FCautare);
USEFORM("Logarea.cpp", FAutentificare);
USEFORM("Modify.cpp", FModify);
USEFORM("ModifyPage1.cpp", FModifCom);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TMain), &Main);
		Application->CreateForm(__classid(TNewComand), &NewComand);
		Application->CreateForm(__classid(TFCautare), &FCautare);
		Application->CreateForm(__classid(Tdm), &dm);
		Application->CreateForm(__classid(TFRapoarte), &FRapoarte);
		Application->CreateForm(__classid(TFAutentificare), &FAutentificare);
		Application->CreateForm(__classid(TFModify), &FModify);
		Application->CreateForm(__classid(TFModifCom), &FModifCom);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
