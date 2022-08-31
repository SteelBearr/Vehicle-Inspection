#include "MyForm.h"
#include "Windows.h"
#include "fCreate.h"
#include "MyForm1.h"

using namespace TechnicalInspection;

[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
 System::Void MyForm::btnCreate_Click(System::Object^  sender, System::EventArgs^  e) {
			 fCreate^ f2 = gcnew fCreate(this);
			 f2->Show();
			 this->Enabled = false;

}
 System::Void MyForm::textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e){
	 MyForm1^ fRes = gcnew MyForm1(this);
	 fRes->Show();
	 this->Enabled = false;
 }
