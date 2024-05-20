#include "LoginForm.h"
using namespace System;
using namespace MustaqilIshs;

[STAThreadAttribute]
void main() {

	Application::RenderWithVisualStyles;

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew LoginForm());
}
