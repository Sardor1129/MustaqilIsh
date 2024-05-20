#pragma once

#include "MalumotlarForm.h"
#include "TaxrirlashForm.h"

namespace MustaqilIshs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::OleDb;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProfilForm
	/// </summary>
	public ref class ProfilForm : public System::Windows::Forms::Form
	{
		int currentStudent;
	public:
		ProfilForm(int id)
		{
			currentStudent = id;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProfilForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lb_guruh;
	protected:

	private: System::Windows::Forms::Label^ lb_IsmFamilya;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lb_tugilgansana;

	private: System::Windows::Forms::Label^ lb_nomer;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lb_fakultet;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ lb_parol;
	private: System::Windows::Forms::Label^ lb_login;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfilForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->lb_parol = (gcnew System::Windows::Forms::Label());
			this->lb_login = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lb_guruh = (gcnew System::Windows::Forms::Label());
			this->lb_IsmFamilya = (gcnew System::Windows::Forms::Label());
			this->lb_fakultet = (gcnew System::Windows::Forms::Label());
			this->lb_nomer = (gcnew System::Windows::Forms::Label());
			this->lb_tugilgansana = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(13, 142);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(776, 523);
			this->panel1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->lb_parol);
			this->groupBox2->Controls->Add(this->lb_login);
			this->groupBox2->Location = System::Drawing::Point(0, 341);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(773, 179);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Hisob ma\'lumotlari";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(378, 72);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(131, 20);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Parolni ko\'rsatish";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ProfilForm::checkBox1_CheckedChanged);
			// 
			// lb_parol
			// 
			this->lb_parol->AutoSize = true;
			this->lb_parol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_parol->Location = System::Drawing::Point(373, 37);
			this->lb_parol->Name = L"lb_parol";
			this->lb_parol->Size = System::Drawing::Size(0, 25);
			this->lb_parol->TabIndex = 1;
			// 
			// lb_login
			// 
			this->lb_login->AutoSize = true;
			this->lb_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_login->Location = System::Drawing::Point(39, 37);
			this->lb_login->Name = L"lb_login";
			this->lb_login->Size = System::Drawing::Size(0, 25);
			this->lb_login->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lb_guruh);
			this->groupBox1->Controls->Add(this->lb_IsmFamilya);
			this->groupBox1->Controls->Add(this->lb_fakultet);
			this->groupBox1->Controls->Add(this->lb_nomer);
			this->groupBox1->Controls->Add(this->lb_tugilgansana);
			this->groupBox1->Location = System::Drawing::Point(3, 117);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(770, 198);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Shaxsiy Ma\'lumotlar";
			// 
			// lb_guruh
			// 
			this->lb_guruh->AutoSize = true;
			this->lb_guruh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_guruh->Location = System::Drawing::Point(462, 38);
			this->lb_guruh->Name = L"lb_guruh";
			this->lb_guruh->Size = System::Drawing::Size(0, 20);
			this->lb_guruh->TabIndex = 1;
			// 
			// lb_IsmFamilya
			// 
			this->lb_IsmFamilya->AutoSize = true;
			this->lb_IsmFamilya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_IsmFamilya->Location = System::Drawing::Point(36, 38);
			this->lb_IsmFamilya->Name = L"lb_IsmFamilya";
			this->lb_IsmFamilya->Size = System::Drawing::Size(0, 20);
			this->lb_IsmFamilya->TabIndex = 1;
			// 
			// lb_fakultet
			// 
			this->lb_fakultet->AutoSize = true;
			this->lb_fakultet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_fakultet->Location = System::Drawing::Point(36, 153);
			this->lb_fakultet->Name = L"lb_fakultet";
			this->lb_fakultet->Size = System::Drawing::Size(0, 20);
			this->lb_fakultet->TabIndex = 3;
			// 
			// lb_nomer
			// 
			this->lb_nomer->AutoSize = true;
			this->lb_nomer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_nomer->Location = System::Drawing::Point(36, 95);
			this->lb_nomer->Name = L"lb_nomer";
			this->lb_nomer->Size = System::Drawing::Size(0, 20);
			this->lb_nomer->TabIndex = 2;
			// 
			// lb_tugilgansana
			// 
			this->lb_tugilgansana->AutoSize = true;
			this->lb_tugilgansana->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_tugilgansana->Location = System::Drawing::Point(463, 95);
			this->lb_tugilgansana->Name = L"lb_tugilgansana";
			this->lb_tugilgansana->Size = System::Drawing::Size(0, 20);
			this->lb_tugilgansana->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(-296, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 22);
			this->label5->TabIndex = 3;
			this->label5->Text = L"label4";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(169, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 41);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Studentlar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ProfilForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(487, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Taxrirlash";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProfilForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(316, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(166, 192);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(625, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 38);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Yangilash";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ProfilForm::button3_Click);
			// 
			// ProfilForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 677);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ProfilForm";
			this->Text = L"ProfilForm";
			this->Load += gcnew System::EventHandler(this, &ProfilForm::ProfilForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ parol;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		MalumotlarForm^ form = gcnew MalumotlarForm();
		form->ShowDialog();
	}
