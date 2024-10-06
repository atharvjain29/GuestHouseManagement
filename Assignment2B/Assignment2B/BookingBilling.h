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
	/// Summary for BookingBilling
	/// </summary>
	public ref class BookingBilling : public System::Windows::Forms::Form
	{
	public:
		BookingBilling(int roomId, DateTime checkInDate, DateTime checkOutDate)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			textBox5->Text = roomId.ToString();
			dateTimePicker1->Value = checkInDate;
			dateTimePicker2->Value = checkOutDate;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BookingBilling()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	internal: System::Windows::Forms::TextBox^  TextBox4;
	internal: System::Windows::Forms::TextBox^  TextBox3;
	internal: System::Windows::Forms::Panel^  Panel1;

	internal: 

	internal: System::Windows::Forms::TextBox^  TextBox2;
	private: 
	internal: System::Windows::Forms::TextBox^  TextBox1;
	internal: System::Windows::Forms::Label^  Label6;
	internal: System::Windows::Forms::Label^  Label5;
	internal: System::Windows::Forms::Label^  Label4;
	internal: System::Windows::Forms::Button^  Button1;
	internal: System::Windows::Forms::Label^  Label3;
	internal: System::Windows::Forms::Label^  Label2;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  panel4;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BookingBilling::typeid));
			this->TextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->TextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->TextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->TextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Label6 = (gcnew System::Windows::Forms::Label());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->Button1 = (gcnew System::Windows::Forms::Button());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// TextBox4
			// 
			this->TextBox4->BackColor = System::Drawing::Color::PowderBlue;
			this->TextBox4->Location = System::Drawing::Point(160, 337);
			this->TextBox4->Name = L"TextBox4";
			this->TextBox4->Size = System::Drawing::Size(251, 26);
			this->TextBox4->TabIndex = 25;
			this->TextBox4->TextChanged += gcnew System::EventHandler(this, &BookingBilling::TextBox4_TextChanged);
			// 
			// TextBox3
			// 
			this->TextBox3->BackColor = System::Drawing::Color::PowderBlue;
			this->TextBox3->Location = System::Drawing::Point(160, 275);
			this->TextBox3->Name = L"TextBox3";
			this->TextBox3->Size = System::Drawing::Size(251, 26);
			this->TextBox3->TabIndex = 24;
			this->TextBox3->TextChanged += gcnew System::EventHandler(this, &BookingBilling::TextBox3_TextChanged);
			// 
			// Panel1
			// 
			this->Panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Panel1->Controls->Add(this->label9);
			this->Panel1->Controls->Add(this->label8);
			this->Panel1->Controls->Add(this->dateTimePicker2);
			this->Panel1->Controls->Add(this->dateTimePicker1);
			this->Panel1->Controls->Add(this->label7);
			this->Panel1->Controls->Add(this->textBox6);
			this->Panel1->Controls->Add(this->label1);
			this->Panel1->Controls->Add(this->textBox5);
			this->Panel1->Controls->Add(this->TextBox4);
			this->Panel1->Controls->Add(this->TextBox3);
			this->Panel1->Controls->Add(this->TextBox2);
			this->Panel1->Controls->Add(this->TextBox1);
			this->Panel1->Controls->Add(this->Label6);
			this->Panel1->Controls->Add(this->Label5);
			this->Panel1->Controls->Add(this->Label4);
			this->Panel1->Controls->Add(this->Button1);
			this->Panel1->Controls->Add(this->Label3);
			this->Panel1->Controls->Add(this->Label2);
			this->Panel1->Cursor = System::Windows::Forms::Cursors::PanNE;
			this->Panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Panel1->Location = System::Drawing::Point(1, 121);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(912, 466);
			this->Panel1->TabIndex = 2;
			this->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BookingBilling::Panel1_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(485, 286);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 22);
			this->label9->TabIndex = 33;
			this->label9->Text = L"CheckOut Date";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(502, 235);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 22);
			this->label8->TabIndex = 32;
			this->label8->Text = L"CheckIn Date";
			this->label8->Click += gcnew System::EventHandler(this, &BookingBilling::label8_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(659, 286);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker2->TabIndex = 31;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(659, 234);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker1->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(51, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 22);
			this->label7->TabIndex = 29;
			this->label7->Text = L"UserID";
			this->label7->Click += gcnew System::EventHandler(this, &BookingBilling::label7_Click);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox6->Location = System::Drawing::Point(160, 119);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(251, 26);
			this->textBox6->TabIndex = 28;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &BookingBilling::textBox6_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(530, 187);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 22);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Room ID";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox5->Location = System::Drawing::Point(659, 183);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(152, 26);
			this->textBox5->TabIndex = 26;
			// 
			// TextBox2
			// 
			this->TextBox2->BackColor = System::Drawing::Color::PowderBlue;
			this->TextBox2->Location = System::Drawing::Point(160, 218);
			this->TextBox2->Name = L"TextBox2";
			this->TextBox2->Size = System::Drawing::Size(251, 26);
			this->TextBox2->TabIndex = 23;
			this->TextBox2->TextChanged += gcnew System::EventHandler(this, &BookingBilling::TextBox2_TextChanged);
			// 
			// TextBox1
			// 
			this->TextBox1->BackColor = System::Drawing::Color::PowderBlue;
			this->TextBox1->Location = System::Drawing::Point(160, 169);
			this->TextBox1->Name = L"TextBox1";
			this->TextBox1->Size = System::Drawing::Size(251, 26);
			this->TextBox1->TabIndex = 22;
			this->TextBox1->TextChanged += gcnew System::EventHandler(this, &BookingBilling::TextBox1_TextChanged);
			// 
			// Label6
			// 
			this->Label6->AutoSize = true;
			this->Label6->BackColor = System::Drawing::Color::Transparent;
			this->Label6->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label6->ForeColor = System::Drawing::Color::White;
			this->Label6->Location = System::Drawing::Point(4, 339);
			this->Label6->Name = L"Label6";
			this->Label6->Size = System::Drawing::Size(112, 22);
			this->Label6->TabIndex = 21;
			this->Label6->Text = L"Contact No. :";
			this->Label6->Click += gcnew System::EventHandler(this, &BookingBilling::Label6_Click);
			// 
			// Label5
			// 
			this->Label5->AutoSize = true;
			this->Label5->BackColor = System::Drawing::Color::Transparent;
			this->Label5->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label5->ForeColor = System::Drawing::Color::White;
			this->Label5->Location = System::Drawing::Point(33, 277);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(85, 22);
			this->Label5->TabIndex = 20;
			this->Label5->Text = L"Email ID :";
			this->Label5->Click += gcnew System::EventHandler(this, &BookingBilling::Label5_Click);
			// 
			// Label4
			// 
			this->Label4->AutoSize = true;
			this->Label4->BackColor = System::Drawing::Color::Transparent;
			this->Label4->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label4->ForeColor = System::Drawing::Color::White;
			this->Label4->Location = System::Drawing::Point(72, 217);
			this->Label4->Name = L"Label4";
			this->Label4->Size = System::Drawing::Size(50, 22);
			this->Label4->TabIndex = 19;
			this->Label4->Text = L"Age :";
			this->Label4->Click += gcnew System::EventHandler(this, &BookingBilling::Label4_Click);
			// 
			// Button1
			// 
			this->Button1->BackColor = System::Drawing::Color::SkyBlue;
			this->Button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button1->Location = System::Drawing::Point(410, 407);
			this->Button1->Name = L"Button1";
			this->Button1->Size = System::Drawing::Size(93, 31);
			this->Button1->TabIndex = 18;
			this->Button1->Text = L"BOOK";
			this->Button1->UseVisualStyleBackColor = false;
			this->Button1->Click += gcnew System::EventHandler(this, &BookingBilling::Button1_Click);
			// 
			// Label3
			// 
			this->Label3->AutoSize = true;
			this->Label3->BackColor = System::Drawing::Color::Transparent;
			this->Label3->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label3->ForeColor = System::Drawing::Color::White;
			this->Label3->Location = System::Drawing::Point(53, 169);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(67, 22);
			this->Label3->TabIndex = 4;
			this->Label3->Text = L"Name :";
			this->Label3->Click += gcnew System::EventHandler(this, &BookingBilling::Label3_Click);
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label2->ForeColor = System::Drawing::Color::SkyBlue;
			this->Label2->Location = System::Drawing::Point(326, 27);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(282, 33);
			this->Label2->TabIndex = 1;
			this->Label2->Text = L"Booking and Billing";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(3, 66);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(168, 51);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Back to Home";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &BookingBilling::button3_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(-2, -2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(912, 125);
			this->panel2->TabIndex = 26;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &BookingBilling::panel2_Paint);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(78, 11);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(218, 42);
			this->label11->TabIndex = 3;
			this->label11->Text = L"GUWAHATI";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(503, 11);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(386, 42);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Campus Guest House";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(31, 11);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 42);
			this->label13->TabIndex = 0;
			this->label13->Text = L"IIT";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel4->Controls->Add(this->button6);
			this->panel4->Location = System::Drawing::Point(-2, 562);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(912, 85);
			this->panel4->TabIndex = 27;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Corbel", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(737, 26);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(172, 56);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Sign up";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// BookingBilling
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(909, 648);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Panel1);
			this->DoubleBuffered = true;
			this->Name = L"BookingBilling";
			this->Text = L"BookingBilling";
			this->Load += gcnew System::EventHandler(this, &BookingBilling::BookingBilling_Load);
			this->Panel1->ResumeLayout(false);
			this->Panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
