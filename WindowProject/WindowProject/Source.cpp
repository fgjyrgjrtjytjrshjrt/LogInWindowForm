#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace WindowProject;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WindowProject::MyForm form;
	Application::Run(% form);

	return 0;
}