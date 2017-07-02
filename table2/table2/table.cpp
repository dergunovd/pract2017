#include "MyForm.h"

using namespace table2;

[STAThreadAttribute]
int main(array<System::String ^> ^args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());
	return 0;
}