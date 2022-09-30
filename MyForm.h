#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel3;








	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(796, 83);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Maroon;
			this->label5->Font = (gcnew System::Drawing::Font(L"Jokerman", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Goldenrod;
			this->label5->Location = System::Drawing::Point(51, 9);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(679, 70);
			this->label5->TabIndex = 3;
			this->label5->Text = L" GRAPHICAL TIC TAC TOE";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(2, 125);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(818, 327);
			this->panel2->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(437, 20);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(353, 289);
			this->panel4->TabIndex = 2;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->button11);
			this->panel6->Controls->Add(this->button10);
			this->panel6->Location = System::Drawing::Point(2, 146);
			this->panel6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(342, 124);
			this->panel6->TabIndex = 2;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button11->Font = (gcnew System::Drawing::Font(L"Mistral", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Blue;
			this->button11->Location = System::Drawing::Point(2, 63);
			this->button11->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(323, 39);
			this->button11->TabIndex = 4;
			this->button11->Text = L"New Game!";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button10->Font = (gcnew System::Drawing::Font(L"Mistral", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Red;
			this->button10->Location = System::Drawing::Point(2, 18);
			this->button10->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(323, 39);
			this->button10->TabIndex = 3;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Location = System::Drawing::Point(2, 3);
			this->panel5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(342, 127);
			this->panel5->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::DarkKhaki;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Green;
			this->label4->Location = System::Drawing::Point(180, 80);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 37);
			this->label4->TabIndex = 5;
			this->label4->Text = L"0";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::DarkKhaki;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Green;
			this->label3->Location = System::Drawing::Point(180, 0);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 37);
			this->label3->TabIndex = 4;
			this->label3->Text = L"0";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(18, 75);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 43);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Player O";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 26.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(18, 5);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 43);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Player X";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Location = System::Drawing::Point(20, 20);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(368, 289);
			this->panel3->TabIndex = 1;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Fuchsia;
			this->button7->Location = System::Drawing::Point(2, 197);
			this->button7->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(104, 85);
			this->button7->TabIndex = 10;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->Location = System::Drawing::Point(124, 197);
			this->button8->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(116, 85);
			this->button8->TabIndex = 9;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(256, 197);
			this->button9->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(104, 85);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(256, 100);
			this->button4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(104, 91);
			this->button4->TabIndex = 7;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Navy;
			this->button5->Location = System::Drawing::Point(124, 100);
			this->button5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 91);
			this->button5->TabIndex = 6;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Olive;
			this->button6->Location = System::Drawing::Point(2, 100);
			this->button6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(104, 91);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(256, 3);
			this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 91);
			this->button3->TabIndex = 4;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(124, 3);
			this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 91);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(2, 3);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 91);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(842, 517);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		Boolean check;
		int plus;

