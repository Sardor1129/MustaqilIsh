#pragma once

namespace MustaqilIshs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// —водка дл€ TaxrirlashForm
	/// </summary>
	public ref class TaxrirlashForm : public System::Windows::Forms::Form
	{
		OleDbConnection^ connection;
		int id;
	public:

		TaxrirlashForm(int id_)
		{
			id = id_;

			connection = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\usman\\Downloads\\Telegram Desktop\\MustaqilIsh(s)\\MustaqilIsh(s)\\Students.accdb");

			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~TaxrirlashForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^ tb_up_nomer;
	protected:

	private: System::Windows::Forms::TextBox^ tb_up_parol;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tb_up_familya;

	private: System::Windows::Forms::TextBox^ tb_up_ism;
	private: System::Windows::Forms::TextBox^ tb_up_login;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tb_up_nomer = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tb_up_parol = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tb_up_familya = (gcnew System::Windows::Forms::TextBox());
			this->tb_up_ism = (gcnew System::Windows::Forms::TextBox());
			this->tb_up_login = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tb_up_nomer
			// 
			this->tb_up_nomer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_up_nomer->Location = System::Drawing::Point(33, 256);
			this->tb_up_nomer->Margin = System::Windows::Forms::Padding(4);
			this->tb_up_nomer->Mask = L"+999(99)999-99-99";
			this->tb_up_nomer->Name = L"tb_up_nomer";
			this->tb_up_nomer->Size = System::Drawing::Size(252, 30);
			this->tb_up_nomer->TabIndex = 19;
			// 
			// tb_up_parol
			// 
			this->tb_up_parol->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_up_parol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_up_parol->Location = System::Drawing::Point(330, 158);
			this->tb_up_parol->Margin = System::Windows::Forms::Padding(4);
			this->tb_up_parol->Name = L"tb_up_parol";
			this->tb_up_parol->PasswordChar = '*';
			this->tb_up_parol->Size = System::Drawing::Size(253, 30);
			this->tb_up_parol->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(33, 134);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 17);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Login";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(330, 135);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Parol";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(33, 43);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 17);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Ism";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(330, 41);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 17);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Familya";
			// 
			// tb_up_familya
			// 
			this->tb_up_familya->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_up_familya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_up_familya->Location = System::Drawing::Point(330, 64);
			this->tb_up_familya->Margin = System::Windows::Forms::Padding(4);
			this->tb_up_familya->Name = L"tb_up_familya";
			this->tb_up_familya->Size = System::Drawing::Size(253, 30);
			this->tb_up_familya->TabIndex = 13;
			// 
			// tb_up_ism
			// 
			this->tb_up_ism->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_up_ism->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_up_ism->Location = System::Drawing::Point(33, 64);
			this->tb_up_ism->Margin = System::Windows::Forms::Padding(4);
			this->tb_up_ism->Name = L"tb_up_ism";
			this->tb_up_ism->Size = System::Drawing::Size(253, 30);
			this->tb_up_ism->TabIndex = 10;
			// 
			// tb_up_login
			// 
			this->tb_up_login->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tb_up_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_up_login->Location = System::Drawing::Point(33, 158);
			this->tb_up_login->Margin = System::Windows::Forms::Padding(4);
			this->tb_up_login->Name = L"tb_up_login";
			this->tb_up_login->Size = System::Drawing::Size(253, 30);
			this->tb_up_login->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(34, 234);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(118, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Telefon Raqam";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(425, 321);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 52);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Yangilash";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TaxrirlashForm::button1_Click);
			// 
			// TaxrirlashForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 399);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tb_up_nomer);
			this->Controls->Add(this->tb_up_parol);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tb_up_familya);
			this->Controls->Add(this->tb_up_ism);
			this->Controls->Add(this->tb_up_login);
			this->Controls->Add(this->label8);
			this->Name = L"TaxrirlashForm";
			this->Text = L"TaxrirlashForm";
			this->Load += gcnew System::EventHandler(this, &TaxrirlashForm::TaxrirlashForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TaxrirlashForm_Load(System::Object^ sender, System::EventArgs^ e) {

		OleDbCommand^ cmd = gcnew OleDbCommand("SELECT * FROM Student WHERE ID = @ID", connection);
		cmd->Parameters->AddWithValue("@ID", id);

		try {
			connection->Open();
			OleDbDataReader^ reader = cmd->ExecuteReader();
			if (reader->Read()) {
				tb_up_login->Text = reader["Login"]->ToString();
				tb_up_parol->Text = reader["Parol"]->ToString();
				tb_up_ism->Text = reader["Ism"]->ToString();
				tb_up_familya->Text = reader["Familya"]->ToString();
				tb_up_nomer->Text = reader["TelefonRaqam"]->ToString();
			}
			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		finally {
			connection->Close();
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the updated values from the text boxes
	String^ updatedLogin = tb_up_login->Text;
	String^ updatedPassword = tb_up_parol->Text;
	String^ updatedName = tb_up_ism->Text;
	String^ updatedSurname = tb_up_familya->Text;
	String^ updatedPhoneNumber = tb_up_nomer->Text;

	// Update the database with the new values
UpdateUserInfo(id, updatedLogin, updatedPassword, updatedName, updatedSurname, updatedPhoneNumber);


}

	   void UpdateUserInfo(int userID, String^ updatedLogin, String^ updatedPassword, String^ updatedName, String^ updatedSurname,  String^ updatedPhoneNumber) {
		   OleDbCommand^ cmd = gcnew OleDbCommand("UPDATE Student SET Login = @Login, Parol = @Parol, Ism = @Ism, Familya = @Familya,TelefonRaqam = @TelefonRaqam WHERE ID = @ID", connection);
		   cmd->Parameters->AddWithValue("@Login", updatedLogin);
		   cmd->Parameters->AddWithValue("@Parol", updatedPassword);
		   cmd->Parameters->AddWithValue("@Ism", updatedName);
		   cmd->Parameters->AddWithValue("@Familya", updatedSurname);
		   cmd->Parameters->AddWithValue("@TelefonRaqam", updatedPhoneNumber);
		   cmd->Parameters->AddWithValue("@ID", userID);

		   try {
			   connection->Open();
			   cmd->ExecuteNonQuery();
			   MessageBox::Show("Ma'lumotlar yangilandi!.");
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show(ex->Message);
		   }
		   finally {
			   connection->Close();
		   }
	   }
};
}
