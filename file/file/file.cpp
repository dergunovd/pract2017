#include "MyForm.h"
#include "date.h"

using namespace file;

[STAThreadAttribute]
int main(array<System::String ^> ^args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());
	return 0;
}