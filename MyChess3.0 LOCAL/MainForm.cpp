#include "MyForm.h"
#include "Board.h"
#include "Pieces.h"
#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	//SetConsoleOutputCP(CP_UTF8);

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MyChess30::MyForm form;
	Application::Run(% form);
}
