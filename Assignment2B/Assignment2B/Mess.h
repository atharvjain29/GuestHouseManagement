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
	/// Summary for Mess
	/// </summary>
	public ref class Mess : public System::Windows::Forms::Form
	{
	public:
		Mess(void)
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
		~Mess()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	internal: System::Windows::Forms::PictureBox^  PictureBox2;
	private: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  label11;
	internal: System::Windows::Forms::Label^  label6;
	internal: System::Windows::Forms::Label^  Label7;
	internal: System::Windows::Forms::Label^  label8;
	internal: System::Windows::Forms::Button^  button2;
	internal: System::Windows::Forms::Label^  Label10;
	internal: System::Windows::Forms::DateTimePicker^  DateTimePicker1;
	internal: System::Windows::Forms::Label^  Label9;
	internal: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ListBox^  listBox1;
	internal: System::Windows::Forms::Label^  label22;
	private: 
	internal: System::Windows::Forms::TextBox^  textBox9;
	internal: 

	private: 
	internal: 
	private: 




	private: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Mess::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Label10 = (gcnew System::Windows::Forms::Label());
			this->DateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->Label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->PictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(-1, -3);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(953, 115);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(-9, 55);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 65);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Back to Home";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Mess::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(527, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 43);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Campus Guest House\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(69, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 44);
			this->label3->TabIndex = 5;
			this->label3->Text = L"GUWAHATI";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(20, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 42);
			this->label2->TabIndex = 4;
			this->label2->Text = L"IIT";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->listBox1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->Label10);
			this->panel2->Controls->Add(this->DateTimePicker1);
			this->panel2->Controls->Add(this->Label9);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->Label7);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->PictureBox2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(1, 116);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(953, 509);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mess::panel2_Paint);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::Black;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Breakfast", L"Lunch", L"Dinner"});
			this->listBox1->Location = System::Drawing::Point(753, 271);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->listBox1->Size = System::Drawing::Size(104, 58);
			this->listBox1->TabIndex = 117;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LawnGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(807, 382);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 46);
			this->button2->TabIndex = 116;
			this->button2->Text = L"Submit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Mess::button2_Click);
			// 
			// Label10
			// 
			this->Label10->AutoSize = true;
			this->Label10->BackColor = System::Drawing::Color::Transparent;
			this->Label10->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label10->ForeColor = System::Drawing::Color::White;
			this->Label10->Location = System::Drawing::Point(703, 228);
			this->Label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label10->Name = L"Label10";
			this->Label10->Size = System::Drawing::Size(53, 22);
			this->Label10->TabIndex = 115;
			this->Label10->Text = L"Date ";
			// 
			// DateTimePicker1
			// 
			this->DateTimePicker1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DateTimePicker1->Location = System::Drawing::Point(790, 227);
			this->DateTimePicker1->Margin = System::Windows::Forms::Padding(2);
			this->DateTimePicker1->Name = L"DateTimePicker1";
			this->DateTimePicker1->Size = System::Drawing::Size(149, 23);
			this->DateTimePicker1->TabIndex = 114;
			// 
			// Label9
			// 
			this->Label9->AutoSize = true;
			this->Label9->BackColor = System::Drawing::Color::Transparent;
			this->Label9->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label9->ForeColor = System::Drawing::Color::Snow;
			this->Label9->Location = System::Drawing::Point(746, 333);
			this->Label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label9->Name = L"Label9";
			this->Label9->Size = System::Drawing::Size(173, 26);
			this->Label9->TabIndex = 113;
			this->Label9->Text = L"* select date and meal that\r\n  you want to skip.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(711, 127);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(214, 31);
			this->label12->TabIndex = 112;
			this->label12->Text = L"Opt-out of Meal";
			// 
			// Label7
			// 
			this->Label7->AutoSize = true;
			this->Label7->BackColor = System::Drawing::Color::Transparent;
			this->Label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Label7->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label7->ForeColor = System::Drawing::Color::White;
			this->Label7->Location = System::Drawing::Point(386, 338);
			this->Label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label7->Name = L"Label7";
			this->Label7->Size = System::Drawing::Size(266, 152);
			this->Label7->TabIndex = 110;
			this->Label7->Text = L"Room No.        Location\r\n----------------------------\r\nGround Floor   Mess-A\r\nFi" 
				L"rst Floor        Mess-B\r\nSecond Floor   Mess-C\r\nThird Floor       Mess-D\r\n";
			this->Label7->Click += gcnew System::EventHandler(this, &Mess::Label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(380, 298);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(191, 31);
			this->label8->TabIndex = 109;
			this->label8->Text = L"Mess Location";
			this->label8->Click += gcnew System::EventHandler(this, &Mess::label8_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(380, 136);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(182, 31);
			this->label11->TabIndex = 108;
			this->label11->Text = L"Mess Timings";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(385, 176);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(303, 77);
			this->label6->TabIndex = 107;
			this->label6->Text = L"Breakfast    7:00hrs - 9:15hrs\r\nLunch         12:00hrs - 14:00hrs\r\nDinner        " 
				L"20:00hrs - 22:00hrs\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Snow;
			this->label5->Location = System::Drawing::Point(96, 72);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 31);
			this->label5->TabIndex = 106;
			this->label5->Text = L"Mess Menu";
			// 
			// PictureBox2
			// 
			this->PictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PictureBox2.BackgroundImage")));
			this->PictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PictureBox2->Location = System::Drawing::Point(26, 112);
			this->PictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->PictureBox2->Name = L"PictureBox2";
			this->PictureBox2->Size = System::Drawing::Size(324, 384);
			this->PictureBox2->TabIndex = 8;
			this->PictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(339, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(245, 42);
			this->label4->TabIndex = 7;
			this->label4->Text = L"MESS FACILITY";
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Location = System::Drawing::Point(-1, 616);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(953, 40);
			this->panel3->TabIndex = 1;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(699, 186);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(158, 18);
			this->label22->TabIndex = 160;
			this->label22->Text = L" Enter Customer ID:";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::White;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(861, 186);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(78, 23);
			this->textBox9->TabIndex = 159;
			// 
			// Mess
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(951, 658);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Mess";
			this->Text = L"Mess";
			this->Load += gcnew System::EventHandler(this, &Mess::Mess_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Mess_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
private: System::Void PictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			Close();
		 }
private: System::Void Label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ constr = "server=127.0.0.1;uid=root;pwd=;database=assignment2b";
				MySqlConnection^ con = gcnew MySqlConnection(constr);
				con->Open();

				int CustomerID  =  System::Convert::ToInt32(textBox9->Text);
			int items_selected = listBox1->SelectedItems->Count;
			MessageBox::Show(items_selected.ToString());
			int cost = -100*items_selected;
			MessageBox::Show(cost.ToString());
			MySqlCommand^ cmdUpdate =  gcnew MySqlCommand("UPDATE customers SET TotalPayment = (TotalPayment + @cost) WHERE CustomerID = @CustomerID",con);
			cmdUpdate->Parameters->AddWithValue("@cost", cost);
			cmdUpdate->Parameters->AddWithValue("@CustomerID", CustomerID);
			cmdUpdate->ExecuteNonQuery();

			MessageBox::Show("Your request has been noted. We will adjust your Total Payment accordingly.");
			con->Close();
		 }
};
}
