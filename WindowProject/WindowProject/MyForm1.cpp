#include "MyForm1.h"
#include "MyForm.h"

using namespace WindowProject;
System::Void MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	parentForm->Show();
	this->Hide();
}