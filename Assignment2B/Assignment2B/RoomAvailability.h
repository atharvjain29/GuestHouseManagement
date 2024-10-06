#pragma once
#include "BookingBilling.h"

namespace Assignment2B {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
		using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for RoomAvailability
	/// </summary>
	public ref class RoomAvailability : public System::Windows::Forms::Form
	{
	public:
		RoomAvailability(void)
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
		~RoomAvailability()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::DataGridView^  DataGridView1;
	protected: 




	internal: System::Windows::Forms::Button^  Button1;
	internal: System::Windows::Forms::TextBox^  TextBox2;
	internal: System::Windows::Forms::Label^  Label6;
	internal: System::Windows::Forms::TextBox^  TextBox1;
	internal: System::Windows::Forms::Label^  Label5;







	internal: System::Windows::Forms::Panel^  Panel1;

	internal: 

	private: 
	internal: System::Windows::Forms::Label^  Label2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Panel^  panel4;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	internal: System::Windows::Forms::Label^  label7;
	private: 
	internal: System::Windows::Forms::TextBox^  textBox3;
	internal: System::Windows::Forms::Button^  button3;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RoomAvailability::typeid));
			this->DataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Button1 = (gcnew System::Windows::Forms::Button());
			this->TextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Label6 = (gcnew System::Windows::Forms::Label());
			this->TextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->Panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DataGridView1))->BeginInit();
			this->Panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
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
			this->DataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Column1, 
				this->Column2, this->Column3, this->Column4});
			this->DataGridView1->Location = System::Drawing::Point(84, 290);
			this->DataGridView1->Name = L"DataGridView1";
			this->DataGridView1->ReadOnly = true;
			this->DataGridView1->RowTemplate->Height = 24;
			this->DataGridView1->Size = System::Drawing::Size(786, 217);
			this->DataGridView1->TabIndex = 19;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"RoomID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Floor";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Price";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"AC";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Button1
			// 
			this->Button1->BackColor = System::Drawing::Color::SkyBlue;
			this->Button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold));
			this->Button1->Location = System::Drawing::Point(587, 217);
			this->Button1->Name = L"Button1";
			this->Button1->Size = System::Drawing::Size(141, 31);
			this->Button1->TabIndex = 18;
			this->Button1->Text = L"APPLY FILTERS";
			this->Button1->UseVisualStyleBackColor = false;
			this->Button1->Click += gcnew System::EventHandler(this, &RoomAvailability::Button1_Click);
			// 
			// TextBox2
			// 
			this->TextBox2->BackColor = System::Drawing::Color::PowderBlue;
			this->TextBox2->Location = System::Drawing::Point(385, 204);
			this->TextBox2->Name = L"TextBox2";
			this->TextBox2->Size = System::Drawing::Size(100, 20);
			this->TextBox2->TabIndex = 17;
			// 
			// Label6
			// 
			this->Label6->AutoSize = true;
			this->Label6->BackColor = System::Drawing::Color::Transparent;
			this->Label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold));
			this->Label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Label6->Location = System::Drawing::Point(316, 207);
			this->Label6->Name = L"Label6";
			this->Label6->Size = System::Drawing::Size(30, 19);
			this->Label6->TabIndex = 16;
			this->Label6->Text = L"TO";
			// 
			// TextBox1
			// 
			this->TextBox1->BackColor = System::Drawing::Color::PowderBlue;
			this->TextBox1->Location = System::Drawing::Point(181, 206);
			this->TextBox1->Name = L"TextBox1";
			this->TextBox1->Size = System::Drawing::Size(100, 20);
			this->TextBox1->TabIndex = 15;
			// 
			// Label5
			// 
			this->Label5->AutoSize = true;
			this->Label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Label5->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->Label5->Location = System::Drawing::Point(50, 205);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(85, 17);
			this->Label5->TabIndex = 14;
			this->Label5->Text = L"Price Range";
			// 
			// Panel1
			// 
			this->Panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Panel1->Controls->Add(this->button2);
			this->Panel1->Controls->Add(this->button3);
			this->Panel1->Controls->Add(this->label7);
			this->Panel1->Controls->Add(this->textBox3);
			this->Panel1->Controls->Add(this->label3);
			this->Panel1->Controls->Add(this->label4);
			this->Panel1->Controls->Add(this->label1);
			this->Panel1->Controls->Add(this->dateTimePicker2);
			this->Panel1->Controls->Add(this->dateTimePicker1);
			this->Panel1->Controls->Add(this->comboBox1);
			this->Panel1->Controls->Add(this->DataGridView1);
			this->Panel1->Controls->Add(this->Button1);
			this->Panel1->Controls->Add(this->TextBox2);
			this->Panel1->Controls->Add(this->Label6);
			this->Panel1->Controls->Add(this->TextBox1);
			this->Panel1->Controls->Add(this->Label5);
			this->Panel1->Controls->Add(this->Label2);
			this->Panel1->Cursor = System::Windows::Forms::Cursors::PanNE;
			this->Panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Panel1->Location = System::Drawing::Point(0, 84);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(955, 593);
			this->Panel1->TabIndex = 1;
			this->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RoomAvailability::Panel1_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SkyBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(393, 528);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(198, 31);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Proceed For Booking";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &RoomAvailability::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label7->Location = System::Drawing::Point(107, 540);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 19);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Enter the RoomID";
			this->label7->Click += gcnew System::EventHandler(this, &RoomAvailability::label7_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox3->Location = System::Drawing::Point(257, 539);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 27;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &RoomAvailability::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(65, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 17);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Select Type";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(488, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 17);
			this->label4->TabIndex = 25;
			this->label4->Text = L"CheckOut Date";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(50, 126);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 17);
			this->label1->TabIndex = 23;
			this->label1->Text = L"CheckIn Date";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(618, 125);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 22;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(183, 126);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 21;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Double AC", L"Single AC", L"Double NonAC", L"Single NonAC"});
			this->comboBox1->Location = System::Drawing::Point(185, 165);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(212, 21);
			this->comboBox1->TabIndex = 20;
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Label2->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label2->ForeColor = System::Drawing::Color::White;
			this->Label2->Location = System::Drawing::Point(284, 18);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(342, 27);
			this->Label2->TabIndex = 1;
			this->Label2->Text = L"Room Availability and Pricing";
			this->Label2->Click += gcnew System::EventHandler(this, &RoomAvailability::Label2_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(-3, -1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 69);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Back to Home";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RoomAvailability::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(955, 87);
			this->panel2->TabIndex = 27;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RoomAvailability::panel2_Paint);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(105, 19);
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
			this->label12->Location = System::Drawing::Point(530, 19);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(386, 42);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Campus Guest House";
			this->label12->Click += gcnew System::EventHandler(this, &RoomAvailability::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(54, 19);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 42);
			this->label13->TabIndex = 0;
			this->label13->Text = L"IIT";
			this->label13->Click += gcnew System::EventHandler(this, &RoomAvailability::label13_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel4->Controls->Add(this->button6);
			this->panel4->Location = System::Drawing::Point(0, 675);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1051, 100);
			this->panel4->TabIndex = 28;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Corbel", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(771, 8);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(172, 56);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Sign up";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// RoomAvailability
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(955, 751);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Panel1);
			this->Name = L"RoomAvailability";
			this->Text = L"RoomAvailability";
			this->Load += gcnew System::EventHandler(this, &RoomAvailability::RoomAvailability_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DataGridView1))->EndInit();
			this->Panel1->ResumeLayout(false);
			this->Panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void RoomAvailability_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void Button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
			 String^ roomType = comboBox1->Text;
			DateTime checkInDate = dateTimePicker1->Value;
			DateTime checkOutDate = dateTimePicker2->Value;
			int lowRange = Convert::ToInt32(TextBox1->Text);
			int highRange = Convert::ToInt32(TextBox2->Text);
			  String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=assignment2b";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT RoomID,Price,Floor FROM rooms WHERE Type = @roomType AND Price<=@high AND Price>=@low AND RoomID NOT IN (SELECT RoomID FROM roombooking WHERE BookedFrom < @checkOutDate AND BookedTill > @checkInDate)", con);
			// Add parameters to the command
			cmd->Parameters->AddWithValue("@roomType", roomType);
			cmd->Parameters->AddWithValue("@checkInDate", checkInDate);
			cmd->Parameters->AddWithValue("@checkOutDate", checkOutDate);
			cmd->Parameters->AddWithValue("@high", highRange);
			cmd->Parameters->AddWithValue("@low", lowRange);
			con->Open();
			MySqlDataReader^ reader = cmd->ExecuteReader();
			// Check if any rooms are available
			if (reader->HasRows) {
				// If rooms are available, assign one to the user and redirect to Form2
				while(reader->Read()){
					int roomId = reader->GetInt32(0); // Assuming RoomID is an integer
					int Price = reader->GetInt32(1); // Assuming Column2 is a string
					int column3Value = reader->GetInt32(2); // Assuming Column3 is a string
					array<Object^>^ row = { roomId, column3Value, Price, roomType };
					DataGridView1->Rows->Add(row);
				}
				// Assuming room_id is an integer
				reader->Close();
				con->Close();
				
			}
			else {
				// If no rooms are available, display a message to the user
				MessageBox::Show("No rooms available for the selected dates and type.");
				reader->Close();
				con->Close();
			}
			 
			 }
			 catch(Exception^ ex){
				MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			     
				int roomId = Convert::ToInt32(textBox3->Text);
				DateTime checkInDate = dateTimePicker1->Value;
				DateTime checkOutDate = dateTimePicker2->Value;
				// Redirect to Form2, passing the selected room ID and other necessary information
				BookingBilling^ billing = gcnew BookingBilling(roomId, checkInDate, checkOutDate);
				this->Hide(); // Hide current form
				billing->Show();
				
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}
