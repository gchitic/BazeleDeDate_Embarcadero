//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit2.cpp", FReceptie);
USEFORM("Unit3.cpp", dm); /* TDataModule: File Type */
USEFORM("Unit1.cpp", FMain);
USEFORM("Autentificare.cpp", FAutentificare);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TFMain), &FMain);
		Application->CreateForm(__classid(TFAutentificare), &FAutentificare);
		Application->CreateForm(__classid(TFReceptie), &FReceptie);
		Application->CreateForm(__classid(Tdm), &dm);
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
