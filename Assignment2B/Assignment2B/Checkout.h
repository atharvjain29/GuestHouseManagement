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
	/// Summary for Checkout
	/// </summary>
	public ref class Checkout : public System::Windows::Forms::Form
	{
	public:
		Checkout(void)
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
		~Checkout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel4;
	protected: 
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;

	internal: System::Windows::Forms::Label^  Label5;
	private: System::Windows::Forms::Label^  label1;
	internal: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	internal: System::Windows::Forms::DataGridView^  DataGridView1;
	private: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	internal: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Checkout::typeid));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->DataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel4->Controls->Add(this->button9);
			this->panel4->Location = System::Drawing::Point(1, 565);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(894, 85);
			this->panel4->TabIndex = 23;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Corbel", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(294, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(275, 79);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Go to Payment Portal";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Checkout::button9_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(112, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(218, 42);
			this->label3->TabIndex = 3;
			this->label3->Text = L"GUWAHATI";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(489, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(386, 42);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Campus Guest House";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::SkyBlue;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(-1, 92);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(237, 88);
			this->button8->TabIndex = 29;
			this->button8->Text = L"Go Back to Home Page";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(895, 93);
			this->panel1->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(56, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 42);
			this->label2->TabIndex = 0;
			this->label2->Text = L"IIT";
			// 
			// Label5
			// 
			this->Label5->AutoSize = true;
			this->Label5->BackColor = System::Drawing::Color::Transparent;
			this->Label5->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label5->ForeColor = System::Drawing::Color::White;
			this->Label5->Location = System::Drawing::Point(180, 253);
			this->Label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(283, 24);
			this->Label5->TabIndex = 33;
			this->Label5->Text = L"Here is your generated Invoice ";
			this->Label5->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(178, 205);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 24);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Enter your CustomerID";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(397, 205);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 31);
			this->textBox2->TabIndex = 38;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Corbel", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(616, 186);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 72);
			this->button3->TabIndex = 40;
			this->button3->Text = L"Get your Invoice";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Checkout::button3_Click);
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
			this->DataGridView1->Location = System::Drawing::Point(64, 306);
			this->DataGridView1->Name = L"DataGridView1";
			this->DataGridView1->ReadOnly = true;
			this->DataGridView1->RowTemplate->Height = 24;
			this->DataGridView1->Size = System::Drawing::Size(786, 235);
			this->DataGridView1->TabIndex = 41;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"CustomerID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"TotalPayment";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Checkout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(897, 653);
			this->Controls->Add(this->DataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->Label5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->panel1);
			this->Name = L"Checkout";
			this->Text = L"Checkout";
			this->panel4->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->DataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 int  CustomerID = System::Convert::ToInt32(textBox2->Text);
				 DataGridView1->Visible = true;
				 Label5->Visible = true;
				 String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=assignment2b";
				 MySqlConnection^ con = gcnew MySqlConnection(constr);
				 con->Open();
				
				 MySqlCommand^ name_reader = gcnew MySqlCommand("SELECT TotalPayment FROM customers WHERE CustomerID = @userId", con);
				 // Add parameters to the command
				 name_reader->Parameters->AddWithValue("@userId", CustomerID);
				 Object^ userName = name_reader->ExecuteScalar();
				 int payment = Convert::ToInt32(userName);

				 MySqlCommand^ name_reader1 = gcnew MySqlCommand("SELECT Name FROM customers WHERE CustomerID = @userId", con);
				 // Add parameters to the command
				 name_reader1->Parameters->AddWithValue("@userId", CustomerID);
				 Object^ Name = name_reader1->ExecuteScalar();
				 String^ name = Convert::ToString(Name);

				 array<Object^>^ row = {CustomerID, name, payment };
				 DataGridView1->Rows->Add(row);
			 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}
