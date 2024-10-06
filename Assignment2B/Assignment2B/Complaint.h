#pragma once

namespace Assignment2B {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Complaint
	/// </summary>
	public ref class Complaint : public System::Windows::Forms::Form
	{
	public:
		Complaint(void)
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
		~Complaint()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::RichTextBox^  RichTextBox4;
	protected: 
	internal: System::Windows::Forms::Panel^  Panel1;
	internal: System::Windows::Forms::RichTextBox^  RichTextBox3;
	internal: System::Windows::Forms::Label^  Label5;
	internal: System::Windows::Forms::Label^  Label2;
	internal: System::Windows::Forms::PictureBox^  PictureBox1;
	internal: System::Windows::Forms::ComboBox^  ComboBox1;
	internal: System::Windows::Forms::RichTextBox^  RichTextBox2;
	internal: System::Windows::Forms::RichTextBox^  RichTextBox1;
	internal: System::Windows::Forms::Label^  Label4;
	internal: System::Windows::Forms::Label^  Label3;

	internal: System::Windows::Forms::Label^  label6;
	internal: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	internal: 

	internal: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Complaint::typeid));
			this->RichTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->Panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->RichTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->PictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ComboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->RichTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->RichTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// RichTextBox4
			// 
			this->RichTextBox4->BackColor = System::Drawing::SystemColors::Control;
			this->RichTextBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RichTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RichTextBox4->Location = System::Drawing::Point(393, 176);
			this->RichTextBox4->Margin = System::Windows::Forms::Padding(2);
			this->RichTextBox4->Name = L"RichTextBox4";
			this->RichTextBox4->Size = System::Drawing::Size(229, 31);
			this->RichTextBox4->TabIndex = 17;
			this->RichTextBox4->Text = L"";
			this->RichTextBox4->TextChanged += gcnew System::EventHandler(this, &Complaint::RichTextBox4_TextChanged);
			// 
			// Panel1
			// 
			this->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Panel1->Controls->Add(this->button1);
			this->Panel1->Controls->Add(this->label7);
			this->Panel1->Controls->Add(this->label6);
			this->Panel1->Controls->Add(this->RichTextBox4);
			this->Panel1->Controls->Add(this->RichTextBox3);
			this->Panel1->Controls->Add(this->Label5);
			this->Panel1->Controls->Add(this->Label2);
			this->Panel1->Controls->Add(this->PictureBox1);
			this->Panel1->Controls->Add(this->ComboBox1);
			this->Panel1->Controls->Add(this->RichTextBox2);
			this->Panel1->Controls->Add(this->RichTextBox1);
			this->Panel1->Controls->Add(this->Label4);
			this->Panel1->Controls->Add(this->Label3);
			this->Panel1->Location = System::Drawing::Point(53, 66);
			this->Panel1->Margin = System::Windows::Forms::Padding(2);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(803, 577);
			this->Panel1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(324, 491);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 46);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Submit Complaint";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Complaint::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Corbel", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SkyBlue;
			this->label7->Location = System::Drawing::Point(337, 97);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 33);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Complaint";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label6->Location = System::Drawing::Point(121, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(655, 42);
			this->label6->TabIndex = 18;
			this->label6->Text = L"IIT GUWAHATI Guest House Management";
			// 
			// RichTextBox3
			// 
			this->RichTextBox3->BackColor = System::Drawing::SystemColors::Control;
			this->RichTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RichTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RichTextBox3->Location = System::Drawing::Point(393, 225);
			this->RichTextBox3->Margin = System::Windows::Forms::Padding(2);
			this->RichTextBox3->Name = L"RichTextBox3";
			this->RichTextBox3->Size = System::Drawing::Size(229, 29);
			this->RichTextBox3->TabIndex = 16;
			this->RichTextBox3->Text = L"";
			// 
			// Label5
			// 
			this->Label5->AutoSize = true;
			this->Label5->BackColor = System::Drawing::Color::Transparent;
			this->Label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label5->ForeColor = System::Drawing::Color::AliceBlue;
			this->Label5->Location = System::Drawing::Point(149, 182);
			this->Label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(144, 25);
			this->Label5->TabIndex = 15;
			this->Label5->Text = L"Customer ID : ";
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->BackColor = System::Drawing::Color::Transparent;
			this->Label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label2->ForeColor = System::Drawing::Color::AliceBlue;
			this->Label2->Location = System::Drawing::Point(149, 229);
			this->Label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(164, 25);
			this->Label2->TabIndex = 14;
			this->Label2->Text = L"Room Number : ";
			// 
			// PictureBox1
			// 
			this->PictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->PictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PictureBox1.BackgroundImage")));
			this->PictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBox1->Location = System::Drawing::Point(25, 12);
			this->PictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->PictureBox1->Name = L"PictureBox1";
			this->PictureBox1->Size = System::Drawing::Size(81, 77);
			this->PictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBox1->TabIndex = 13;
			this->PictureBox1->TabStop = false;
			// 
			// ComboBox1
			// 
			this->ComboBox1->BackColor = System::Drawing::SystemColors::Control;
			this->ComboBox1->FormattingEnabled = true;
			this->ComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Room Issues", L"Facility Issues", L"General Concerns", 
				L"Food Issues"});
			this->ComboBox1->Location = System::Drawing::Point(393, 279);
			this->ComboBox1->Margin = System::Windows::Forms::Padding(2);
			this->ComboBox1->Name = L"ComboBox1";
			this->ComboBox1->Size = System::Drawing::Size(226, 21);
			this->ComboBox1->TabIndex = 12;
			// 
			// RichTextBox2
			// 
			this->RichTextBox2->Location = System::Drawing::Point(873, 419);
			this->RichTextBox2->Margin = System::Windows::Forms::Padding(2);
			this->RichTextBox2->Name = L"RichTextBox2";
			this->RichTextBox2->Size = System::Drawing::Size(68, 64);
			this->RichTextBox2->TabIndex = 11;
			this->RichTextBox2->Text = L"";
			// 
			// RichTextBox1
			// 
			this->RichTextBox1->BackColor = System::Drawing::SystemColors::Control;
			this->RichTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RichTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RichTextBox1->Location = System::Drawing::Point(393, 325);
			this->RichTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->RichTextBox1->Name = L"RichTextBox1";
			this->RichTextBox1->Size = System::Drawing::Size(229, 146);
			this->RichTextBox1->TabIndex = 10;
			this->RichTextBox1->Text = L"";
			// 
			// Label4
			// 
			this->Label4->AllowDrop = true;
			this->Label4->BackColor = System::Drawing::Color::Transparent;
			this->Label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label4->ForeColor = System::Drawing::Color::AliceBlue;
			this->Label4->Location = System::Drawing::Point(149, 347);
			this->Label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label4->Name = L"Label4";
			this->Label4->Size = System::Drawing::Size(233, 70);
			this->Label4->TabIndex = 8;
			this->Label4->Text = L"Give a brief description of the issue : ";
			// 
			// Label3
			// 
			this->Label3->AutoSize = true;
			this->Label3->BackColor = System::Drawing::Color::Transparent;
			this->Label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label3->ForeColor = System::Drawing::Color::AliceBlue;
			this->Label3->Location = System::Drawing::Point(149, 279);
			this->Label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(243, 25);
			this->Label3->TabIndex = 7;
			this->Label3->Text = L"Select the type of issue : ";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(53, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 51);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Back to Home";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Complaint::button2_Click);
			// 
			// Complaint
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(906, 654);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Panel1);
			this->Name = L"Complaint";
			this->Text = L"Complaint";
			this->Load += gcnew System::EventHandler(this, &Complaint::Complaint_Load);
			this->Panel1->ResumeLayout(false);
			this->Panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Complaint_Load(System::Object^  sender, System::EventArgs^  e) {
				
			 }
