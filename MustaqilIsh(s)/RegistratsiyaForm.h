#pragma once

#include "ProfilForm.h"


namespace MustaqilIshs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace std;
	/// <summary>
	/// Summary for RegistratsiyaForm
	/// </summary>
	public ref class RegistratsiyaForm : public System::Windows::Forms::Form
	{
		OleDbConnection^ conn;
		int id;

Form^ lform;
String^ rasm;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
		   
	public:
		RegistratsiyaForm(Form^ form_)
		{
			lform = form_;
			conn = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\usman\\Downloads\\Telegram Desktop\\MustaqilIsh(s)\\MustaqilIsh(s)\\Students.accdb");
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegistratsiyaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::MaskedTextBox^ tb_rg_nomer;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ tb_rg_familya;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ tb_rg_ism;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tb_rg_parol;
	private: System::Windows::Forms::ComboBox^ cb_rg_fakultet;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ tb_rg_login;	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tb_rg_guruh;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;


	protected:

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_rg_fakultet = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_rg_guruh = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tb_rg_nomer = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tb_rg_familya = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tb_rg_ism = (gcnew System::Windows::Forms::TextBox());
			this->tb_rg_parol = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tb_rg_login = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Controls->Add(this->tb_rg_parol);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->tb_rg_login);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(16, 15);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(960, 626);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Registratsiya";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label9->Location = System::Drawing::Point(381, 588);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(192, 20);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Hisobingiz bormi\? Kirish";
			this->label9->Click += gcnew System::EventHandler(this, &RegistratsiyaForm::label9_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(410, 533);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 39);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Ro\'yxatdan o\'tish";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegistratsiyaForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(727, 310);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 38);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Rasm tanlash";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegistratsiyaForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(683, 70);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(221, 233);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->cb_rg_fakultet);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->tb_rg_guruh);
			this->groupBox3->Location = System::Drawing::Point(55, 385);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(567, 123);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Universitet Ma\'lumotlari";
			// 
			// cb_rg_fakultet
			// 
			this->cb_rg_fakultet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cb_rg_fakultet->FormattingEnabled = true;
			this->cb_rg_fakultet->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"DASTURIY INJINIRING", L"KOMPYUTER INJINIRINGI",
					L"KIBERXAVFSIZLIK FAKULTETI", L"TELEKOMMUNIKATSIYA"
			});
			this->cb_rg_fakultet->Location = System::Drawing::Point(303, 60);
			this->cb_rg_fakultet->Margin = System::Windows::Forms::Padding(4);
			this->cb_rg_fakultet->Name = L"cb_rg_fakultet";
			this->cb_rg_fakultet->Size = System::Drawing::Size(251, 33);
			this->cb_rg_fakultet->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Guruh";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(304, 37);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Fakultet";
			// 
			// tb_rg_guruh
			// 
			this->tb_rg_guruh->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_rg_guruh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_rg_guruh->Location = System::Drawing::Point(8, 60);
			this->tb_rg_guruh->Margin = System::Windows::Forms::Padding(4);
			this->tb_rg_guruh->Name = L"tb_rg_guruh";
			this->tb_rg_guruh->Size = System::Drawing::Size(253, 30);
			this->tb_rg_guruh->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->tb_rg_nomer);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->tb_rg_familya);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->tb_rg_ism);
			this->groupBox1->Location = System::Drawing::Point(55, 121);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(567, 256);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Shaxsiy Ma\'lumotlar";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Location = System::Drawing::Point(11, 180);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(177, 69);
			this->groupBox4->TabIndex = 11;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Jinsi";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(107, 27);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(55, 20);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Ayol";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 27);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(63, 20);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Erkak";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(304, 133);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker1->MaxDate = System::DateTime(2024, 5, 12, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(251, 22);
			this->dateTimePicker1->TabIndex = 10;
			this->dateTimePicker1->Value = System::DateTime(2024, 5, 12, 0, 0, 0, 0);
			// 
			// tb_rg_nomer
			// 
			this->tb_rg_nomer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_rg_nomer->Location = System::Drawing::Point(7, 127);
			this->tb_rg_nomer->Margin = System::Windows::Forms::Padding(4);
			this->tb_rg_nomer->Mask = L"+999(99)999-99-99";
			this->tb_rg_nomer->Name = L"tb_rg_nomer";
			this->tb_rg_nomer->Size = System::Drawing::Size(252, 30);
			this->tb_rg_nomer->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(8, 33);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Ism";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(304, 31);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Familya";
			// 
			// tb_rg_familya
			// 
			this->tb_rg_familya->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_rg_familya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_rg_familya->Location = System::Drawing::Point(304, 54);
			this->tb_rg_familya->Margin = System::Windows::Forms::Padding(4);
			this->tb_rg_familya->Name = L"tb_rg_familya";
			this->tb_rg_familya->Size = System::Drawing::Size(253, 30);
			this->tb_rg_familya->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(304, 106);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Tug\'ilgan sanasi";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(8, 105);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Telefon Raqam";
			// 
			// tb_rg_ism
			// 
			this->tb_rg_ism->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_rg_ism->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_rg_ism->Location = System::Drawing::Point(8, 54);
			this->tb_rg_ism->Margin = System::Windows::Forms::Padding(4);
			this->tb_rg_ism->Name = L"tb_rg_ism";
			this->tb_rg_ism->Size = System::Drawing::Size(253, 30);
			this->tb_rg_ism->TabIndex = 4;
			// 
			// tb_rg_parol
			// 
			this->tb_rg_parol->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_rg_parol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_rg_parol->Location = System::Drawing::Point(357, 70);
			this->tb_rg_parol->Margin = System::Windows::Forms::Padding(4);
			this->tb_rg_parol->Name = L"tb_rg_parol";
			this->tb_rg_parol->PasswordChar = '*';
			this->tb_rg_parol->Size = System::Drawing::Size(253, 30);
			this->tb_rg_parol->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(61, 46);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Login";
			// 
			// tb_rg_login
			// 
			this->tb_rg_login->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_rg_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_rg_login->Location = System::Drawing::Point(61, 70);
			this->tb_rg_login->Margin = System::Windows::Forms::Padding(4);
			this->tb_rg_login->Name = L"tb_rg_login";
			this->tb_rg_login->Size = System::Drawing::Size(253, 30);
			this->tb_rg_login->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(357, 47);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Parol";
			// 
			// RegistratsiyaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(993, 654);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"RegistratsiyaForm";
			this->Text = L"RegistratsiyaForm";
			this->Load += gcnew System::EventHandler(this, &RegistratsiyaForm::RegistratsiyaForm_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void RegistratsiyaForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}



     bool UserExists(String^ login) {
			   OleDbCommand^ cmd = gcnew OleDbCommand("SELECT COUNT(*) FROM Student WHERE Login=@Login", conn);
			   cmd->Parameters->AddWithValue("@Login", login);

			   try {
				   conn->Open();
				   int count = (int)cmd->ExecuteScalar();
				   return count > 0;
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show(ex->Message);
				   return false;
			   }
			   finally {
				   conn->Close();
			   }
		   }


	 bool RegisterUser(String^ login, String^ password, String^ name, String^ surname, String^ gender, String^ phoneNumber, String^ birthday, String^ group, String^ faculty, String^ imagePath) {
		
		 OleDbCommand^ cmd = gcnew OleDbCommand("INSERT INTO Student (Login, Parol, Ism, Familya, Jinsi, TelefonRaqam, TugilganSana, Guruh, Fakultet, Rasm) VALUES (@Login, @Parol, @Ism, @Familya, @Jinsi, @TelefonRaqam, @TugilganSana, @Guruh, @Fakultet, @Rasm); SELECT @@IDENTITY;", conn);
		 cmd->Parameters->AddWithValue("@Login", login);
		 cmd->Parameters->AddWithValue("@Parol", password);
		 cmd->Parameters->AddWithValue("@Ism", name);
		 cmd->Parameters->AddWithValue("@Familya", surname);
		 cmd->Parameters->AddWithValue("@Jinsi", gender);
		 cmd->Parameters->AddWithValue("@TelefonRaqam", phoneNumber);
		 cmd->Parameters->AddWithValue("@TugilganSana", birthday);
		 cmd->Parameters->AddWithValue("@Guruh", group);
		 cmd->Parameters->AddWithValue("@Fakultet", faculty);
		 cmd->Parameters->AddWithValue("@Rasm", imagePath);

		 try {
			 conn->Open();
			 cmd->ExecuteNonQuery();

			 Object^ result = cmd->ExecuteScalar();

			 if (result != nullptr)
			 {
				 id = Convert::ToInt32(result);
			 }
			 return true;
		 }
		 catch (Exception^ ex) {
			 MessageBox::Show(ex->Message);
			 return false;
		 }
		 finally {
			 conn->Close();
		 }
	 
	 
	 }

	 bool IsTextBoxEmpty(TextBox^ textBox) {
		 return String::IsNullOrWhiteSpace(textBox->Text);
	 }

	 bool ValidateFields(TextBox^ loginTextBox, TextBox^ passwordTextBox, TextBox^ nameTextBox, TextBox^ surnameTextBox, TextBox^ groupTextBox) {
		 if (IsTextBoxEmpty(loginTextBox) || IsTextBoxEmpty(passwordTextBox) || IsTextBoxEmpty(nameTextBox) || IsTextBoxEmpty(surnameTextBox) || IsTextBoxEmpty(groupTextBox)) {
			 MessageBox::Show("Hamma kataklar to'ldirilishi shart!.");
			 return false;
		 }
		 return true;
	 }

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ login = tb_rg_login->Text;
	String^ parol = tb_rg_parol->Text;
	String^ ism = tb_rg_ism->Text;
	String^ familya = tb_rg_familya->Text;
	String^ raqam = tb_rg_nomer->Text;
	String^ tugilganKun = dateTimePicker1->Text;
	String^ guruh = tb_rg_guruh->Text;
	String^ fakultet = cb_rg_fakultet->Text;
	String^ jinsi;
	if (radioButton1->Checked)
	{
		jinsi = radioButton1->Text;
	}
	else
	{
		jinsi = radioButton2->Text;
	}

	if (ValidateFields(tb_rg_login, tb_rg_parol, tb_rg_ism, tb_rg_familya, tb_rg_guruh)&& radioButton1->Checked || radioButton2->Checked) {
		if (UserExists(tb_rg_login->Text)) {
			MessageBox::Show("Student ro'yxatdan o'tgan.");
		}


		else {
			if (RegisterUser(login, parol, ism, familya,jinsi, raqam, tugilganKun, guruh, fakultet, rasm)) {
				MessageBox::Show("Student ro'yxatdan o'tkazildi.");
				ProfilForm^ form = gcnew ProfilForm(id);
				form->Show();
				this->Hide();
			}
			else {
				MessageBox::Show("Ro'yxatdan o'tishda xatolik.");
			}
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

	openFileDialog1->Filter = "Image Files (*.bmp;*.jpg;*.jpeg;*.png;*.gif)|*.bmp;*.jpg;*.jpeg;*.png;*.gif|All Files (*.*)|*.*";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		rasm = openFileDialog1->FileName;
		Image^ img = Image::FromFile(rasm);

		pictureBox1->Image = img;
		
	}
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	
	lform->Show();
	this->Close();
}
};
}