private: System::Void Button1_Click(System::Object^  sender, System::EventArgs^  e) {
			  try {
            String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=assignment2b";
            MySqlConnection^ con = gcnew MySqlConnection(constr);
            con->Open();
			String^ customerName = TextBox1->Text;
			String^ customerEmail = TextBox3->Text;
			String^ customerAge = TextBox2->Text;
			String^ customerContact = TextBox4->Text;
			DateTime checkInDate = dateTimePicker1->Value;
			DateTime checkOutDate = dateTimePicker2->Value;
			String^ roomID = textBox5->Text;
			String^ UserID = textBox6->Text;
			// Last customer ID
			MySqlCommand^ cmdGetLastEntryId = gcnew MySqlCommand("SELECT COUNT(*) FROM customers", con);
			Object^ result = cmdGetLastEntryId->ExecuteScalar();
			int lastEntryId = Convert::ToInt32(result); // Handle the case where result is NULL
			lastEntryId+=1;
			//get the last booking ID
			MySqlCommand^ cmdGetLastBookingId = gcnew MySqlCommand("SELECT COUNT(*) FROM roombooking", con);
			Object^ result1 = cmdGetLastBookingId->ExecuteScalar();
			int lastBookingId = Convert::ToInt32(result1); // Handle the case where result is NULL
			lastBookingId+=1;

			// calculate the total cost for stay
			MySqlCommand^ cmdGetPricePerNight = gcnew MySqlCommand("SELECT Price,Type,Floor,Facilities FROM rooms WHERE RoomID = @roomID", con);
			cmdGetPricePerNight->Parameters->AddWithValue("@roomID", Convert::ToInt32(roomID));
			MySqlDataReader^ reader = cmdGetPricePerNight->ExecuteReader();
			reader->Read();
			// Access each column value from the reader
			int pricePerNight = Convert::ToInt32(reader["Price"]);
			String^ type = safe_cast<String^>(reader["Type"]);
			int floor = Convert::ToInt32(reader["Floor"]);
			String^ facilities = safe_cast<String^>(reader["Facilities"]);
			// Now you have the values of each column
				// Do something with the values...
			// Close the reader
			reader->Close();
			//MessageBox::Show(facilities);
			// Calculate room_charge (price_per_night * number of nights)
			TimeSpan duration = checkOutDate - checkInDate;

			int numberOfNights = duration.Days;
			//MessageBox::Show(numberOfNights.ToString());
			double roomCharge = pricePerNight * numberOfNights;
			//MessageBox::Show(roomCharge.ToString());
            // add the customer to the customers database
			MySqlCommand^ cmdGuest = gcnew MySqlCommand("INSERT INTO customers (CustomerID, UserID, Name, Contact, Age, Email, BookingID,TotalPayment) VALUES (@lastEntryId, @UserID, @name, @contact, @age, @email, @bookingID, @price)", con);
            cmdGuest->Parameters->AddWithValue("@name", customerName);
            cmdGuest->Parameters->AddWithValue("@contact", customerContact);
            cmdGuest->Parameters->AddWithValue("@email", customerEmail);
            cmdGuest->Parameters->AddWithValue("@age", customerAge);
			cmdGuest->Parameters->AddWithValue("@lastEntryId", lastEntryId);
			cmdGuest->Parameters->AddWithValue("@UserID", UserID);
			cmdGuest->Parameters->AddWithValue("@bookingID", lastBookingId);
			cmdGuest->Parameters->AddWithValue("@price", roomCharge);
            cmdGuest->ExecuteNonQuery();

            // Insert into Bookings table
            MySqlCommand^ cmdBooking = gcnew MySqlCommand("INSERT INTO roombooking (BookingID, RoomID, CustomerID, BookedFrom, BookedTill, Type, Floor, Facilities, Price, UserID) VALUES (@lastBookingId, @roomID, @lastEntryId, @checkInDate, @checkOutDate, @type, @floor, @facilities, @price, @userID)", con);
            cmdBooking->Parameters->AddWithValue("@lastBookingId", lastBookingId);
            cmdBooking->Parameters->AddWithValue("@roomID", roomID);
			cmdBooking->Parameters->AddWithValue("@lastEntryId", lastEntryId);
            cmdBooking->Parameters->AddWithValue("@checkInDate", checkInDate);
            cmdBooking->Parameters->AddWithValue("@checkOutDate", checkOutDate);
			cmdBooking->Parameters->AddWithValue("@type", type);
			cmdBooking->Parameters->AddWithValue("@floor", floor);
			cmdBooking->Parameters->AddWithValue("@facilities", facilities);
			cmdBooking->Parameters->AddWithValue("@price", roomCharge);
			cmdBooking->Parameters->AddWithValue("@userID", UserID);
            cmdBooking->ExecuteNonQuery();	

			// Check if there are any rows in the Invoice table for the guest_id
			//MySqlCommand^ cmdCheckInvoice = gcnew MySqlCommand("SELECT COUNT(*) FROM invoice WHERE guest_id = @guestId", con);
			//cmdCheckInvoice->Parameters->AddWithValue("@guestId", guestId);
			//int rowCount = Convert::ToInt32(cmdCheckInvoice->ExecuteScalar());

			//if (rowCount == 0) {
			//	// If there are no rows, perform an INSERT operation
			//	MySqlCommand^ cmdInsertInvoice = gcnew MySqlCommand("INSERT INTO invoice (guest_id, room_charge, total_cost) VALUES (@guestId, @roomCharge, @roomCharge)", con);
			//	cmdInsertInvoice->Parameters->AddWithValue("@guestId", guestId);
			//	cmdInsertInvoice->Parameters->AddWithValue("@roomCharge", roomCharge);
			//	cmdInsertInvoice->ExecuteNonQuery();
			//} else {
			//	// If there are rows, perform an UPDATE operation
			//	MySqlCommand^ cmdUpdateInvoice = gcnew MySqlCommand("UPDATE invoice SET room_charge = @roomCharge, total_cost = total_cost + @roomCharge WHERE guest_id = @guestId", con);
			//	cmdUpdateInvoice->Parameters->AddWithValue("@roomCharge", roomCharge);
			//	cmdUpdateInvoice->Parameters->AddWithValue("@guestId", guestId);
			//	cmdUpdateInvoice->ExecuteNonQuery();
			//}
            MessageBox::Show("Booking successfully added. Please note down your Customer ID "+lastEntryId);
			
            con->Close();

        } catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
		 }
private: System::Void TextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void TextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void TextBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void TextBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void BookingBilling_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}
