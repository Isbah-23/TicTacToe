#pragma once
#include<cstdlib>
#include<time.h>


namespace TicTacToeBlackProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::Media;

	/// <summary>
	/// Summary for ThisGame
	/// </summary>
	public ref class ThisGame : public System::Windows::Forms::Form
	{
	public:Form^ abc;
	public:

		static int Sixty = 0;
		static int Second = 0;
		String^ Min;
		String^ Sec;


		ThisGame(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ThisGame(Form^ abc1)
		{
			InitializeComponent();
			abc = abc1;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ThisGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ BoardLine1;
	private: System::Windows::Forms::Panel^ BoardLine2;
	private: System::Windows::Forms::Panel^ BoardLine3;
	private: System::Windows::Forms::Panel^ BoardLine4;
	private: System::Windows::Forms::Label^ PLAYER1NAME;
	private: System::Windows::Forms::Label^ PLAYER2NAME;
	private: System::Windows::Forms::Label^ TIE;



	private: System::Windows::Forms::Label^ O;
	private: System::Windows::Forms::Label^ X;
	private: System::Windows::Forms::Label^ NoOFPLAYER1WINS;
	private: System::Windows::Forms::Label^ NoOFTIES;
	private: System::Windows::Forms::Label^ NoOFLAYER2WINS;
	private: System::Windows::Forms::Button^ GameButton1;
	private: System::Windows::Forms::Button^ GameButton2;
	private: System::Windows::Forms::Button^ GameButton3;
	private: System::Windows::Forms::Button^ GameButton4;
	private: System::Windows::Forms::Button^ GameButton5;
	private: System::Windows::Forms::Button^ GameButton6;
	private: System::Windows::Forms::Button^ GameButton7;
	private: System::Windows::Forms::Button^ GameButton8;
	private: System::Windows::Forms::Button^ GameButton9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Next;
	private: System::Windows::Forms::Label^ HOWTOPLAY;
	private: System::Windows::Forms::Label^ INSTRUCTIONS;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ RESTART;
	private: System::Windows::Forms::Button^ NEWGAME;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ VSPLAYERRADIO;

	private: System::Windows::Forms::RadioButton^ VSCOMPUTERRADIO;
	private: System::Windows::Forms::RadioButton^ HARDRADIO;

	private: System::Windows::Forms::RadioButton^ EASYRADIO;
	private: System::Windows::Forms::Button^ STARTGAME;
	private: System::Windows::Forms::Button^ MAINMENU;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ MIDDLERADIO;
	private: System::Windows::Forms::Label^ GAMETIME;
	private: System::Windows::Forms::Timer^ Timer;
	private: System::ComponentModel::IContainer^ components;























	protected:




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ThisGame::typeid));
			this->BoardLine1 = (gcnew System::Windows::Forms::Panel());
			this->BoardLine2 = (gcnew System::Windows::Forms::Panel());
			this->BoardLine3 = (gcnew System::Windows::Forms::Panel());
			this->BoardLine4 = (gcnew System::Windows::Forms::Panel());
			this->PLAYER1NAME = (gcnew System::Windows::Forms::Label());
			this->PLAYER2NAME = (gcnew System::Windows::Forms::Label());
			this->TIE = (gcnew System::Windows::Forms::Label());
			this->O = (gcnew System::Windows::Forms::Label());
			this->X = (gcnew System::Windows::Forms::Label());
			this->NoOFPLAYER1WINS = (gcnew System::Windows::Forms::Label());
			this->NoOFTIES = (gcnew System::Windows::Forms::Label());
			this->NoOFLAYER2WINS = (gcnew System::Windows::Forms::Label());
			this->GameButton1 = (gcnew System::Windows::Forms::Button());
			this->GameButton2 = (gcnew System::Windows::Forms::Button());
			this->GameButton3 = (gcnew System::Windows::Forms::Button());
			this->GameButton4 = (gcnew System::Windows::Forms::Button());
			this->GameButton5 = (gcnew System::Windows::Forms::Button());
			this->GameButton6 = (gcnew System::Windows::Forms::Button());
			this->GameButton7 = (gcnew System::Windows::Forms::Button());
			this->GameButton8 = (gcnew System::Windows::Forms::Button());
			this->GameButton9 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->HOWTOPLAY = (gcnew System::Windows::Forms::Label());
			this->INSTRUCTIONS = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RESTART = (gcnew System::Windows::Forms::Button());
			this->NEWGAME = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->STARTGAME = (gcnew System::Windows::Forms::Button());
			this->VSPLAYERRADIO = (gcnew System::Windows::Forms::RadioButton());
			this->VSCOMPUTERRADIO = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->MIDDLERADIO = (gcnew System::Windows::Forms::RadioButton());
			this->HARDRADIO = (gcnew System::Windows::Forms::RadioButton());
			this->EASYRADIO = (gcnew System::Windows::Forms::RadioButton());
			this->MAINMENU = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->GAMETIME = (gcnew System::Windows::Forms::Label());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// BoardLine1
			// 
			this->BoardLine1->BackColor = System::Drawing::Color::Black;
			this->BoardLine1->Location = System::Drawing::Point(256, 127);
			this->BoardLine1->Name = L"BoardLine1";
			this->BoardLine1->Size = System::Drawing::Size(5, 393);
			this->BoardLine1->TabIndex = 0;
			this->BoardLine1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ThisGame::panel1_Paint);
			// 
			// BoardLine2
			// 
			this->BoardLine2->BackColor = System::Drawing::Color::Black;
			this->BoardLine2->Location = System::Drawing::Point(422, 127);
			this->BoardLine2->Name = L"BoardLine2";
			this->BoardLine2->Size = System::Drawing::Size(5, 393);
			this->BoardLine2->TabIndex = 1;
			// 
			// BoardLine3
			// 
			this->BoardLine3->BackColor = System::Drawing::Color::Black;
			this->BoardLine3->Location = System::Drawing::Point(122, 231);
			this->BoardLine3->Name = L"BoardLine3";
			this->BoardLine3->Size = System::Drawing::Size(431, 5);
			this->BoardLine3->TabIndex = 2;
			// 
			// BoardLine4
			// 
			this->BoardLine4->BackColor = System::Drawing::Color::Black;
			this->BoardLine4->Location = System::Drawing::Point(122, 376);
			this->BoardLine4->Name = L"BoardLine4";
			this->BoardLine4->Size = System::Drawing::Size(431, 5);
			this->BoardLine4->TabIndex = 3;
			// 
			// PLAYER1NAME
			// 
			this->PLAYER1NAME->AutoSize = true;
			this->PLAYER1NAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PLAYER1NAME->ForeColor = System::Drawing::Color::Black;
			this->PLAYER1NAME->Location = System::Drawing::Point(108, 558);
			this->PLAYER1NAME->Name = L"PLAYER1NAME";
			this->PLAYER1NAME->Size = System::Drawing::Size(96, 20);
			this->PLAYER1NAME->TabIndex = 4;
			this->PLAYER1NAME->Text = L"PLAYER 1";
			this->PLAYER1NAME->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->PLAYER1NAME->Click += gcnew System::EventHandler(this, &ThisGame::label1_Click);
			// 
			// PLAYER2NAME
			// 
			this->PLAYER2NAME->AutoSize = true;
			this->PLAYER2NAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PLAYER2NAME->ForeColor = System::Drawing::Color::Black;
			this->PLAYER2NAME->Location = System::Drawing::Point(441, 558);
			this->PLAYER2NAME->Name = L"PLAYER2NAME";
			this->PLAYER2NAME->Size = System::Drawing::Size(96, 20);
			this->PLAYER2NAME->TabIndex = 5;
			this->PLAYER2NAME->Text = L"PLAYER 2";
			this->PLAYER2NAME->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->PLAYER2NAME->Click += gcnew System::EventHandler(this, &ThisGame::label2_Click);
			// 
			// TIE
			// 
			this->TIE->AutoSize = true;
			this->TIE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TIE->ForeColor = System::Drawing::Color::Black;
			this->TIE->Location = System::Drawing::Point(302, 558);
			this->TIE->Name = L"TIE";
			this->TIE->Size = System::Drawing::Size(37, 20);
			this->TIE->TabIndex = 6;
			this->TIE->Text = L"TIE";
			this->TIE->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// O
			// 
			this->O->AutoSize = true;
			this->O->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->O->ForeColor = System::Drawing::Color::Black;
			this->O->Location = System::Drawing::Point(482, 589);
			this->O->Name = L"O";
			this->O->Size = System::Drawing::Size(37, 20);
			this->O->TabIndex = 7;
			this->O->Text = L"(O)";
			this->O->Click += gcnew System::EventHandler(this, &ThisGame::label4_Click);
			// 
			// X
			// 
			this->X->AutoSize = true;
			this->X->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->X->ForeColor = System::Drawing::Color::Black;
			this->X->Location = System::Drawing::Point(140, 589);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(35, 20);
			this->X->TabIndex = 8;
			this->X->Text = L"(X)";
			// 
			// NoOFPLAYER1WINS
			// 
			this->NoOFPLAYER1WINS->AutoSize = true;
			this->NoOFPLAYER1WINS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NoOFPLAYER1WINS->ForeColor = System::Drawing::Color::Black;
			this->NoOFPLAYER1WINS->Location = System::Drawing::Point(145, 619);
			this->NoOFPLAYER1WINS->Name = L"NoOFPLAYER1WINS";
			this->NoOFPLAYER1WINS->Size = System::Drawing::Size(24, 25);
			this->NoOFPLAYER1WINS->TabIndex = 9;
			this->NoOFPLAYER1WINS->Text = L"0";
			// 
			// NoOFTIES
			// 
			this->NoOFTIES->AutoSize = true;
			this->NoOFTIES->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NoOFTIES->ForeColor = System::Drawing::Color::Black;
			this->NoOFTIES->Location = System::Drawing::Point(316, 619);
			this->NoOFTIES->Name = L"NoOFTIES";
			this->NoOFTIES->Size = System::Drawing::Size(24, 25);
			this->NoOFTIES->TabIndex = 10;
			this->NoOFTIES->Text = L"0";
			// 
			// NoOFLAYER2WINS
			// 
			this->NoOFLAYER2WINS->AutoSize = true;
			this->NoOFLAYER2WINS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NoOFLAYER2WINS->ForeColor = System::Drawing::Color::Black;
			this->NoOFLAYER2WINS->Location = System::Drawing::Point(491, 616);
			this->NoOFLAYER2WINS->Name = L"NoOFLAYER2WINS";
			this->NoOFLAYER2WINS->Size = System::Drawing::Size(24, 25);
			this->NoOFLAYER2WINS->TabIndex = 11;
			this->NoOFLAYER2WINS->Text = L"0";
			// 
			// GameButton1
			// 
			this->GameButton1->BackColor = System::Drawing::Color::Black;
			this->GameButton1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->GameButton1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameButton1->ForeColor = System::Drawing::Color::Silver;
			this->GameButton1->Location = System::Drawing::Point(136, 117);
			this->GameButton1->Name = L"GameButton1";
			this->GameButton1->Size = System::Drawing::Size(108, 108);
			this->GameButton1->TabIndex = 12;
			this->GameButton1->UseVisualStyleBackColor = false;
			this->GameButton1->Click += gcnew System::EventHandler(this, &ThisGame::GameButton1_Click);
			// 
			// GameButton2
			// 
			this->GameButton2->BackColor = System::Drawing::Color::Black;
			this->GameButton2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->GameButton2->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameButton2->ForeColor = System::Drawing::Color::Silver;
			this->GameButton2->Location = System::Drawing::Point(289, 113);
			this->GameButton2->Name = L"GameButton2";
			this->GameButton2->Size = System::Drawing::Size(108, 108);
			this->GameButton2->TabIndex = 13;
			this->GameButton2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->GameButton2->UseVisualStyleBackColor = false;
			this->GameButton2->Click += gcnew System::EventHandler(this, &ThisGame::GameButton2_Click);
			// 
			// GameButton3
			// 
			this->GameButton3->BackColor = System::Drawing::Color::Black;
			this->GameButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->GameButton3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->GameButton3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameButton3->ForeColor = System::Drawing::Color::Silver;
			this->GameButton3->Location = System::Drawing::Point(445, 113);
			this->GameButton3->Name = L"GameButton3";
			this->GameButton3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->GameButton3->Size = System::Drawing::Size(108, 108);
			this->GameButton3->TabIndex = 14;
			this->GameButton3->UseVisualStyleBackColor = false;
			this->GameButton3->Click += gcnew System::EventHandler(this, &ThisGame::button3_Click);
			// 
			// GameButton4
			// 
			this->GameButton4->BackColor = System::Drawing::Color::Black;
			this->GameButton4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->GameButton4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameButton4->ForeColor = System::Drawing::Color::Silver;
			this->GameButton4->Location = System::Drawing::Point(136, 247);
			this->GameButton4->Name = L"GameButton4";
			this->GameButton4->Size = System::Drawing::Size(108, 108);
			this->GameButton4->TabIndex = 15;
			this->GameButton4->UseVisualStyleBackColor = false;
			this->GameButton4->Click += gcnew System::EventHandler(this, &ThisGame::GameButton4_Click);
			// 
			// GameButton5
			// 
			this->GameButton5->BackColor = System::Drawing::Color::Black;
			this->GameButton5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->GameButton5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameButton5->ForeColor = System::Drawing::Color::Silver;
			this->GameButton5->Location = System::Drawing::Point(289, 247);
			this->GameButton5->Name = L"GameButton5";
			this->GameButton5->Size = System::Drawing::Size(108, 108);
			this->GameButton5->TabIndex = 16;
			this->GameButton5->UseVisualStyleBackColor = false;
			this->GameButton5->Click += gcnew System::EventHandler(this, &ThisGame::GameButton5_Click);
			// 
			// GameButton6
			// 
			this->GameButton6->BackColor = System::Drawing::Color::Black;
			this->GameButton6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->GameButton6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameButton6->ForeColor = System::Drawing::Color::Silver;
			this->GameButton6->Location = System::Drawing::Point(445, 247);
			this->GameButton6->Name = L"GameButton6";
			this->GameButton6->Size = System::Drawing::Size(108, 108);
			this->GameButton6->TabIndex = 17;
			this->GameButton6->UseVisualStyleBackColor = false;
			this->GameButton6->Click += gcnew System::EventHandler(this, &ThisGame::GameButton6_Click);
			// 
			// GameButton7
			// 
			this->GameButton7->BackColor = System::Drawing::Color::Black;
			this->GameButton7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->GameButton7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameButton7->ForeColor = System::Drawing::Color::Silver;
			this->GameButton7->Location = System::Drawing::Point(136, 392);
			this->GameButton7->Name = L"GameButton7";
			this->GameButton7->Size = System::Drawing::Size(108, 108);
			this->GameButton7->TabIndex = 18;
			this->GameButton7->UseVisualStyleBackColor = false;
			this->GameButton7->Click += gcnew System::EventHandler(this, &ThisGame::GameButton7_Click);
			// 
			// GameButton8
			// 
			this->GameButton8->BackColor = System::Drawing::Color::Black;
			this->GameButton8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->GameButton8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameButton8->ForeColor = System::Drawing::Color::Silver;
			this->GameButton8->Location = System::Drawing::Point(289, 392);
			this->GameButton8->Name = L"GameButton8";
			this->GameButton8->Size = System::Drawing::Size(108, 108);
			this->GameButton8->TabIndex = 19;
			this->GameButton8->UseVisualStyleBackColor = false;
			this->GameButton8->Click += gcnew System::EventHandler(this, &ThisGame::GameButton8_Click);
			// 
			// GameButton9
			// 
			this->GameButton9->BackColor = System::Drawing::Color::Black;
			this->GameButton9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->GameButton9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GameButton9->ForeColor = System::Drawing::Color::Silver;
			this->GameButton9->Location = System::Drawing::Point(445, 392);
			this->GameButton9->Name = L"GameButton9";
			this->GameButton9->Size = System::Drawing::Size(108, 108);
			this->GameButton9->TabIndex = 20;
			this->GameButton9->UseVisualStyleBackColor = false;
			this->GameButton9->Click += gcnew System::EventHandler(this, &ThisGame::GameButton9_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(359, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(114, 15);
			this->textBox1->TabIndex = 22;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ThisGame::textBox1_TextChanged);
			// 
			// Next
			// 
			this->Next->BackColor = System::Drawing::Color::Black;
			this->Next->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Next->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Next->ForeColor = System::Drawing::Color::Black;
			this->Next->Location = System::Drawing::Point(509, 39);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(57, 24);
			this->Next->TabIndex = 23;
			this->Next->Text = L"Next";
			this->Next->TextAlign = System::Drawing::ContentAlignment::TopLeft;
			this->Next->UseVisualStyleBackColor = false;
			this->Next->Click += gcnew System::EventHandler(this, &ThisGame::Next_Click);
			// 
			// HOWTOPLAY
			// 
			this->HOWTOPLAY->AutoSize = true;
			this->HOWTOPLAY->BackColor = System::Drawing::Color::Black;
			this->HOWTOPLAY->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HOWTOPLAY->ForeColor = System::Drawing::Color::White;
			this->HOWTOPLAY->Location = System::Drawing::Point(213, 180);
			this->HOWTOPLAY->Name = L"HOWTOPLAY";
			this->HOWTOPLAY->Size = System::Drawing::Size(260, 48);
			this->HOWTOPLAY->TabIndex = 24;
			this->HOWTOPLAY->Text = L"How To Play :";
			// 
			// INSTRUCTIONS
			// 
			this->INSTRUCTIONS->AllowDrop = true;
			this->INSTRUCTIONS->AutoSize = true;
			this->INSTRUCTIONS->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->INSTRUCTIONS->ForeColor = System::Drawing::Color::White;
			this->INSTRUCTIONS->Location = System::Drawing::Point(12, 239);
			this->INSTRUCTIONS->Name = L"INSTRUCTIONS";
			this->INSTRUCTIONS->Size = System::Drawing::Size(601, 230);
			this->INSTRUCTIONS->TabIndex = 25;
			this->INSTRUCTIONS->Text = resources->GetString(L"INSTRUCTIONS.Text");
			this->INSTRUCTIONS->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(117, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 29);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Name of Player 1 :";
			this->label1->Click += gcnew System::EventHandler(this, &ThisGame::label1_Click_1);
			// 
			// RESTART
			// 
			this->RESTART->BackColor = System::Drawing::Color::Black;
			this->RESTART->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RESTART->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RESTART->ForeColor = System::Drawing::Color::Black;
			this->RESTART->Location = System::Drawing::Point(698, 616);
			this->RESTART->Name = L"RESTART";
			this->RESTART->Size = System::Drawing::Size(75, 23);
			this->RESTART->TabIndex = 27;
			this->RESTART->Text = L"Restart";
			this->RESTART->UseVisualStyleBackColor = false;
			this->RESTART->Click += gcnew System::EventHandler(this, &ThisGame::RESTART_Click);
			// 
			// NEWGAME
			// 
			this->NEWGAME->BackColor = System::Drawing::Color::Black;
			this->NEWGAME->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->NEWGAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NEWGAME->ForeColor = System::Drawing::Color::Black;
			this->NEWGAME->Location = System::Drawing::Point(798, 616);
			this->NEWGAME->Name = L"NEWGAME";
			this->NEWGAME->Size = System::Drawing::Size(115, 23);
			this->NEWGAME->TabIndex = 28;
			this->NEWGAME->Text = L"New Game";
			this->NEWGAME->UseVisualStyleBackColor = false;
			this->NEWGAME->Click += gcnew System::EventHandler(this, &ThisGame::NEWGAME_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->STARTGAME);
			this->groupBox1->Controls->Add(this->VSPLAYERRADIO);
			this->groupBox1->Controls->Add(this->VSCOMPUTERRADIO);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Location = System::Drawing::Point(698, 127);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(215, 393);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			// 
			// STARTGAME
			// 
			this->STARTGAME->BackColor = System::Drawing::Color::Black;
			this->STARTGAME->Enabled = false;
			this->STARTGAME->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->STARTGAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STARTGAME->ForeColor = System::Drawing::Color::Silver;
			this->STARTGAME->Location = System::Drawing::Point(31, 290);
			this->STARTGAME->Name = L"STARTGAME";
			this->STARTGAME->Size = System::Drawing::Size(153, 30);
			this->STARTGAME->TabIndex = 36;
			this->STARTGAME->Text = L"Start Game";
			this->STARTGAME->UseVisualStyleBackColor = false;
			this->STARTGAME->Click += gcnew System::EventHandler(this, &ThisGame::STARTGAME_Click);
			// 
			// VSPLAYERRADIO
			// 
			this->VSPLAYERRADIO->AutoSize = true;
			this->VSPLAYERRADIO->ForeColor = System::Drawing::Color::Silver;
			this->VSPLAYERRADIO->Location = System::Drawing::Point(31, 224);
			this->VSPLAYERRADIO->Name = L"VSPLAYERRADIO";
			this->VSPLAYERRADIO->Size = System::Drawing::Size(86, 20);
			this->VSPLAYERRADIO->TabIndex = 35;
			this->VSPLAYERRADIO->TabStop = true;
			this->VSPLAYERRADIO->Text = L"Vs Player";
			this->VSPLAYERRADIO->UseVisualStyleBackColor = true;
			this->VSPLAYERRADIO->CheckedChanged += gcnew System::EventHandler(this, &ThisGame::VSPLAYERRADIO_CheckedChanged);
			// 
			// VSCOMPUTERRADIO
			// 
			this->VSCOMPUTERRADIO->AutoSize = true;
			this->VSCOMPUTERRADIO->ForeColor = System::Drawing::Color::Silver;
			this->VSCOMPUTERRADIO->Location = System::Drawing::Point(31, 54);
			this->VSCOMPUTERRADIO->Name = L"VSCOMPUTERRADIO";
			this->VSCOMPUTERRADIO->Size = System::Drawing::Size(105, 20);
			this->VSCOMPUTERRADIO->TabIndex = 34;
			this->VSCOMPUTERRADIO->TabStop = true;
			this->VSCOMPUTERRADIO->Text = L"Vs Computer";
			this->VSCOMPUTERRADIO->UseVisualStyleBackColor = true;
			this->VSCOMPUTERRADIO->CheckedChanged += gcnew System::EventHandler(this, &ThisGame::VSCOMPUTERRADIO_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Black;
			this->groupBox2->Controls->Add(this->MIDDLERADIO);
			this->groupBox2->Controls->Add(this->HARDRADIO);
			this->groupBox2->Controls->Add(this->EASYRADIO);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox2->Location = System::Drawing::Point(31, 90);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(153, 109);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &ThisGame::groupBox2_Enter);
			// 
			// MIDDLERADIO
			// 
			this->MIDDLERADIO->AutoSize = true;
			this->MIDDLERADIO->Enabled = false;
			this->MIDDLERADIO->ForeColor = System::Drawing::Color::LightGray;
			this->MIDDLERADIO->Location = System::Drawing::Point(20, 45);
			this->MIDDLERADIO->Name = L"MIDDLERADIO";
			this->MIDDLERADIO->Size = System::Drawing::Size(76, 20);
			this->MIDDLERADIO->TabIndex = 34;
			this->MIDDLERADIO->TabStop = true;
			this->MIDDLERADIO->Text = L"Medium";
			this->MIDDLERADIO->UseVisualStyleBackColor = true;
			this->MIDDLERADIO->CheckedChanged += gcnew System::EventHandler(this, &ThisGame::MIDDLERADIO_CheckedChanged);
			// 
			// HARDRADIO
			// 
			this->HARDRADIO->AutoSize = true;
			this->HARDRADIO->Enabled = false;
			this->HARDRADIO->ForeColor = System::Drawing::Color::Silver;
			this->HARDRADIO->Location = System::Drawing::Point(20, 68);
			this->HARDRADIO->Name = L"HARDRADIO";
			this->HARDRADIO->Size = System::Drawing::Size(58, 20);
			this->HARDRADIO->TabIndex = 33;
			this->HARDRADIO->TabStop = true;
			this->HARDRADIO->Text = L"Hard";
			this->HARDRADIO->UseVisualStyleBackColor = true;
			this->HARDRADIO->CheckedChanged += gcnew System::EventHandler(this, &ThisGame::HARDRADIO_CheckedChanged);
			// 
			// EASYRADIO
			// 
			this->EASYRADIO->AutoSize = true;
			this->EASYRADIO->Enabled = false;
			this->EASYRADIO->ForeColor = System::Drawing::Color::Silver;
			this->EASYRADIO->Location = System::Drawing::Point(20, 21);
			this->EASYRADIO->Name = L"EASYRADIO";
			this->EASYRADIO->Size = System::Drawing::Size(59, 20);
			this->EASYRADIO->TabIndex = 32;
			this->EASYRADIO->TabStop = true;
			this->EASYRADIO->Text = L"Easy";
			this->EASYRADIO->UseVisualStyleBackColor = true;
			this->EASYRADIO->CheckedChanged += gcnew System::EventHandler(this, &ThisGame::EASYRADIO_CheckedChanged);
			// 
			// MAINMENU
			// 
			this->MAINMENU->BackColor = System::Drawing::Color::Black;
			this->MAINMENU->Location = System::Drawing::Point(787, 66);
			this->MAINMENU->Name = L"MAINMENU";
			this->MAINMENU->Size = System::Drawing::Size(115, 38);
			this->MAINMENU->TabIndex = 34;
			this->MAINMENU->Text = L"MAIN MENU";
			this->MAINMENU->UseVisualStyleBackColor = false;
			this->MAINMENU->Click += gcnew System::EventHandler(this, &ThisGame::button1_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(787, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 38);
			this->button1->TabIndex = 35;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ThisGame::button1_Click);
			// 
			// GAMETIME
			// 
			this->GAMETIME->AutoSize = true;
			this->GAMETIME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GAMETIME->ForeColor = System::Drawing::Color::Black;
			this->GAMETIME->Location = System::Drawing::Point(775, 549);
			this->GAMETIME->Name = L"GAMETIME";
			this->GAMETIME->Size = System::Drawing::Size(62, 29);
			this->GAMETIME->TabIndex = 36;
			this->GAMETIME->Text = L"0 : 0";
			this->GAMETIME->Click += gcnew System::EventHandler(this, &ThisGame::GAMETIME_Click);
			// 
			// Timer
			// 
			this->Timer->Enabled = true;
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &ThisGame::GAMETIME_Click);
			// 
			// ThisGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(932, 653);
			this->ControlBox = false;
			this->Controls->Add(this->GAMETIME);
			this->Controls->Add(this->INSTRUCTIONS);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->MAINMENU);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->HOWTOPLAY);
			this->Controls->Add(this->NEWGAME);
			this->Controls->Add(this->RESTART);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->GameButton9);
			this->Controls->Add(this->GameButton8);
			this->Controls->Add(this->GameButton7);
			this->Controls->Add(this->GameButton6);
			this->Controls->Add(this->GameButton5);
			this->Controls->Add(this->GameButton4);
			this->Controls->Add(this->GameButton3);
			this->Controls->Add(this->GameButton2);
			this->Controls->Add(this->GameButton1);
			this->Controls->Add(this->NoOFLAYER2WINS);
			this->Controls->Add(this->NoOFTIES);
			this->Controls->Add(this->NoOFPLAYER1WINS);
			this->Controls->Add(this->X);
			this->Controls->Add(this->O);
			this->Controls->Add(this->TIE);
			this->Controls->Add(this->PLAYER2NAME);
			this->Controls->Add(this->PLAYER1NAME);
			this->Controls->Add(this->BoardLine4);
			this->Controls->Add(this->BoardLine3);
			this->Controls->Add(this->BoardLine2);
			this->Controls->Add(this->BoardLine1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(950, 700);
			this->MinimumSize = System::Drawing::Size(950, 700);
			this->Name = L"ThisGame";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ThisGame";
			this->Load += gcnew System::EventHandler(this, &ThisGame::ThisGame_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		int nameCount = 0;
		int count1 = 0;
		int count2 = 0;
		int TieCount = 0;
		bool TurnDecider = 0;
		bool VsComputer = 0;
		int Mode = 12;
		int TurnCounter = 1;
		int GameCombination = 0;
		int GameCombination2 = 0;
		bool GameInPlay = false;
		

#pragma endregion


		void InitialConditions()
		{
			count1 = 0;
			count2 = 0;
			TurnCounter = 1;
			TieCount = 0;
			TurnDecider = 0;
			VsComputer = 0;
			Mode = 12;
			nameCount = 0;
			GAMETIME->Text = "0 : 0";
			Second = 0;
			Sixty = 0;

			GameButton1->Text = "";
			GameButton2->Text = "";
			GameButton3->Text = "";
			GameButton4->Text = "";
			GameButton5->Text = "";
			GameButton6->Text = "";
			GameButton7->Text = "";
			GameButton8->Text = "";
			GameButton9->Text = "";

			this->GAMETIME->ForeColor = System::Drawing::Color::Black;
			this->PLAYER1NAME->ForeColor = System::Drawing::Color::Black;
			this->PLAYER2NAME->ForeColor = System::Drawing::Color::Black;
			this->TIE->ForeColor = System::Drawing::Color::Black;
			this->NoOFTIES->ForeColor = System::Drawing::Color::Black;
			this->NoOFPLAYER1WINS->ForeColor = System::Drawing::Color::Black;
			this->NoOFLAYER2WINS->ForeColor = System::Drawing::Color::Black;
			this->Next->ForeColor = System::Drawing::Color::Black;
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->X->ForeColor = System::Drawing::Color::Black;
			this->O->ForeColor = System::Drawing::Color::Black;
			this->RESTART->ForeColor = System::Drawing::Color::Black;
			this->NEWGAME->ForeColor = System::Drawing::Color::Black;
			this->BoardLine1->BackColor = System::Drawing::Color::Black;
			this->BoardLine2->BackColor = System::Drawing::Color::Black;
			this->BoardLine3->BackColor = System::Drawing::Color::Black;
			this->BoardLine4->BackColor = System::Drawing::Color::Black;
			this->label1->ForeColor = System::Drawing::Color::Black;
			textBox1->Enabled = true;

			PLAYER1NAME->Text = "PLAYER 1";
			PLAYER2NAME->Text = "PLAYER 1";
			NoOFLAYER2WINS->Text = "0";
			NoOFPLAYER1WINS->Text = "0";
			NoOFTIES->Text = "0";

			HOWTOPLAY->Text = "How To Play";
			INSTRUCTIONS->Text = "Select a game mode to Have the STARTGAME button appear.Then write\nthe name of player 1 and click on next.Then do the same for player 2 (If\nyou are playing multiplayer) to start the game.Take turns alternatively to\ncheck any of the 9 boxes with your sign.First player to check 3 consecutive\nboxes wins.You cannot check a box already taken by the other player.If\nin case all the boxes are checked without any of the two players having\nbeing successfull in making the winning combination, the game is said to\nbe a draw.You can see the number of wins of each player along with the\nnumber of draws at the bottom.Press RESTART to clear the board\nmidgameand NEW GAME to play all over again.";
			GameInPlay = false;
		}

		void ClearBoard()
		{
			GameButton1->Enabled = true;
			GameButton2->Enabled = true;
			GameButton3->Enabled = true;
			GameButton4->Enabled = true;
			GameButton5->Enabled = true;
			GameButton6->Enabled = true;
			GameButton7->Enabled = true;
			GameButton8->Enabled = true;
			GameButton9->Enabled = true;

			GameButton1->Text = "";
			GameButton2->Text = "";
			GameButton3->Text = "";
			GameButton4->Text = "";
			GameButton5->Text = "";
			GameButton6->Text = "";
			GameButton7->Text = "";
			GameButton8->Text = "";
			GameButton9->Text = "";

			this->GameButton1->ForeColor = System::Drawing::Color::LightGray;
			this->GameButton2->ForeColor = System::Drawing::Color::LightGray;
			this->GameButton3->ForeColor = System::Drawing::Color::LightGray;
			this->GameButton4->ForeColor = System::Drawing::Color::LightGray;
			this->GameButton5->ForeColor = System::Drawing::Color::LightGray;
			this->GameButton6->ForeColor = System::Drawing::Color::LightGray;
			this->GameButton7->ForeColor = System::Drawing::Color::LightGray;
			this->GameButton8->ForeColor = System::Drawing::Color::LightGray;
			this->GameButton9->ForeColor = System::Drawing::Color::LightGray;

			
			TurnCounter = 1;
			if(Mode == 3 || Mode == 2)
				TurnDecider = 0;


		}
		void GameStart()
		{

			label1->Text = "Name Of Player 1 :";
			Next->Enabled = true;
			this->PLAYER1NAME->ForeColor = System::Drawing::Color::LightGray;
			this->PLAYER2NAME->ForeColor = System::Drawing::Color::LightGray;
			this->TIE->ForeColor = System::Drawing::Color::LightGray;
			this->NoOFPLAYER1WINS->ForeColor = System::Drawing::Color::LightGray;
			this->NoOFLAYER2WINS->ForeColor = System::Drawing::Color::LightGray;
			this->NoOFTIES->ForeColor = System::Drawing::Color::LightGray;
			this->X->ForeColor = System::Drawing::Color::LightGray;
			this->O->ForeColor = System::Drawing::Color::LightGray;
			this->RESTART->ForeColor = System::Drawing::Color::LightGray;
			this->NEWGAME->ForeColor = System::Drawing::Color::LightGray;
			INSTRUCTIONS->Text = "";
			HOWTOPLAY->Text = "";
			this->Next->ForeColor = System::Drawing::Color::LightGray;
			this->textBox1->BackColor = System::Drawing::Color::LightGray;
			this->label1->ForeColor = System::Drawing::Color::LightGray;
		}

		void EnterNames()
		{
			this->GAMETIME->ForeColor = System::Drawing::Color::LightGray;
			label1->Text = "";
			this->BoardLine1->BackColor = System::Drawing::Color::LightGray;
			this->BoardLine2->BackColor = System::Drawing::Color::LightGray;
			this->BoardLine3->BackColor = System::Drawing::Color::LightGray;
			this->BoardLine4->BackColor = System::Drawing::Color::LightGray;
			this->Next->ForeColor = System::Drawing::Color::Black;
			Next->Enabled = false;
			this->textBox1->BackColor = System::Drawing::Color::Black;
			ClearBoard();
		}

		void Player1WinProtocol()
		{
			MessageBox::Show(PLAYER1NAME->Text + " Wins!!");
			count1++;
			NoOFPLAYER1WINS->Text = Convert::ToString(count1);
			ClearBoard();
		}
		void Player2WinProtocol()
		{
			
			MessageBox::Show(PLAYER2NAME->Text + " Wins!!");
			count2++;
			NoOFLAYER2WINS->Text = Convert::ToString(count2);
			ClearBoard();
		}

		void MediumComputerMoves()
		{
			if (TurnCounter == 2)
			{
				EasyBotComputerMoves();
			}
			else
			{
				if (GameButton1->Text == "X" && GameButton2->Text == "X" && GameButton3->Text == "")
				{
					GameButton3->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
				else if (GameButton1->Text == "X" && GameButton2->Text == "" && GameButton3->Text == "X")
				{
					GameButton2->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
				else if (GameButton1->Text == "" && GameButton2->Text == "X" && GameButton3->Text == "X")
				{
					GameButton1->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}



				else if (GameButton4->Text == "X" && GameButton5->Text == "X" && GameButton6->Text == "")
				{
					GameButton6->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
				else if (GameButton1->Text == "X" && GameButton2->Text == "" && GameButton3->Text == "X")
				{
					GameButton5->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
				else if (GameButton1->Text == "" && GameButton2->Text == "X" && GameButton3->Text == "X")
				{
					GameButton4->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}


				else if (GameButton7->Text == "X" && GameButton8->Text == "X" && GameButton9->Text == "")
				{
					GameButton9->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
				else if (GameButton7->Text == "X" && GameButton8->Text == "" && GameButton9->Text == "X")
				{
					GameButton8->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
				else if (GameButton7->Text == "" && GameButton8->Text == "X" && GameButton9->Text == "X")
				{
					GameButton7->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}



				else if (GameButton1->Text == "X" && GameButton4->Text == "X" && GameButton7->Text == "")
				{
					GameButton7->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
				else if (GameButton1->Text == "X" && GameButton4->Text == "" && GameButton7->Text == "X")
				{
					GameButton4->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
				else if (GameButton1->Text == "" && GameButton4->Text == "X" && GameButton7->Text == "X")
				{
					GameButton1->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}


				else if (GameButton2->Text == "X" && GameButton5->Text == "X" && GameButton8->Text == "")
				{
					GameButton8->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
				else if (GameButton2->Text == "X" && GameButton5->Text == "" && GameButton8->Text == "X")
				{
					GameButton5->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
				else if (GameButton2->Text == "" && GameButton5->Text == "X" && GameButton8->Text == "X")
				{
					GameButton2->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}


				else if (GameButton3->Text == "X" && GameButton6->Text == "X" && GameButton9->Text == "")
				{
				GameButton9->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
				}
				else if (GameButton3->Text == "X" && GameButton6->Text == "" && GameButton9->Text == "X")
				{
				GameButton6->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
				}
				else if (GameButton3->Text == "" && GameButton6->Text == "X" && GameButton9->Text == "X")
				{
				GameButton3->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
				}



				else if (GameButton1->Text == "X" && GameButton5->Text == "X" && GameButton9->Text == "")
				{
				GameButton9->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
				}
				else if (GameButton1->Text == "X" && GameButton5->Text == "" && GameButton9->Text == "X")
				{
				GameButton5->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
				}
				else if (GameButton1->Text == "" && GameButton5->Text == "X" && GameButton9->Text == "X")
				{
				GameButton1->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
				}


				else if (GameButton3->Text == "X" && GameButton5->Text == "X" && GameButton7->Text == "")
				{
				GameButton7->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
				}
				else if (GameButton3->Text == "X" && GameButton5->Text == "" && GameButton7->Text == "X")
				{
				GameButton5->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
				}
				else if (GameButton3->Text == "" && GameButton5->Text == "X" && GameButton7->Text == "X")
				{
				GameButton3->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
				}


				else
				{
				EasyBotComputerMoves();
				TurnCounter++;
				}
			}
		}

		void EasyBotComputerMoves()
		{
			int check = 0;
			bool HasHadTurn = false;

			while ( HasHadTurn == false)
			{
				srand(time(0));
				check = (rand() % 9 + 1);
				if (check == 1)
				{
					if (GameButton1->Text == "")
					{
						GameButton1->Text = "O";
						TurnDecider = 0;
						HasHadTurn = true;
					}
				}

				if (check == 2)
				{
					if (GameButton2->Text == "")
					{
						GameButton2->Text = "O";
						TurnDecider = 0;
						HasHadTurn = true;
					}
				}

				if (check == 3)
				{
					if (GameButton3->Text == "")
					{
						GameButton3->Text = "O";
						TurnDecider = 0;
						HasHadTurn = true;
					}
				}

				if (check == 4)
				{
					if (GameButton4->Text == "")
					{
						GameButton4->Text = "O";
						TurnDecider = 0;
						HasHadTurn = true;
					}
				}

				if (check == 5)
				{
					if (GameButton5->Text == "")
					{
						GameButton5->Text = "O";
						TurnDecider = 0;
						HasHadTurn = true;
					}
				}

				if (check == 6)
				{
					if (GameButton6->Text == "")
					{
						GameButton6->Text = "O";
						TurnDecider = 0;
						HasHadTurn = true;
					}
				}

				if (check == 7)
				{
					if (GameButton7->Text == "")
					{
						GameButton7->Text = "O";
						TurnDecider = 0;
						HasHadTurn = true;
					}
				}

				if (check == 8)
				{
					if (GameButton8->Text == "")
					{
						GameButton8->Text = "O";
						TurnDecider = 0;
						HasHadTurn = true;
					}
				}

				if (check == 9)
				{
					if (GameButton9->Text == "")
					{
						GameButton9->Text = "O";
						TurnDecider = 0;
						HasHadTurn = true;
					} 
				}
			}
		}

		void MiddleButtonChecked()
		{
			if (GameButton1->Text == "X" && GameButton5->Text == "X" && GameButton9->Text == "")
			{
				GameButton9->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
			}
			else if (GameButton9->Text == "X" && GameButton5->Text == "X" && GameButton1->Text == "")
			{
				GameButton1->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
			}
			else if (GameButton2->Text == "X" && GameButton5->Text == "X" && GameButton8->Text == "")
			{
				GameButton8->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
			}
			else if (GameButton8->Text == "X" && GameButton5->Text == "X" && GameButton2->Text == "")
			{
				GameButton2->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
			}
			else if (GameButton4->Text == "X" && GameButton5->Text == "X" && GameButton6->Text == "")
			{
				GameButton6->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
			}
			else if (GameButton6->Text == "X" && GameButton5->Text == "X" && GameButton4->Text == "")
			{
				GameButton4->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
			}
			else if (GameButton3->Text == "X" && GameButton5->Text == "X" && GameButton7->Text == "")
			{
				GameButton7->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
			}
			else if (GameButton7->Text == "X" && GameButton5->Text == "X" && GameButton3->Text == "")
			{
				GameButton3->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
			}
			else if (GameButton7->Text == "X" && GameButton9->Text == "X" && GameButton8->Text == "")
			{
				GameButton8->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
			}
			else if (GameButton7->Text == "X" && GameButton5->Text == "X" && GameButton7->Text == "")
			{
				GameButton7->Text = "O";
				TurnDecider = 0;
				TurnCounter++;
			}
			else
			{
				EasyBotComputerMoves();
				TurnCounter++;
			}
		}

		void HardBotComputerMoves()
		{
			if (TurnCounter == 8)
			{
				if (GameCombination2 == 1)
				{
					if (GameButton6->Text == "")
					{
						GameButton6->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton8->Text == ""&& GameButton9->Text == "X")
					{
						GameButton8->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton9->Text == "" && GameButton8->Text == "X")
					{

						GameButton9->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						EasyBotComputerMoves();
					}
				}
				if (GameCombination2 == 2)
				{
					if (GameButton2->Text == "")
					{
						GameButton2->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton1->Text == "X" && GameButton4->Text == "")
					{
						GameButton4->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton1->Text == "" && GameButton4->Text == "X")
					{
						GameButton1->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						EasyBotComputerMoves();
					}
				}
				if (GameCombination2 == 82)
				{
					if (GameButton1->Text == "")
					{
						GameButton1->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton6->Text == "")
					{
						GameButton6->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton4->Text == "")
					{
						GameButton4->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						EasyBotComputerMoves();
					}

				}
				if (GameCombination2 == 4)
				{
					if (GameButton4->Text == "")
					{
						GameButton4->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton7->Text == "" && GameButton8->Text == "X")
					{
						GameButton7->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton7->Text == "X" && GameButton8->Text == "")
					{
						GameButton8->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						EasyBotComputerMoves();
					}
				}
				if (GameCombination2 == 5)
				{
					if (GameButton2->Text == "")
					{
						GameButton2->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton3->Text == "" && GameButton6->Text == "X")
					{
						GameButton3->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton3->Text == "X" && GameButton6->Text == "")
					{
						GameButton6->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						EasyBotComputerMoves();
					}
				}
				if (GameCombination2 == 6)
				{
					if (GameButton7->Text == "X")
					{
						GameButton8->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						GameButton7->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				if (GameCombination2 == 7)
				{
					if (GameButton4->Text == "")
					{
						GameButton4->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton1->Text == "" && GameButton2->Text == "X")
					{
						GameButton1->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton1->Text == "X" && GameButton2->Text == "")
					{
						GameButton2->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						EasyBotComputerMoves();
					}
				}
				if (GameCombination2 == 8)
				{
					if (GameButton8->Text == "")
					{
						GameButton8->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton6->Text == "" && GameButton9->Text == "X")
					{
						GameButton6->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton6->Text == "X" && GameButton9->Text == "")
					{
						GameButton9->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						EasyBotComputerMoves();
					}
				}
				if (GameCombination2 == 9)
				{
					if (GameButton1->Text == "")
					{
						GameButton1->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						GameButton2->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				if (GameCombination2 == 10)
				{
					if (GameButton8->Text == "")
					{
						GameButton8->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton7->Text == "" && GameButton4->Text == "X")
					{
						GameButton7->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton7->Text == "X" && GameButton4->Text == "")
					{
						GameButton4->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						EasyBotComputerMoves();
					}
				}
				if (GameCombination2 == 11)
				{
					if (GameButton6->Text == "")
					{
						GameButton6->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton1->Text == "" && GameButton2->Text == "X")
					{
						GameButton1->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton1->Text == "X" && GameButton2->Text == "")
					{
						GameButton2->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						EasyBotComputerMoves();
					}
				}
				if (GameCombination2 == 12)
				{
					if (GameButton7->Text == "")
					{
						GameButton7->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						GameButton4->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				if (GameCombination2 == 13)
				{
					if (GameButton7->Text == "")
					{
						GameButton7->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton9->Text == "X" && GameButton8->Text == "")
					{
						GameButton8->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else if (GameButton8->Text == "X" && GameButton9->Text == "")
					{
						GameButton9->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						EasyBotComputerMoves();
					}
				}
				if (GameCombination2 == 14)
				{
					if (GameButton8->Text == "")
					{
						GameButton8->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						GameButton7->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				if (GameCombination2 == 15)
				{
					if (GameButton9->Text == "")
					{
						GameButton9->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						GameButton8->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				if (GameCombination2 == 16)
				{
					if (GameButton6->Text == "")
					{
						GameButton6->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						GameButton9->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				if (GameCombination2 == 17)
				{
					if (GameButton6->Text == "")
					{
						GameButton6->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
					else
					{
						GameButton3->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				else if (GameButton5->Text == "X")
					MiddleButtonChecked();
			}
			if(TurnCounter == 6)
			{
				if (GameCombination == 1)
				{
					if (GameButton7->Text == "X")
					{
						if ((GameButton1->Text == "X" && GameButton6->Text == "X" && GameButton5->Text == "O") ||
							((GameButton1->Text == "X" && GameButton2->Text == "X" && GameButton5->Text == "O")))
						{
							GameButton4->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 1;
						}
						else if ((GameButton2->Text == "X" && GameButton9->Text == "X" && GameButton5->Text == "O") ||
							(GameButton6->Text == "X" && GameButton9->Text == "X" && GameButton5->Text == "O"))
						{
							GameButton8->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 2;
						}
						else if((GameButton2->Text == "X" && GameButton6->Text == "X" && GameButton5->Text == "O") ||
							(GameButton2->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O"))
						{
							GameButton9->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 82;
						}
					}
					else
					{
						GameButton7->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}

				}
				if (GameCombination == 2)
				{
					if (GameButton9->Text == "X")
					{
						if ((GameButton2->Text == "X" && GameButton3->Text == "X" && GameButton5->Text == "O") ||
							(GameButton3->Text == "X" && GameButton4->Text == "X" && GameButton5->Text == "O"))
						{
							GameButton6->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 4;
						}
						else if ((GameButton2->Text == "X" && GameButton7->Text == "X" && GameButton5->Text == "O") ||
							(GameButton4->Text == "X" && GameButton7->Text == "X" && GameButton5->Text == "O"))
						{
							GameButton8->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 5;
						}
						else if ((GameButton2->Text == "X" && GameButton4->Text == "X" && GameButton5->Text == "O") ||
							(GameButton4->Text == "X" && GameButton6->Text == "X" && GameButton5->Text == "O"))
						{
							GameButton3->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 6;
						}
					}
					else
					{
						GameButton9->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}

				}
				if (GameCombination == 3)
				{
					if (GameButton3->Text == "X")
					{
						if ((GameButton4->Text == "X" && GameButton9->Text == "X" && GameButton5->Text == "O") ||
							(GameButton8->Text == "X" && GameButton9->Text == "X" && GameButton5->Text == "O"))
						{
							GameButton6->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 7;
						}
						else if ((GameButton1->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O") ||
							(GameButton1->Text == "X" && GameButton4->Text == "X" && GameButton5->Text == "O"))
						{
							GameButton2->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 8;
						}
						else if (GameButton4->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O")
						{
							GameButton9->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 9;
						}
					}
					else
					{
						GameButton3->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				if (GameCombination == 4)
				{
					if (GameButton1->Text == "X")
					{
						if ((GameButton3->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O") ||
							(GameButton3->Text == "X" && GameButton6->Text == "X" && GameButton5->Text == "O"))
						{
							GameButton2->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 10;
						}
						else if((GameButton7->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O") ||
							(GameButton6->Text == "X" && GameButton7->Text == "X" && GameButton5->Text == "O"))
						{
							GameButton4->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 11;
						}
						else if (GameButton6->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O")
						{
							GameButton3->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 12;
						}
					}
					else
					{
						GameButton1->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				if (GameCombination == 5)
				{
					if (GameButton6->Text == "X")
					{
						GameButton3->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
						GameCombination2 = 13;
					}
					else
					{
						GameButton6->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}

				}
				if (GameCombination == 6)
				{
					if (GameButton4->Text == "X")
					{
						if (GameButton3->Text == "X" && GameButton9->Text == "X" && GameButton5->Text == "O")
						{
							GameButton2->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 14;
						}
						else
						{
							GameButton1->Text = "O";
							TurnDecider = 0;
							TurnCounter++;
							GameCombination2 = 15;
						}
					}
					else
					{
						GameButton4->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				if (GameCombination == 7)
				{
					if (GameButton8->Text == "X")
					{
						GameButton4->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
						GameCombination2 = 16;
					}
					else
					{
						GameButton8->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				if (GameCombination == 8)
				{
					if (GameButton2->Text == "X")
					{
						GameButton4->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
						GameCombination2 = 17;
					}
					else
					{
						GameButton2->Text = "O";
						TurnDecider = 0;
						TurnCounter++;
					}
				}
				else if (GameButton5->Text == "X")
					MiddleButtonChecked();
			}

			if (TurnCounter == 4)
			{
				if ((GameButton1->Text == "X" && GameButton6->Text == "X" && GameButton5->Text == "O") ||
					(GameButton2->Text == "X" && GameButton9->Text == "X" && GameButton5->Text == "O") ||
					(GameButton1->Text == "X" && GameButton2->Text == "X" && GameButton5->Text == "O") ||
					(GameButton2->Text == "X" && GameButton6->Text == "X" && GameButton5->Text == "O") ||
					(GameButton2->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O") ||
					(GameButton6->Text == "X" && GameButton9->Text == "X" && GameButton5->Text == "O"))
				{
					GameButton3->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
					GameCombination = 1;
				}
				else if ((GameButton3->Text == "X" && GameButton4->Text == "X" && GameButton5->Text == "O") ||
					(GameButton2->Text == "X" && GameButton7->Text == "X" && GameButton5->Text == "O") ||
					(GameButton2->Text == "X" && GameButton3->Text == "X" && GameButton5->Text == "O") ||
					(GameButton2->Text == "X" && GameButton4->Text == "X" && GameButton5->Text == "O") ||
					(GameButton4->Text == "X" && GameButton6->Text == "X" && GameButton5->Text == "O") ||
					(GameButton4->Text == "X" && GameButton7->Text == "X" && GameButton5->Text == "O"))
				{
					GameButton1->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
					GameCombination = 2;
				}
				else if ((GameButton4->Text == "X" && GameButton9->Text == "X" && GameButton5->Text == "O") ||
					(GameButton1->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O") ||
					(GameButton1->Text == "X" && GameButton4->Text == "X" && GameButton5->Text == "O") ||
					(GameButton4->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O") ||
					(GameButton8->Text == "X" && GameButton9->Text == "X" && GameButton5->Text == "O"))
				{
					GameButton7->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
					GameCombination = 3;
				}
				else if ((GameButton3->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O") ||
					(GameButton3->Text == "X" && GameButton6->Text == "X" && GameButton5->Text == "O") ||
					(GameButton6->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O") ||
					(GameButton7->Text == "X" && GameButton8->Text == "X" && GameButton5->Text == "O") ||
					(GameButton6->Text == "X" && GameButton7->Text == "X" && GameButton5->Text == "O"))
				{
					GameButton9->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
					GameCombination = 4;
				}
				else if ((GameButton1->Text == "X" && GameButton7->Text == "X" && GameButton5->Text == "O") ||
					(GameButton1->Text == "X" && GameButton9->Text == "X" && GameButton5->Text == "O"))
				{
					GameButton4->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
					GameCombination = 5;
				}
				else if ((GameButton3->Text == "X" && GameButton7->Text == "X" && GameButton5->Text == "O") ||
					(GameButton3->Text == "X" && GameButton9->Text == "X" && GameButton5->Text == "O"))
				{
					GameButton6->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
					GameCombination = 6;
				}
				else if (GameButton1->Text == "X" && GameButton3->Text == "X" && GameButton5->Text == "O")
				{
					GameButton2->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
					GameCombination = 7;
				}
				else if (GameButton9->Text == "X" && GameButton7->Text == "X" && GameButton5->Text == "O")
				{
					GameButton8->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
					GameCombination = 8;
				}
				else if (GameButton5->Text == "X")
					MiddleButtonChecked();

			}

			if (TurnCounter == 2)
			{
				if (GameButton5->Text == "")
				{
					GameButton5->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
				else
				{
					GameButton1->Text = "O";
					TurnDecider = 0;
					TurnCounter++;
				}
			}
		}

		void GameWon() //Function to check who if anyone won the game.
		{

			//////////////////////////PLAYER X//////////////////////////////////////////////////////////////////////
			if (GameButton3->Text == "X" && GameButton6->Text == "X" && GameButton9->Text == "X")
			{
				this->GameButton1->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton5->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton7->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;
				
				this->GameButton3->ForeColor = System::Drawing::Color::White;
				this->GameButton6->ForeColor = System::Drawing::Color::White;
				this->GameButton9->ForeColor = System::Drawing::Color::White;


				Player1WinProtocol();

			}
			if (GameButton6->Text == "X" && GameButton4->Text == "X" && GameButton5->Text == "X")
			{
				this->GameButton1->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton3->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton7->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton9->ForeColor = System::Drawing::Color::DimGray;
				
				this->GameButton4->ForeColor = System::Drawing::Color::White;
				this->GameButton6->ForeColor = System::Drawing::Color::White;
				this->GameButton5->ForeColor = System::Drawing::Color::White;

				Player1WinProtocol();
			}
			if (GameButton9->Text == "X" && GameButton7->Text == "X" && GameButton8->Text == "X")
			{
				this->GameButton1->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton3->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton5->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;

				this->GameButton7->ForeColor = System::Drawing::Color::White;
				this->GameButton8->ForeColor = System::Drawing::Color::White;
				this->GameButton9->ForeColor = System::Drawing::Color::White;

				Player1WinProtocol();
			}
			if (GameButton1->Text == "X" && GameButton5->Text == "X" && GameButton9->Text == "X")
			{
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton3->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton7->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;
				
				this->GameButton1->ForeColor = System::Drawing::Color::White;
				this->GameButton5->ForeColor = System::Drawing::Color::White;
				this->GameButton9->ForeColor = System::Drawing::Color::White;

				Player1WinProtocol();
			}
			if (GameButton1->Text == "X" && GameButton2->Text == "X" && GameButton3->Text == "X")
			{
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton5->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton7->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton9->ForeColor = System::Drawing::Color::DimGray;
			
				this->GameButton1->ForeColor = System::Drawing::Color::White;
				this->GameButton2->ForeColor = System::Drawing::Color::White;
				this->GameButton3->ForeColor = System::Drawing::Color::White;

				Player1WinProtocol();
			}
			if (GameButton7->Text == "X" && GameButton5->Text == "X" && GameButton3->Text == "X")
			{
				this->GameButton1->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton9->ForeColor = System::Drawing::Color::DimGray;
			
				this->GameButton7->ForeColor = System::Drawing::Color::White;
				this->GameButton5->ForeColor = System::Drawing::Color::White;
				this->GameButton3->ForeColor = System::Drawing::Color::White;

				Player1WinProtocol();
			}
			if (GameButton7->Text == "X" && GameButton4->Text == "X" && GameButton1->Text == "X")
			{
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton3->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton5->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton9->ForeColor = System::Drawing::Color::DimGray;
			
				this->GameButton1->ForeColor = System::Drawing::Color::White;
				this->GameButton4->ForeColor = System::Drawing::Color::White;
				this->GameButton7->ForeColor = System::Drawing::Color::White;

				Player1WinProtocol();
			}
			if (GameButton2->Text == "X" && GameButton5->Text == "X" && GameButton8->Text == "X")
			{
				this->GameButton1->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton3->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton7->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton9->ForeColor = System::Drawing::Color::DimGray;
			
				this->GameButton2->ForeColor = System::Drawing::Color::White;
				this->GameButton5->ForeColor = System::Drawing::Color::White;
				this->GameButton8->ForeColor = System::Drawing::Color::White;

				Player1WinProtocol();
			}


			if (GameButton1->Text == "O" && GameButton2->Text == "O" && GameButton3->Text == "O")
			{
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton5->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton7->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton9->ForeColor = System::Drawing::Color::DimGray;

				this->GameButton1->ForeColor = System::Drawing::Color::White;
				this->GameButton2->ForeColor = System::Drawing::Color::White;
				this->GameButton3->ForeColor = System::Drawing::Color::White;
				Player2WinProtocol();
			}
			if (GameButton6->Text == "O" && GameButton4->Text == "O" && GameButton5->Text == "O")
			{
				this->GameButton1->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton3->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton7->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton9->ForeColor = System::Drawing::Color::DimGray;

				this->GameButton4->ForeColor = System::Drawing::Color::White;
				this->GameButton6->ForeColor = System::Drawing::Color::White;
				this->GameButton5->ForeColor = System::Drawing::Color::White;
				Player2WinProtocol();
			}
			if (GameButton9->Text == "O" && GameButton7->Text == "O" && GameButton8->Text == "O")
			{
				this->GameButton1->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton3->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton5->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;

				this->GameButton7->ForeColor = System::Drawing::Color::White;
				this->GameButton8->ForeColor = System::Drawing::Color::White;
				this->GameButton9->ForeColor = System::Drawing::Color::White;
				Player2WinProtocol();
			}
			if (GameButton1->Text == "O" && GameButton5->Text == "O" && GameButton9->Text == "O")
			{
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton3->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton7->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;

				this->GameButton1->ForeColor = System::Drawing::Color::White;
				this->GameButton5->ForeColor = System::Drawing::Color::White;
				this->GameButton9->ForeColor = System::Drawing::Color::White;
				Player2WinProtocol();
			}
			if (GameButton7->Text == "O" && GameButton5->Text == "O" && GameButton3->Text == "O")
			{
				this->GameButton1->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton9->ForeColor = System::Drawing::Color::DimGray;

				this->GameButton7->ForeColor = System::Drawing::Color::White;
				this->GameButton5->ForeColor = System::Drawing::Color::White;
				this->GameButton3->ForeColor = System::Drawing::Color::White;
				Player2WinProtocol();
			}
			if (GameButton7->Text == "O" && GameButton4->Text == "O" && GameButton1->Text == "O")
			{
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton3->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton5->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton9->ForeColor = System::Drawing::Color::DimGray;

				this->GameButton1->ForeColor = System::Drawing::Color::White;
				this->GameButton4->ForeColor = System::Drawing::Color::White;
				this->GameButton7->ForeColor = System::Drawing::Color::White;
				Player2WinProtocol();
			}
			if (GameButton2->Text == "O" && GameButton5->Text == "O" && GameButton8->Text == "O")
			{
				this->GameButton1->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton3->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton6->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton7->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton9->ForeColor = System::Drawing::Color::DimGray;

				this->GameButton2->ForeColor = System::Drawing::Color::White;
				this->GameButton5->ForeColor = System::Drawing::Color::White;
				this->GameButton8->ForeColor = System::Drawing::Color::White;
				Player2WinProtocol();
			}
			if (GameButton3->Text == "O" && GameButton6->Text == "O" && GameButton9->Text == "O")
			{
				this->GameButton1->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton2->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton4->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton5->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton7->ForeColor = System::Drawing::Color::DimGray;
				this->GameButton8->ForeColor = System::Drawing::Color::DimGray;

				this->GameButton3->ForeColor = System::Drawing::Color::White;
				this->GameButton6->ForeColor = System::Drawing::Color::White;
				this->GameButton9->ForeColor = System::Drawing::Color::White;
				Player2WinProtocol();
			}
			
			if ((GameButton1->Text != "" && GameButton2->Text != "" && GameButton3->Text != "") &&
				(GameButton6->Text != "" && GameButton4->Text != "" && GameButton5->Text != "") &&
				(GameButton9->Text != "" && GameButton7->Text != "" && GameButton8->Text != "")
				)
			{
				this->GameButton1->ForeColor = System::Drawing::Color::LightCoral;
				this->GameButton2->ForeColor = System::Drawing::Color::LightCoral;
				this->GameButton3->ForeColor = System::Drawing::Color::LightCoral;
				this->GameButton4->ForeColor = System::Drawing::Color::LightCoral;
				this->GameButton5->ForeColor = System::Drawing::Color::LightCoral;
				this->GameButton6->ForeColor = System::Drawing::Color::LightCoral;
				this->GameButton7->ForeColor = System::Drawing::Color::LightCoral;
				this->GameButton8->ForeColor = System::Drawing::Color::LightCoral;
				this->GameButton9->ForeColor = System::Drawing::Color::LightCoral;
				TieCount++;
				NoOFTIES->Text = Convert::ToString(TieCount);
				MessageBox::Show("It is a Draw ¯\_(._.)_/¯ ");
				ClearBoard();
			}
		}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (GameButton3->Text == "" && nameCount == 2 )
	{
		TurnCounter++;
		if (TurnDecider == 0)
		{
			GameButton3->Text = "X";
			TurnDecider = 1;
		}
		else
		{
			GameButton3->Text = "O";
			TurnDecider = 0;
		}
		GameWon();
		if (VsComputer == true && Mode == 2)
			MediumComputerMoves();
		else if (VsComputer == true && Mode == 1)
			EasyBotComputerMoves();
		else if (VsComputer == true && Mode == 3)
			HardBotComputerMoves();

	}
	GameWon();
}
private: System::Void GameButton1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (GameButton1->Text == "" && nameCount == 2)
	{
		TurnCounter++;
		if (TurnDecider == 0)
		{
			GameButton1->Text = "X";
			TurnDecider = 1;
		}
		else
		{
			GameButton1->Text = "O";
			TurnDecider = 0;
		}
		GameWon();
		if (VsComputer == true && Mode == 2)
			MediumComputerMoves();
		else if (VsComputer == true && Mode == 1)
			EasyBotComputerMoves();
		else if (VsComputer == true && Mode == 3)
			HardBotComputerMoves();
	}
	GameWon();
}
private: System::Void GameButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (GameButton2->Text == "" && nameCount == 2)
	{
		TurnCounter++;
		if (TurnDecider == 0)
		{
			GameButton2->Text = "X";
			TurnDecider = 1;
		}
		else
		{
			GameButton2->Text = "O";
			TurnDecider = 0;
		}
		GameWon();
		if (VsComputer == true && Mode == 2)
			MediumComputerMoves();
		else if (VsComputer == true && Mode == 1)
			EasyBotComputerMoves();
		else if (VsComputer == true && Mode == 3)
			HardBotComputerMoves();
	}
	GameWon();

}
private: System::Void GameButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (GameButton4->Text == "" && nameCount == 2)
	{
		TurnCounter++;
		if (TurnDecider == 0)
		{
			GameButton4->Text = "X";
			TurnDecider = 1;
		}
		else
		{
			GameButton4->Text = "O";
			TurnDecider = 0;
		}
		GameWon();
		if (VsComputer == true && Mode == 2)
			MediumComputerMoves();
		else if (VsComputer == true && Mode == 1)
			EasyBotComputerMoves();
		else if (VsComputer == true && Mode == 3)
			HardBotComputerMoves();
	}
	GameWon();
}
private: System::Void GameButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (GameButton5->Text == "" && nameCount == 2)
	{
		TurnCounter++;
		if (TurnDecider == 0)
		{
			GameButton5->Text = "X";
			TurnDecider = 1;
		}
		else
		{
			GameButton5->Text = "O";
			TurnDecider = 0;
		}
		GameWon();
		if (VsComputer == true && Mode == 2)
			MediumComputerMoves();
		else if (VsComputer == true && Mode == 1)
			EasyBotComputerMoves();
		else if (VsComputer == true && Mode == 3)
			HardBotComputerMoves();
	}
	GameWon();

}
private: System::Void GameButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (GameButton6->Text == "" && nameCount == 2 )
	{
		TurnCounter++;
		if (TurnDecider == 0)
		{
			GameButton6->Text = "X";
			TurnDecider = 1;
		}
		else
		{
			GameButton6->Text = "O";
			TurnDecider = 0;
		}
		GameWon();
		if (VsComputer == true && Mode == 2)
			MediumComputerMoves();
		else if (VsComputer == true && Mode == 1)
			EasyBotComputerMoves();
		else if (VsComputer == true && Mode == 3)
			HardBotComputerMoves();
	}
	GameWon();
}
private: System::Void GameButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (GameButton7->Text == "" && nameCount == 2)
	{
		TurnCounter++;
		if (TurnDecider == 0)
		{
			GameButton7->Text = "X";
			TurnDecider = 1;
		}
		else
		{
			GameButton7->Text = "O";
			TurnDecider = 0;
		}
		GameWon();
		if (VsComputer == true && Mode == 2)
			MediumComputerMoves();
		else if (VsComputer == true && Mode == 1)
			EasyBotComputerMoves();
		else if (VsComputer == true && Mode == 3)
			HardBotComputerMoves();
	}
	GameWon();
}
private: System::Void GameButton8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (GameButton8->Text == "" && nameCount == 2 )
	{
		TurnCounter++;
		if (TurnDecider == 0)
		{
			GameButton8->Text = "X";
			TurnDecider = 1;
		}
		else
		{
			GameButton8->Text = "O";
			TurnDecider = 0;
		}
		GameWon();
		if (VsComputer == true && Mode == 2)
			MediumComputerMoves();
		else if (VsComputer == true && Mode == 1)
			EasyBotComputerMoves();
		else if (VsComputer == true && Mode == 3)
			HardBotComputerMoves();
	}
	GameWon();
}
private: System::Void GameButton9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (GameButton9->Text == "" && nameCount == 2 )
	{
		TurnCounter++;
		if (TurnDecider == 0)
		{
			GameButton9->Text = "X";
			TurnDecider = 1;
		}
		else
		{
			GameButton9->Text = "O";
			TurnDecider = 0;
		}
		GameWon();
		if (VsComputer == true && Mode == 2)
			MediumComputerMoves();
		else if (VsComputer == true && Mode == 1)
			EasyBotComputerMoves();
		else if (VsComputer == true && Mode == 3)
			HardBotComputerMoves();
	}
	GameWon();
}
private: System::Void NAMEBOX_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {


	if (nameCount == 1)
	{
		this->GAMETIME->ForeColor = System::Drawing::Color::LightGray;
		PLAYER2NAME->Text = textBox1->Text;
		textBox1->Text = "";
		nameCount++;
		EnterNames();
	}
	if (nameCount == 0)
	{
		PLAYER1NAME->Text = textBox1->Text;
		textBox1->Text = "";
		label1->Text = "Name of Player 2 : ";
		nameCount++;
		if (VsComputer == true && Mode == 2)
		{
			PLAYER2NAME->Text = "Medium Computer Bot";
			textBox1->Text = "";
			nameCount++;
			EnterNames();	
		}
		else if ( VsComputer == true && Mode == 3)
		{
			PLAYER2NAME->Text = "Hard Computer Bot";
			textBox1->Text = "";
			nameCount++;
			EnterNames();
			
		}
		else if (VsComputer == true && Mode == 1)
		{
			PLAYER2NAME->Text = "Easy Computer Bot";
			textBox1->Text = "";
			nameCount++;
			EnterNames();
		}
	}
}
private: System::Void ThisGame_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void vsComputer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void RESTART_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearBoard();
}
private: System::Void NEWGAME_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("You Played for " + GAMETIME->Text);
	InitialConditions();
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void VSPLAYERRADIO_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (GameInPlay == false)
	{
		VsComputer = false;
		MIDDLERADIO->Enabled = false;
		EASYRADIO->Enabled = false;
		HARDRADIO->Enabled = false;

		STARTGAME->Enabled = true;
	}
}
private: System::Void STARTGAME_Click(System::Object^ sender, System::EventArgs^ e) {
	GameStart();
	STARTGAME->Enabled = false;
	GameInPlay = true;
}
private: System::Void VSCOMPUTERRADIO_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (GameInPlay == false)
	{
		VsComputer = true;
		EASYRADIO->Enabled = true;
		HARDRADIO->Enabled = true;
		STARTGAME->Enabled = false;
		MIDDLERADIO->Enabled = true;
	}
}
private: System::Void EASYRADIO_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (GameInPlay == false)
	{
		Mode = 1;
		STARTGAME->Enabled = true;
	}
}
private: System::Void HARDRADIO_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (GameInPlay == false)
	{
		Mode = 3;
		STARTGAME->Enabled = true;
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	abc->Show();

	System::Media::SoundPlayer^ MySong = gcnew System::Media::SoundPlayer("Song.wav");
	MySong->Stop();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void MIDDLERADIO_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (GameInPlay == false)
	{
		Mode = 2;
		STARTGAME->Enabled = true;
	}
}
private: System::Void GAMETIME_Click(System::Object^ sender, System::EventArgs^ e) {
	if (nameCount == 2)
	{
		Second++;
		if (Second == 60)
		{

			Second = 0;
			Sixty++;
		}

		Min = Convert::ToString(Sixty);
		Sec = Convert::ToString(Second);
		GAMETIME->Text = Min + " : " + Sec;
	}
}
};
}