private: System::Void ProfilForm_Load(System::Object^ sender, System::EventArgs^ e) {
	GetInfo();
	
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		lb_parol->Text = "Parol: " + parol;
	}
	else
	{
		lb_parol->Text = "Parol: " + gcnew String('*', parol->Length);
	}
	

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	TaxrirlashForm^ form = gcnew TaxrirlashForm(currentStudent);
	form->ShowDialog();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	GetInfo();
}


	   void GetInfo() {
		   OleDbConnection^ connection = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\usman\\Downloads\\Telegram Desktop\\MustaqilIsh(s)\\MustaqilIsh(s)\\Students.accdb");

		   try
		   {
			   connection->Open();

			   String^ query = "SELECT * FROM Student WHERE ID = ?";
			   OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			   command->Parameters->Add(gcnew OleDbParameter("ID", Convert::ToString(currentStudent)));

			   OleDbDataReader^ reader = command->ExecuteReader();
			   lb_login->Text = Convert::ToString(currentStudent);
			   if (reader->Read())
			   {
				   String^ login = safe_cast<String^>(reader["Login"]);
				   parol = safe_cast<String^>(reader["Parol"]);
				   String^ ism = safe_cast<String^>(reader["Ism"]);
				   String^ familya = safe_cast<String^>(reader["Familya"]);
				   String^ jinsi = safe_cast<String^>(reader["Jinsi"]);
				   String^ sana = safe_cast<String^>(reader["TugilganSana"]);
				   String^ nomer = safe_cast<String^>(reader["TelefonRaqam"]);
				   String^ guruh = safe_cast<String^>(reader["Guruh"]);
				   String^ fakultet = safe_cast<String^>(reader["Fakultet"]);
				   String^ rasm = safe_cast<String^>(reader["Rasm"]);

				   lb_login->Text = "Login: " + login;
				   lb_parol->Text = "Parol: " + gcnew String('*', parol->Length);
				   lb_IsmFamilya->Text = "Ism Familya: " + ism + " " + familya;
				   lb_tugilgansana->Text = "Tug'ilgan sanasi: " + sana;
				   lb_nomer->Text = "Telefon raqami: " + nomer;
				   lb_guruh->Text = "Guruh: " + guruh;
				   lb_fakultet->Text = "Fakultet: " + fakultet;
				   Bitmap^ bitmap = gcnew Bitmap(rasm);
				   pictureBox1->Image = bitmap;

			   }
			   else
			   {
				   Console::WriteLine("Talaba topilmadi");
			   }
		   }
		   catch (OleDbException^ ex)
		   {
			   Console::WriteLine(ex->Message);
		   }
		   finally
		   {
			   connection->Close();
		   }
	   }
};
}
