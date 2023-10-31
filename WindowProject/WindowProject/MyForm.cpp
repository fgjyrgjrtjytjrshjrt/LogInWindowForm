#include "MyForm.h"
#include "MyForm1.h"

using namespace WindowProject;

System::Void MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "User" && textBox2->Text == "1234") {
		MyForm1^ f2 = gcnew MyForm1(this);
		f2->Show();
		this->Hide();
	}
}