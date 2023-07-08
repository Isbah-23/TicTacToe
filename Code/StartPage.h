#pragma once
#include"ThisGame.h"

namespace TicTacToeBlackProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StartPage
	/// </summary>
	public ref class StartPage : public System::Windows::Forms::Form
	{
	//public:Form^ abc;
	public:
		StartPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StartPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TICTACTOE;
	protected:
	private: System::Windows::Forms::Label^ LINE;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ BGM;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartPage::typeid));
			this->TICTACTOE = (gcnew System::Windows::Forms::Label());
			this->LINE = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->BGM = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TICTACTOE
			// 
			resources->ApplyResources(this->TICTACTOE, L"TICTACTOE");
			this->TICTACTOE->BackColor = System::Drawing::Color::Black;
			this->TICTACTOE->ForeColor = System::Drawing::Color::White;
			this->TICTACTOE->Name = L"TICTACTOE";
			// 
			// LINE
			// 
			resources->ApplyResources(this->LINE, L"LINE");
			this->LINE->BackColor = System::Drawing::Color::White;
			this->LINE->Name = L"LINE";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->ForeColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StartPage::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->ForeColor = System::Drawing::Color::White;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &StartPage::button2_Click);
			// 
			// BGM
			// 
			this->BGM->BackColor = System::Drawing::Color::Black;
			this->BGM->ForeColor = System::Drawing::Color::White;
			resources->ApplyResources(this->BGM, L"BGM");
			this->BGM->Name = L"BGM";
			this->BGM->UseVisualStyleBackColor = false;
			this->BGM->Click += gcnew System::EventHandler(this, &StartPage::BGM_Click);
			// 
			// StartPage
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ControlBox = false;
			this->Controls->Add(this->BGM);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LINE);
			this->Controls->Add(this->TICTACTOE);
			this->DoubleBuffered = true;
			this->Name = L"StartPage";
			this->Load += gcnew System::EventHandler(this, &StartPage::StartPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		bool Sounds = true;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ThisGame^ f1 = gcnew ThisGame(this);
		f1->Show();
		if (Sounds == true)
		{
			System::Media::SoundPlayer^ MySong = gcnew System::Media::SoundPlayer("Song.wav");
			MySong->Play();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void StartPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BGM_Click(System::Object^ sender, System::EventArgs^ e) {

	if (Sounds == true)
	{
		Sounds = false;
		BGM->Text = "BGM OFF";
	}
	else 
	{
		Sounds = true;
		BGM->Text = "BGM ON";
	}
}
};
}