private: System::Void RichTextBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^ constr = "server=127.0.0.1;uid=root;pwd=;database=assignment2b";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 con->Open();

				 int customer_ID = System::Convert::ToInt32(RichTextBox4->Text);
				 int roomNumber = System::Convert::ToInt32(RichTextBox3->Text);

				 String^ issueType = ComboBox1->Text;
				 String^ issueDescription = RichTextBox1->Text;

				// Get the current date and time
				DateTime currentDate = DateTime::Now;

				// Format the date as a string (e.g., "yyyy-MM-dd")
				String^ date = currentDate.ToString("yyyy-MM-dd");

				String^ status = "Not Completed";
	
				MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT COUNT(*) FROM complaints",con);
				int complaints = Convert::ToInt32(cmd1->ExecuteScalar());

				MySqlCommand^ cmdInsertComplaint = gcnew MySqlCommand("INSERT INTO complaints (ComplaintID, CustomerID, Date, status, description, type, Room) VALUES (@ComplaintID, @CustomerID, @Date, @status, @description, @type, @Room)", con);
				cmdInsertComplaint->Parameters->AddWithValue("@ComplaintID", complaints+1);
				cmdInsertComplaint->Parameters->AddWithValue("@CustomerID", customer_ID);
				cmdInsertComplaint->Parameters->AddWithValue("@Date", date);
				cmdInsertComplaint->Parameters->AddWithValue("@status", status);
				cmdInsertComplaint->Parameters->AddWithValue("@description", issueDescription);
				cmdInsertComplaint->Parameters->AddWithValue("@type", issueType);
				cmdInsertComplaint->Parameters->AddWithValue("@Room", roomNumber);
				cmdInsertComplaint->ExecuteNonQuery();

				MessageBox::Show("We are extremely sorry for the inconvenience caused! Rest assured, we will swiftly resolve this issue and get back to you.");

				con->Close();

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}
