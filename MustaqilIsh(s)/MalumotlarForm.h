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
	/// Summary for MalumotlarForm
	/// </summary>
	public ref class MalumotlarForm : public System::Windows::Forms::Form
	{
	public:
		MalumotlarForm(void)
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
		~MalumotlarForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 13);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1092, 542);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MalumotlarForm::dataGridView1_CellContentClick);
			// 
			// MalumotlarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1117, 567);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MalumotlarForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MalumotlarForm";
			this->Load += gcnew System::EventHandler(this, &MalumotlarForm::MalumotlarForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		DataGridView^ dataGridView = safe_cast<DataGridView^>(sender);


		if (e->ColumnIndex == dataGridView->Columns["O'chirish"]->Index && e->RowIndex >= 0) {
			int id = Convert::ToInt32(dataGridView->Rows[e->RowIndex]->Cells["id"]->Value);

			System::Windows::Forms::DialogResult result = MessageBox::Show("Studentni o'chirmoqchimisiz?", "Tasdiqlash", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				try {

					OleDbConnection^ connection = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\usman\\Downloads\\Telegram Desktop\\MustaqilIsh(s)\\MustaqilIsh(s)\\Students.accdb");
					OleDbCommand^ command = gcnew OleDbCommand();
					command->Connection = connection;
					connection->Open();
					command->CommandText = "DELETE FROM Student WHERE ID = ?";
					command->Parameters->AddWithValue("@ID", id);
					command->ExecuteNonQuery();

					result = MessageBox::Show("Ma'lumotlar o'chirildi");
					if (result == System::Windows::Forms::DialogResult::OK) {
						connection->Close();
						GetAllStudents();
					}
				}
				catch (Exception^ ex) {
					Console::WriteLine("Error: " + ex->Message);
				}
				finally {

				}
			}
		}

	}
	private: System::Void MalumotlarForm_Load(System::Object^ sender, System::EventArgs^ e) {
		DataGridViewButtonColumn^ deleteButtonColumn = gcnew DataGridViewButtonColumn();
		deleteButtonColumn->Name = "O'chirish";
		deleteButtonColumn->HeaderText = "O'chirish";
		deleteButtonColumn->Text = "O'chirish";
		deleteButtonColumn->UseColumnTextForButtonValue = true;
		dataGridView1->Columns->Add(deleteButtonColumn);
		GetAllStudents();
	}


		   void GetAllStudents() {
			   String^ connStr = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\usman\\Downloads\\Telegram Desktop\\MustaqilIsh(s)\\MustaqilIsh(s)\\Students.accdb";

			   String^ query = "SELECT * FROM Student";

			   OleDbConnection^ conn = gcnew OleDbConnection(connStr);
			   OleDbCommand^ cmd = gcnew OleDbCommand(query, conn);

			   DataTable^ dataTable = gcnew DataTable();

			   try
			   {
				   conn->Open();

				   OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter();
				   adapter->SelectCommand = cmd;
				   adapter->Fill(dataTable);

				   dataGridView1->DataSource = dataTable;
			   }
			   catch (Exception^ ex)
			   {
				   // Handle any exceptions
				   MessageBox::Show(ex->Message, "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
			   finally
			   {
				   // Close the connection
				   conn->Close();
			   }
		   }
	};
}
