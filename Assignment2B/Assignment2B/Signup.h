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
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(void)
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
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel4;
	protected: 
	private: System::Windows::Forms::Button^  button9;










	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;






	internal: System::Windows::Forms::Label^  Label5;
	private: 
	internal: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button8;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Signup::typeid));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel4->Controls->Add(this->button9);
			this->panel4->Location = System::Drawing::Point(2, 565);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(894, 85);
			this->panel4->TabIndex = 12;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Corbel", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(631, 17);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(172, 56);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Log-in";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(895, 93);
			this->panel1->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(103, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(218, 42);
			this->label3->TabIndex = 3;
			this->label3->Text = L"GUWAHATI";
			this->label3->Click += gcnew System::EventHandler(this, &Signup::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(528, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(386, 42);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Campus Guest House";
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
			this->Label5->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label5->ForeColor = System::Drawing::Color::AliceBlue;
			this->Label5->Location = System::Drawing::Point(206, 225);
			this->Label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(95, 31);
			this->Label5->TabIndex = 16;
			this->Label5->Text = L"Name :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::AliceBlue;
			this->label6->Location = System::Drawing::Point(192, 289);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(191, 31);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Email Address :";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Corbel", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(313, 386);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 56);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Sign Up";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Signup::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(424, 225);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 38);
			this->textBox1->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(424, 286);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 38);
			this->textBox2->TabIndex = 20;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::SkyBlue;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(0, 92);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(237, 88);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Go Back to Home Page";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(896, 650);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Label5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Name = L"Signup";
			this->Text = L"Signup";
			this->Load += gcnew System::EventHandler(this, &Signup::Signup_Load);
			this->panel4->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void Signup_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  try {
            String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=assignment2b";
            MySqlConnection^ con = gcnew MySqlConnection(constr);
            con->Open();

			MySqlCommand^ cmdGetLastSignedUserId = gcnew MySqlCommand("SELECT COUNT(*) FROM signedusers", con);
			Object^ result = cmdGetLastSignedUserId->ExecuteScalar();
			int lastSignedUserId = Convert::ToInt32(result); // Handle the case where result is NULL
			lastSignedUserId+=1;

			String^ Username = textBox1->Text;
			String^ Email = textBox2->Text;
			MySqlCommand^ cmdGuest = gcnew MySqlCommand("INSERT INTO signedusers (UserID, Name, Email) VALUES (@UserID, @name, @email)", con);
            cmdGuest->Parameters->AddWithValue("@name", Username);
            cmdGuest->Parameters->AddWithValue("@email", Email);        
			cmdGuest->Parameters->AddWithValue("@UserID", lastSignedUserId);
            cmdGuest->ExecuteNonQuery();

			MessageBox::Show("Signup Successfull, Your UserID is "+ lastSignedUserId +". Keep it for later use");
            con->Close();
			Close();

        } catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
		 }
};
}