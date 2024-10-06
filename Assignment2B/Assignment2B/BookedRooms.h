#pragma once

#include "Checkout.h"
namespace Assignment2B {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
		using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for BookedRooms
	/// </summary>
	public ref class BookedRooms : public System::Windows::Forms::Form
	{
	public:
		BookedRooms(void)
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
		~BookedRooms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  checkBox2;
	protected: 


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::Label^  label3;
	internal: System::Windows::Forms::Label^  Label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	internal: System::Windows::Forms::Label^  Label5;
	internal: System::Windows::Forms::DataGridView^  DataGridView1;

	internal: 



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Button^  button5;

	internal: 
	private: 
	internal: 
	private: 

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BookedRooms::typeid));
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->DataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkBox2->Location = System::Drawing::Point(732, 255);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(95, 23);
			this->checkBox2->TabIndex = 18;
			this->checkBox2->Text = L"Check-in";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(645, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 46);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Cancel Booking";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &BookedRooms::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->DataGridView1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->Label5);
			this->panel1->Controls->Add(this->Label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(24, 69);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(934, 633);
			this->panel1->TabIndex = 31;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BookedRooms::panel1_Paint);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(324, 579);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(199, 41);
			this->button5->TabIndex = 38;
			this->button5->Text = L"Generate Invoice";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &BookedRooms::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(61, 253);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 24);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Enter the BookingID";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(278, 255);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 20);
			this->textBox2->TabIndex = 36;
			// 
			// DataGridView1
			// 
			this->DataGridView1->AllowUserToAddRows = false;
			this->DataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(2);
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->DataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridView1->BackgroundColor = System::Drawing::Color::LightBlue;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->DataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Column1, 
				this->Column2, this->Column3});
			this->DataGridView1->Location = System::Drawing::Point(66, 318);
			this->DataGridView1->Name = L"DataGridView1";
			this->DataGridView1->ReadOnly = true;
			this->DataGridView1->RowTemplate->Height = 24;
			this->DataGridView1->Size = System::Drawing::Size(786, 235);
			this->DataGridView1->TabIndex = 35;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"BookingID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"customerID";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Name";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(460, 170);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 32);
			this->button4->TabIndex = 34;
			this->button4->Text = L"Go";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &BookedRooms::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(220, 173);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(193, 29);
			this->textBox1->TabIndex = 33;
			// 
			// Label5
			// 
			this->Label5->AutoSize = true;
			this->Label5->BackColor = System::Drawing::Color::Transparent;
			this->Label5->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label5->ForeColor = System::Drawing::Color::AliceBlue;
			this->Label5->Location = System::Drawing::Point(49, 176);
			this->Label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(180, 24);
			this->Label5->TabIndex = 32;
			this->Label5->Text = L"Enter your User ID :";
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Label2->Font = (gcnew System::Drawing::Font(L"Corbel", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label2->ForeColor = System::Drawing::Color::Black;
			this->Label2->Location = System::Drawing::Point(295, 91);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(254, 33);
			this->Label2->TabIndex = 31;
			this->Label2->Text = L"View Booked Rooms";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(116, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(726, 42);
			this->label3->TabIndex = 30;
			this->label3->Text = L"IIT GUWAHATI Guest House Management";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(24, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(73, 71);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(556, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 46);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Edit Booking";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(24, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 51);
			this->button3->TabIndex = 32;
			this->button3->Text = L"Back to Home";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BookedRooms::button3_Click);
			// 
			// BookedRooms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(970, 702);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Name = L"BookedRooms";
			this->Text = L"s";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
			int userID = Convert::ToInt32(textBox1->Text);
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=assignment2b";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			con->Open();
			
			MySqlCommand^ name_reader = gcnew MySqlCommand("SELECT Name FROM signedusers WHERE UserID = @userId", con);
			// Add parameters to the command
			name_reader->Parameters->AddWithValue("@userId", userID);
			Object^ userName = name_reader->ExecuteScalar();
			String^ name = Convert::ToString(userName);

			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT BookingID,CustomerID FROM roombooking WHERE UserID = @userId", con);
			// Add parameters to the command
			cmd->Parameters->AddWithValue("@userId", userID);
			
			MySqlDataReader^ reader = cmd->ExecuteReader();
			// Check if any rooms are available
			if (reader->HasRows) {
				// If rooms are available, assign one to the user and redirect to Form2
				while(reader->Read()){
				int bookingID = reader->GetInt32(0); // Assuming RoomID is an integer // Assuming Column2 is a string
				int customerID = reader->GetInt32(1); // Assuming Column3 is a string

				array<Object^>^ row = { bookingID, customerID, name };
				DataGridView1->Rows->Add(row);
				}
				// Assuming room_id is an integer
				con->Close();
				// Redirect to Form2, passing the selected room ID and other necessary information
			}
			else {
				// If no rooms are available, display a message to the user
				MessageBox::Show("No rooms available for the selected dates and type.");
				con->Close();
			}
			 
			 }
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
			int bookingID = Convert::ToInt32(textBox2->Text);
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=assignment2b";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			con->Open();

			MySqlCommand^ cmdGuest = gcnew MySqlCommand("DELETE FROM roombooking WHERE BookingID = @bookingID", con);
			cmdGuest->Parameters->AddWithValue("@bookingID", bookingID);
            cmdGuest->ExecuteNonQuery();

			int curindex = 0;
			for (int rowIndex = 0; rowIndex < DataGridView1->RowCount; rowIndex++)
			{
				// Get the value of the specific column for the current row
				String^ cellValue = DataGridView1->Rows[rowIndex]->Cells["Column1"]->Value->ToString();

				// Check if the cell value matches the target column value
				if (cellValue == bookingID.ToString())
				{
					// Return the row index if the value is found
					curindex = rowIndex;
				}
			}
			if (curindex >= 0 && curindex < DataGridView1->RowCount)
			{
				DataGridView1->Rows->RemoveAt(curindex);
			}
			MessageBox::Show("Booking Successfully Deleted");
			 }
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Checkout^ checkout = gcnew Checkout();

			 this->Hide();
			 checkout->ShowDialog();

		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}