#include "ThisGame.h"
#include"StartPage.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MyGame(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    TicTacToeBlackProject::StartPage form;
    Application::Run(% form);
}

