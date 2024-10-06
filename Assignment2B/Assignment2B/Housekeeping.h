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
	/// Summary for Housekeeping
	/// </summary>
	public ref class Housekeeping : public System::Windows::Forms::Form
	{
	public:
		Housekeeping(void)
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
		~Housekeeping()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;

	private: 


	internal: System::Windows::Forms::Button^  button2;
	internal: System::Windows::Forms::CheckBox^  CheckBox1;

	internal: System::Windows::Forms::TextBox^  TextBox1;
	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  Label8;
	internal: System::Windows::Forms::Label^  label12;

	internal: System::Windows::Forms::Button^  button4;

	internal: System::Windows::Forms::Label^  label13;

	internal: System::Windows::Forms::Label^  label14;

	internal: System::Windows::Forms::Label^  label1;

	internal: System::Windows::Forms::Button^  button3;
	internal: System::Windows::Forms::Label^  label9;

	internal: System::Windows::Forms::Label^  label10;
	internal: System::Windows::Forms::Button^  button6;

	internal: System::Windows::Forms::Label^  Label21;

	internal: System::Windows::Forms::Label^  label11;
	internal: System::Windows::Forms::Label^  label17;
	internal: System::Windows::Forms::TextBox^  textBox4;
	internal: System::Windows::Forms::TextBox^  textBox6;
	internal: System::Windows::Forms::TextBox^  textBox2;
	internal: System::Windows::Forms::Button^  button7;

	internal: System::Windows::Forms::Label^  Label20;
	internal: System::Windows::Forms::ListBox^  ListBox1;
	internal: System::Windows::Forms::Label^  Label19;
	internal: System::Windows::Forms::TextBox^  textBox5;
	internal: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker6;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker5;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker4;
	private: System::Windows::Forms::Panel^  panel2;
	internal: System::Windows::Forms::Label^  label23;
	private: 
	internal: System::Windows::Forms::TextBox^  textBox10;
	internal: System::Windows::Forms::Label^  label22;
	internal: System::Windows::Forms::TextBox^  textBox9;

	internal: System::Windows::Forms::Label^  label16;
	internal: System::Windows::Forms::TextBox^  textBox7;
	internal: System::Windows::Forms::Label^  label15;
	internal: System::Windows::Forms::Label^  label6;
	internal: 

	protected: 

	protected: 



















































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Housekeeping::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker6 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker5 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->Label20 = (gcnew System::Windows::Forms::Label());
			this->ListBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Label19 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Label21 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CheckBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->TextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Label8 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Peru;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1014, 95);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Housekeeping::panel1_Paint);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(634, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(350, 42);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Campus Guest House";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(64, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 42);
			this->label3->TabIndex = 5;
			this->label3->Text = L"GUWAHATI";
			this->label3->Click += gcnew System::EventHandler(this, &Housekeeping::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(17, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 42);
			this->label2->TabIndex = 4;
			this->label2->Text = L"IIT";
			this->label2->Click += gcnew System::EventHandler(this, &Housekeeping::label2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(843, 32);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 67);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Back to Home";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Housekeeping::button1_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->label23);
			this->panel3->Controls->Add(this->textBox10);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->textBox9);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->dateTimePicker6);
			this->panel3->Controls->Add(this->dateTimePicker5);
			this->panel3->Controls->Add(this->dateTimePicker4);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->Label20);
			this->panel3->Controls->Add(this->ListBox1);
			this->panel3->Controls->Add(this->Label19);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->Label21);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->CheckBox1);
			this->panel3->Controls->Add(this->TextBox1);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->Label8);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Location = System::Drawing::Point(0, 78);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1016, 495);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Housekeeping::panel3_Paint);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(678, 114);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(158, 18);
			this->label23->TabIndex = 160;
			this->label23->Text = L" Enter Customer ID:";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::White;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(837, 114);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(78, 23);
			this->textBox10->TabIndex = 159;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(334, 119);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(158, 18);
			this->label22->TabIndex = 158;
			this->label22->Text = L" Enter Customer ID:";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::White;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(493, 119);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(78, 23);
			this->textBox9->TabIndex = 157;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(2, 124);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(158, 18);
			this->label16->TabIndex = 154;
			this->label16->Text = L" Enter Customer ID:";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(170, 124);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(78, 23);
			this->textBox7->TabIndex = 153;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(11, 174);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(136, 18);
			this->label15->TabIndex = 152;
			this->label15->Text = L" Enter Room no. ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(1, 251);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 18);
			this->label6->TabIndex = 151;
			this->label6->Text = L"Select Date - Time ";
			// 
			// dateTimePicker6
			// 
			this->dateTimePicker6->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 9.749999F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker6->Location = System::Drawing::Point(164, 248);
			this->dateTimePicker6->Name = L"dateTimePicker6";
			this->dateTimePicker6->Size = System::Drawing::Size(136, 22);
			this->dateTimePicker6->TabIndex = 150;
			// 
			// dateTimePicker5
			// 
			this->dateTimePicker5->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 9.749999F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker5->Location = System::Drawing::Point(493, 207);
			this->dateTimePicker5->Name = L"dateTimePicker5";
			this->dateTimePicker5->Size = System::Drawing::Size(136, 22);
			this->dateTimePicker5->TabIndex = 149;
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 9.749999F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker4->Location = System::Drawing::Point(837, 192);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(137, 22);
			this->dateTimePicker4->TabIndex = 148;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(842, 330);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(78, 23);
			this->textBox5->TabIndex = 146;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(837, 154);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(78, 23);
			this->textBox3->TabIndex = 145;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(493, 336);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(78, 23);
			this->textBox4->TabIndex = 144;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Housekeeping::textBox4_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(493, 250);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(78, 23);
			this->textBox6->TabIndex = 143;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(493, 159);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(78, 23);
			this->textBox2->TabIndex = 142;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"HP Simplified Jpan", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(319, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(388, 41);
			this->label7->TabIndex = 1;
			this->label7->Text = L"HOUSEKEEPING FACILITIES";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::SandyBrown;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(842, 363);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 29);
			this->button7->TabIndex = 141;
			this->button7->Text = L"View Bill";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Housekeeping::button7_Click);
			// 
			// Label20
			// 
			this->Label20->BackColor = System::Drawing::Color::Transparent;
			this->Label20->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label20->ForeColor = System::Drawing::Color::White;
			this->Label20->Location = System::Drawing::Point(739, 330);
			this->Label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label20->Name = L"Label20";
			this->Label20->Size = System::Drawing::Size(75, 40);
			this->Label20->TabIndex = 138;
			this->Label20->Text = L"Food Bill";
			// 
			// ListBox1
			// 
			this->ListBox1->BackColor = System::Drawing::Color::White;
			this->ListBox1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ListBox1->ForeColor = System::Drawing::Color::Chocolate;
			this->ListBox1->FormattingEnabled = true;
			this->ListBox1->ItemHeight = 16;
			this->ListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"Idli (Rs.40)", L"Dosa (Rs.50)", L"Upma (Rs.50)", 
				L"Puri (Rs.50)", L"Veg Biriyani (Rs.150)", L"Mushroom Biriyani (Rs.200)", L"Chicken Biriyani (Rs.200)", L"Mutton Biriyani (Rs.250)", 
				L"Veg Fried Rice (Rs.100)", L"Veg Manchurian (Rs.100)", L"Chicken Fried Rice (Rs.150)", L"Chicken Manchurian (Rs.150)", L"Soft Drink (Rs.40)", 
				L""});
			this->ListBox1->Location = System::Drawing::Point(842, 238);
			this->ListBox1->Margin = System::Windows::Forms::Padding(2);
			this->ListBox1->Name = L"ListBox1";
			this->ListBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->ListBox1->Size = System::Drawing::Size(150, 68);
			this->ListBox1->TabIndex = 137;
			// 
			// Label19
			// 
			this->Label19->AutoSize = true;
			this->Label19->BackColor = System::Drawing::Color::Transparent;
			this->Label19->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label19->ForeColor = System::Drawing::Color::White;
			this->Label19->Location = System::Drawing::Point(679, 243);
			this->Label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label19->Name = L"Label19";
			this->Label19->Size = System::Drawing::Size(107, 18);
			this->Label19->TabIndex = 136;
			this->Label19->Text = L"Food Order   \r\n";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::SandyBrown;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(493, 363);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(81, 29);
			this->button6->TabIndex = 135;
			this->button6->Text = L"View Bill";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Housekeeping::button6_Click);
			// 
			// Label21
			// 
			this->Label21->AutoSize = true;
			this->Label21->BackColor = System::Drawing::Color::Transparent;
			this->Label21->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label21->ForeColor = System::Drawing::Color::White;
			this->Label21->Location = System::Drawing::Point(363, 336);
			this->Label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label21->Name = L"Label21";
			this->Label21->Size = System::Drawing::Size(109, 18);
			this->Label21->TabIndex = 132;
			this->Label21->Text = L"  Laundry Bill";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(305, 255);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(191, 18);
			this->label11->TabIndex = 129;
			this->label11->Text = L"Inventory / Item count  ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(693, 153);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(136, 18);
			this->label12->TabIndex = 128;
			this->label12->Text = L" Enter Room no. ";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SeaShell;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button4->Location = System::Drawing::Point(803, 415);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 61);
			this->button4->TabIndex = 126;
			this->button4->Text = L"Submit\r\nFood Service";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Housekeeping::button4_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(676, 196);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(153, 18);
			this->label13->TabIndex = 123;
			this->label13->Text = L"Select Date - Time ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(789, 54);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(144, 25);
			this->label14->TabIndex = 121;
			this->label14->Text = L"Food Service";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(347, 159);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 18);
			this->label1->TabIndex = 120;
			this->label1->Text = L" Enter Room no. ";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SeaShell;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button3->Location = System::Drawing::Point(456, 419);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 57);
			this->button3->TabIndex = 118;
			this->button3->Text = L"Submit\r\nLaundry Request";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Housekeeping::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(330, 207);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(153, 18);
			this->label9->TabIndex = 115;
			this->label9->Text = L"Select Date - Time ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(408, 54);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(186, 25);
			this->label10->TabIndex = 113;
			this->label10->Text = L"Laundry Request";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SeaShell;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button2->Location = System::Drawing::Point(69, 419);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 57);
			this->button2->TabIndex = 110;
			this->button2->Text = L"Submit\r\nCleaning Request";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Housekeeping::button2_Click);
			// 
			// CheckBox1
			// 
			this->CheckBox1->AutoSize = true;
			this->CheckBox1->BackColor = System::Drawing::Color::Transparent;
			this->CheckBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->CheckBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->CheckBox1->Location = System::Drawing::Point(164, 312);
			this->CheckBox1->Margin = System::Windows::Forms::Padding(2);
			this->CheckBox1->Name = L"CheckBox1";
			this->CheckBox1->Size = System::Drawing::Size(15, 14);
			this->CheckBox1->TabIndex = 108;
			this->CheckBox1->UseVisualStyleBackColor = false;
			// 
			// TextBox1
			// 
			this->TextBox1->BackColor = System::Drawing::Color::White;
			this->TextBox1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TextBox1->Location = System::Drawing::Point(170, 174);
			this->TextBox1->Margin = System::Windows::Forms::Padding(2);
			this->TextBox1->Name = L"TextBox1";
			this->TextBox1->Size = System::Drawing::Size(78, 23);
			this->TextBox1->TabIndex = 106;
			this->TextBox1->TextChanged += gcnew System::EventHandler(this, &Housekeeping::TextBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(57, 54);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 25);
			this->label5->TabIndex = 105;
			this->label5->Text = L"Room Cleaning";
			// 
			// Label8
			// 
			this->Label8->AutoSize = true;
			this->Label8->BackColor = System::Drawing::Color::Transparent;
			this->Label8->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label8->ForeColor = System::Drawing::Color::White;
			this->Label8->Location = System::Drawing::Point(154, 338);
			this->Label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label8->Name = L"Label8";
			this->Label8->Size = System::Drawing::Size(124, 32);
			this->Label8->TabIndex = 109;
			this->Label8->Text = L"* click to cancel \r\ncleaning request";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(477, 274);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(190, 32);
			this->label17->TabIndex = 130;
			this->label17->Text = L"* each piece of cloth costs\r\n Rs.15 for laundry\r\n";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Peru;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(0, 545);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1014, 110);
			this->panel2->TabIndex = 1;
			// 
			// Housekeeping
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1014, 646);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Housekeeping";
			this->Text = L"Housekeeping";
			this->Load += gcnew System::EventHandler(this, &Housekeeping::Housekeeping_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Label21_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Housekeeping_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constr = "server=127.0.0.1;uid=root;pwd=;database=assignment2b";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 con->Open();

				 int roomNumber = System::Convert::ToInt32(TextBox1->Text);
				  int CustomerID  =  System::Convert::ToInt32(textBox7->Text);
				 DateTime selectedDate = dateTimePicker6->Value;
            
				 String^ selectedDateString = selectedDate.ToString("yyyy-MM-dd");
				  MessageBox::Show("Your Request has been recorded! Our cleaning staff will shortly come to your room for cleaning.");
				 con->Close();
		 }
