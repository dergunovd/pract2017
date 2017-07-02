#include "count.h"
#include "MyForm.h"

using namespace factorial;

[STAThreadAttribute]
int main(array<System::String ^> ^args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm1());
	return 0;
}