#pragma endregion
		
		void false_()
		{
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;



		}
		void score()
		{
			

				if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X")
				{
					button1->BackColor = System::Drawing::Color::PowderBlue;
					button2->BackColor = System::Drawing::Color::PowderBlue;
					button3->BackColor = System::Drawing::Color::PowderBlue;
					MessageBox::Show("Player X won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label3->Text);
					label3->Text = Convert::ToString(plus + 1);
					false_();

				}

				else	if (button3->Text == "X" && button4->Text == "X" && button9->Text == "X")
				{
					button3->BackColor = System::Drawing::Color::PowderBlue;
					button4->BackColor = System::Drawing::Color::PowderBlue;
					button9->BackColor = System::Drawing::Color::PowderBlue;
					MessageBox::Show("Player X won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label3->Text);
					label3->Text = Convert::ToString(plus + 1);
					false_();

				}
				else	if (button1->Text == "X" && button6->Text == "X" && button7->Text == "X")
				{
					button1->BackColor = System::Drawing::Color::Pink;
					button6->BackColor = System::Drawing::Color::Pink;
					button7->BackColor = System::Drawing::Color::Pink;
					MessageBox::Show("Player X won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label3->Text);
					label3->Text = Convert::ToString(plus + 1);
					false_();

				}
				else	if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X")
				{
					button1->BackColor = System::Drawing::Color::SandyBrown;
					button5->BackColor = System::Drawing::Color::SandyBrown;
					button9->BackColor = System::Drawing::Color::SandyBrown;
					MessageBox::Show("Player X won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label3->Text);
					label3->Text = Convert::ToString(plus + 1);
					false_();

				}
				else	if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X")
				{
					button4->BackColor = System::Drawing::Color::Azure;
					button5->BackColor = System::Drawing::Color::Azure;
					button6->BackColor = System::Drawing::Color::Azure;
					MessageBox::Show("Player X won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label3->Text);
					label3->Text = Convert::ToString(plus + 1);
					false_();

				}
				else	if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X")
				{
					button2->BackColor = System::Drawing::Color::PowderBlue;
					button5->BackColor = System::Drawing::Color::PowderBlue;
					button8->BackColor = System::Drawing::Color::PowderBlue;
					MessageBox::Show("Player X won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label3->Text);
					label3->Text = Convert::ToString(plus + 1);
					false_();

				}
				else	if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X")
				{
					button7->BackColor = System::Drawing::Color::Aqua;
					button8->BackColor = System::Drawing::Color::Aqua;
					button9->BackColor = System::Drawing::Color::Aqua;
					MessageBox::Show("Player X won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label3->Text);
					label3->Text = Convert::ToString(plus + 1);
					false_();

				}
				else		if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X")
				{
					button3->BackColor = System::Drawing::Color::AliceBlue;
					button5->BackColor = System::Drawing::Color::AliceBlue;
					button7->BackColor = System::Drawing::Color::AliceBlue;
					MessageBox::Show("Player X won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label3->Text);
					label3->Text = Convert::ToString(plus + 1);
					false_();

				}
				//---------------------------------
				else		if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O")
				{
					button1->BackColor = System::Drawing::Color::Navy;
					button2->BackColor = System::Drawing::Color::Navy;
					button3->BackColor = System::Drawing::Color::Navy;
					MessageBox::Show("Player O won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label4->Text);
					label4->Text = Convert::ToString(plus + 1);
					false_();

				}
				else		if (button1->Text == "O" && button6->Text == "O" && button7->Text == "O")
				{
					button1->BackColor = System::Drawing::Color::Red;
					button6->BackColor = System::Drawing::Color::Red;
					button7->BackColor = System::Drawing::Color::Red;
					MessageBox::Show("Player O won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label4->Text);
					label4->Text = Convert::ToString(plus + 1);
					false_();

				}
				else	if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O")
				{
					button1->BackColor = System::Drawing::Color::Yellow;
					button5->BackColor = System::Drawing::Color::Yellow;
					button9->BackColor = System::Drawing::Color::Yellow;
					MessageBox::Show("Player O won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label4->Text);
					label4->Text = Convert::ToString(plus + 1);
					false_();

				}
				else	if (button3->Text == "O" && button4->Text == "O" && button9->Text == "O")
				{
					button3->BackColor = System::Drawing::Color::PowderBlue;
					button4->BackColor = System::Drawing::Color::PowderBlue;
					button9->BackColor = System::Drawing::Color::PowderBlue;
					MessageBox::Show("Player O won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label4->Text);
					label4->Text = Convert::ToString(plus + 1);
					false_();

				}
				else	if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O")
				{
					button2->BackColor = System::Drawing::Color::PowderBlue;
					button5->BackColor = System::Drawing::Color::PowderBlue;
					button8->BackColor = System::Drawing::Color::PowderBlue;
					MessageBox::Show("Player O won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label4->Text);
					label4->Text = Convert::ToString(plus + 1);
					false_();

				}
				else		if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O")
				{
					button4->BackColor = System::Drawing::Color::Green;
					button5->BackColor = System::Drawing::Color::Green;
					button6->BackColor = System::Drawing::Color::Green;
					MessageBox::Show("Player O won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label4->Text);
					label4->Text = Convert::ToString(plus + 1);
					false_();

				}
				else	if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O")
				{
					button7->BackColor = System::Drawing::Color::ForestGreen;
					button8->BackColor = System::Drawing::Color::ForestGreen;
					button9->BackColor = System::Drawing::Color::ForestGreen;
					MessageBox::Show("Player O won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label4->Text);
					label4->Text = Convert::ToString(plus + 1);
					false_();

				}
				else	if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O")
				{
					button3->BackColor = System::Drawing::Color::LemonChiffon;
					button5->BackColor = System::Drawing::Color::LemonChiffon;
					button7->BackColor = System::Drawing::Color::LemonChiffon;
					MessageBox::Show("Player O won", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					plus = int::Parse(label4->Text);
					label4->Text = Convert::ToString(plus + 1);
					false_();

				}
				else if ((button1->Text == "X" || button1->Text == "O") &&
				(button2->Text == "X" || button2->Text == "O" )&&
				(button3->Text == "X" || button3->Text == "O") &&
				(button4->Text == "X" || button4->Text == "O") &&
				(button5->Text == "X" || button5->Text == "O" )&&
				(button6->Text == "X" || button6->Text == "O") &&
				(button7->Text == "X" || button7->Text == "O") &&
				(button8->Text == "X" || button8->Text == "O") &&
				(button9->Text == "X" || button9->Text == "O")

				)
				MessageBox::Show("Draw!!", "tic tac toe", MessageBoxButtons::OK, MessageBoxIcon::Information);

			
			
			//---------------------------------------------------
		}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check == false)
	{
		button8->Text = "X";
		check = true;
	}
	else
	{
		button8->Text = "O";
		check = false;
	}
	score();
	button8->Enabled = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check == false)
	{
		button7->Text = "X";
		check = true;
	}
	else
	{
		button7->Text = "O";
		check = false;
	}
	score();
	button7->Enabled = false;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check == false)
	{
		button9->Text = "X";
		check = true;
	}
	else
	{
		button9->Text = "O";
		check = false;
	}
	score();
	button9->Enabled = false;
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { 
	if (check == false)
	{
		button1->Text = "X";
		check = true;
	}
	else
	{
		button1->Text = "O";
		check = false;
	}
	score();
	button1->Enabled = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check == false)
	{
		button2->Text = "X";
		check = true;
	}
	else
	{
		button2->Text = "O";
		check = false;
	}
	score();
	button2->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check == false)
	{
		button3->Text = "X";
		check = true;
	}
	else
	{
		button3->Text = "O";
		check = false;
	}
	score();
	button3->Enabled = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check == false)
	{
		button6->Text = "X";
		check = true;
	}
	else
	{
		button6->Text = "O";
		check = false;
	}
	score();
	button6->Enabled = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check == false)
	{
		button5->Text = "X";
		check = true;
	}
	else
	{
		button5->Text = "O";
		check = false;
	}
	score();
	button5->Enabled = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check == false)
	{
		button4->Text = "X";
		check = true;
	}
	else
	{
		button4->Text = "O";
		check = false;
	}
	score();
	button4->Enabled = false;

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";
	button11->Enabled = true;
	button1->BackColor = System::Drawing::Color::Red;
	button2->BackColor = System::Drawing::Color::WhiteSmoke;
	button3->BackColor = System::Drawing::Color::Red;
	button4->BackColor = System::Drawing::Color::WhiteSmoke;
	button5->BackColor = System::Drawing::Color::Red;
	button6->BackColor = System::Drawing::Color::WhiteSmoke;
	button7->BackColor = System::Drawing::Color::Red;
	button8->BackColor = System::Drawing::Color::WhiteSmoke;
	button9->BackColor = System::Drawing::Color::Red;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	button1->Text = "";
	button2->Text = "";
	button3->Text = "";
	button4->Text = "";
	button5->Text = "";
	button6->Text = "";
	button7->Text = "";
	button8->Text = "";
	button9->Text = "";

	label3->Text = "0";

	label4->Text = "0";

	button11->Enabled = true;
	button1->BackColor = System::Drawing::Color::Red;
	button2->BackColor = System::Drawing::Color::WhiteSmoke;
	button3->BackColor = System::Drawing::Color::Red;
	button4->BackColor = System::Drawing::Color::WhiteSmoke;
	button5->BackColor = System::Drawing::Color::Red;
	button6->BackColor = System::Drawing::Color::WhiteSmoke;
	button7->BackColor = System::Drawing::Color::Red;
	button8->BackColor = System::Drawing::Color::WhiteSmoke;
	button9->BackColor = System::Drawing::Color::Red;
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