private: System::Void TextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constr = "server=127.0.0.1;uid=root;pwd=;database=assignment2b";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 con->Open();

				 int roomNumber = System::Convert::ToInt32(textBox2->Text);
				  int CustomerID  =  System::Convert::ToInt32(textBox9->Text);
				 DateTime selectedDate = dateTimePicker5->Value;
            
				 String^ selectedDateString = selectedDate.ToString("yyyy-MM-dd");

				 int inventoryCount = System::Convert::ToInt32(textBox6->Text);
				 int cost = 15*inventoryCount;
				  MySqlCommand^ cmdUpdate =  gcnew MySqlCommand("UPDATE customers SET TotalPayment = TotalPayment + @cost WHERE CustomerID = @CustomerID",con);
				 cmdUpdate->Parameters->AddWithValue("@cost", cost);
				 cmdUpdate->ExecuteNonQuery();
				 MessageBox::Show("Thank you for choosing our laundry services! Our laundry staff will shortly come to your room to pick up your clothes.");
				  con->Close();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^ constr = "server=127.0.0.1;uid=root;pwd=;database=assignment2b";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 con->Open();

				 int roomNumber = System::Convert::ToInt32(textBox3->Text);
				 int CustomerID  =  System::Convert::ToInt32(textBox10->Text);
				 DateTime selectedDate = dateTimePicker4->Value;
            
				 String^ selectedDateString = selectedDate.ToString("yyyy-MM-dd");
				 int cost = 0;
				 String^ selectedFoods = "";
				 for each (Object^ item in ListBox1->SelectedItems)
					{
						String^ food = safe_cast<String^>(item);
						selectedFoods += food;
						if(food == "Idli (Rs.40)" || food =="Soft Drink (Rs.40)") cost+=40;
						if(food =="Dosa (Rs.50)" || food == "Puri (Rs.50)" || food == "Upma (Rs.50)") cost+=50;
						if(food == "Veg Fried Rice (Rs.100)" || food == "Veg Manchurian (Rs.100)") cost+=100;
						if(food == "Veg Biriyani (Rs.150)" || food == "Chicken Fried Rice (Rs.150)" || food == "Chicken Manchurian (Rs.150)") cost+=150;
						if(food == "Mushroom Biriyani (Rs.200)" || food == "Chicken Biriyani (Rs.200)") cost+=200;
						if(food == "Mutton Biriyani (Rs.250)") cost+=250;
						selectedFoods += ", ";
						// Process each selected item as needed...
					}
				
				 MySqlCommand^ cmdUpdate =  gcnew MySqlCommand("UPDATE customers SET TotalPayment = TotalPayment + @cost WHERE CustomerID = @CustomerID",con);
				 cmdUpdate->Parameters->AddWithValue("@cost", cost);
			     cmdUpdate->Parameters->AddWithValue("@CustomerID", CustomerID);
				 cmdUpdate->ExecuteNonQuery();


				 MessageBox::Show("Your order has been placed! It will be delivered to your room shortly.");
				 con->Close();
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 int inventoryCount = System::Convert::ToInt32(textBox6->Text);
			  int cost = 15*inventoryCount;
			  textBox4->Text = cost.ToString();

		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cost = 0;
				 String^ selectedFoods = "";
				 for each (Object^ item in ListBox1->SelectedItems)
					{
						String^ food = safe_cast<String^>(item);
						selectedFoods += food;
						if(food == "Idli (Rs.40)" || food =="Soft Drink (Rs.40)") cost+=40;
						if(food =="Dosa (Rs.50)" || food == "Puri (Rs.50)" || food == "Upma (Rs.50)") cost+=50;
						if(food == "Veg Fried Rice (Rs.100)" || food == "Veg Manchurian (Rs.100)") cost+=100;
						if(food == "Veg Biriyani (Rs.150)" || food == "Chicken Fried Rice (Rs.150)" || food == "Chicken Manchurian (Rs.150)") cost+=150;
						if(food == "Mushroom Biriyani (Rs.200)" || food == "Chicken Biriyani (Rs.200)") cost+=200;
						if(food == "Mutton Biriyani (Rs.250)") cost+=250;
						selectedFoods += ", ";
						// Process each selected item as needed...
					}
				
				 textBox5->Text = cost.ToString();
		 }
};
}
