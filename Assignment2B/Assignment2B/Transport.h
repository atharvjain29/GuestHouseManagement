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
	/// Summary for Transport
	/// </summary>
	public ref class Transport : public System::Windows::Forms::Form
	{
	public:
		Transport(void)
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
		~Transport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected: 

	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	internal: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	internal: 
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Transport::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(110, 346);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 18);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Location of Pickup\r\n";
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 9.749999F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"A.M", L"P.M"});
			this->checkedListBox2->Location = System::Drawing::Point(405, 280);
			this->checkedListBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(78, 38);
			this->checkedListBox2->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::ForestGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(359, 431);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 33);
			this->button1->TabIndex = 18;
			this->button1->Text = L"BOOK\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Transport::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(93, 276);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 18);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Enter Time of Pickup";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(168, 191);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 18);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Select date";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->checkedListBox1);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->checkedListBox2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(45, 56);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(867, 499);
			this->panel1->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(477, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(390, 42);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Transport Management";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans Light", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(180, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(186, 42);
			this->label9->TabIndex = 42;
			this->label9->Text = L"GUWAHATI";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(130, 14);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 42);
			this->label10->TabIndex = 41;
			this->label10->Text = L"IIT";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 9.749999F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(281, 191);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(160, 22);
			this->dateTimePicker1->TabIndex = 40;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 9.749999F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"5-seater", L"7-seater"});
			this->checkedListBox1->Location = System::Drawing::Point(284, 233);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(120, 38);
			this->checkedListBox1->TabIndex = 39;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(157, 233);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 18);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Vehicle Type";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(281, 147);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 20);
			this->textBox1->TabIndex = 37;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(161, 149);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 18);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Customer ID";
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(285, 280);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(110, 20);
			this->textBox5->TabIndex = 35;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(285, 344);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(110, 20);
			this->textBox4->TabIndex = 34;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Corbel", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(295, 88);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(248, 33);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Book Your Transport";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(23, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(73, 71);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 32;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(124, 380);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 18);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Location of Drop\r\n";
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(285, 380);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(110, 20);
			this->textBox3->TabIndex = 22;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"HP Simplified Hans", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(45, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 51);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Back to Home";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Transport::button3_Click);
			// 
			// Transport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(967, 596);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Name = L"Transport";
			this->Text = L"Transport";
			this->Load += gcnew System::EventHandler(this, &Transport::Transport_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}

		

#pragma endregion


	private: System::Void Transport_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ constr = "server=127.0.0.1;uid=root;pwd=;database=assignment2b";
            MySqlConnection^ con = gcnew MySqlConnection(constr);
            con->Open();

			int customerID = System::Convert::ToInt32(textBox1->Text);
			String^ timeInput = textBox5->Text;
            String^ ampm = checkedListBox2->SelectedItem->ToString();
            String^ time = timeInput + " " + ampm;

			String^ pickupLocation = textBox4->Text;
			String^ dropLocation = textBox3->Text;

			DateTime selectedDate = dateTimePicker1->Value;
            String^ selectedDateString = selectedDate.ToString("yyyy-MM-dd");


		    String^ selectedItem = checkedListBox1->SelectedItem->ToString();

		  
			String^ result;
			if (selectedItem == "5-seater") {
			result = "5";
			} else if (selectedItem == "7-seater") {
				result = "7";
			} else {
			result = "Invalid selection";
			}

			int count = 2;
			
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT vehicleID FROM transport WHERE type = @type", con);
			// Add parameters to the command
			cmd->Parameters->AddWithValue("@type", result);
			int vehicleID = Convert::ToInt32(cmd->ExecuteScalar());

			MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT Price FROM transport WHERE type = @type", con);
			// Add parameters to the command
			cmd1->Parameters->AddWithValue("@type", result);
			int price = Convert::ToInt32(cmd1->ExecuteScalar());

			MySqlCommand^ cmd2 = gcnew MySqlCommand("SELECT COUNT(*) FROM transport_bookings WHERE vehicle_id = @vehicleID AND booking_date = @selectedDate", con);
			cmd2->Parameters->AddWithValue("@vehicleID", vehicleID);
			cmd2->Parameters->AddWithValue("@selectedDate", selectedDate);
			int tempCount = Convert::ToInt32(cmd2->ExecuteScalar());
	
			if(tempCount < count)	//vehicle is available, insert booking details
			{
				MySqlCommand^ cmd3 = gcnew MySqlCommand("SELECT COUNT(*) FROM transport_bookings",con);
				int bookings = Convert::ToInt32(cmd3->ExecuteScalar());

				MySqlCommand^ cmdInsertBooking = gcnew MySqlCommand("INSERT INTO transport_bookings (booking_id, vehicle_id, customer_id, booking_date, booking_time, pickup_location, drop_location) VALUES (@booking_id, @vehicle_id, @customer_id, @booking_date, @booking_time, @pickup_location, @drop_location)", con);
				cmdInsertBooking->Parameters->AddWithValue("@booking_id", bookings+1);
				cmdInsertBooking->Parameters->AddWithValue("@vehicle_id", vehicleID);
				cmdInsertBooking->Parameters->AddWithValue("@customer_id", customerID);
				cmdInsertBooking->Parameters->AddWithValue("@booking_date", selectedDate);
				cmdInsertBooking->Parameters->AddWithValue("@booking_time", time);
				cmdInsertBooking->Parameters->AddWithValue("@pickup_location", pickupLocation);
				cmdInsertBooking->Parameters->AddWithValue("@drop_location", dropLocation);
				cmdInsertBooking->ExecuteNonQuery();


				MySqlCommand^ cmdUpdate =  gcnew MySqlCommand("UPDATE customers SET TotalPayment = (TotalPayment + @cost) WHERE CustomerID = @CustomerID",con);
				cmdUpdate->Parameters->AddWithValue("@cost", price);
				cmdUpdate->Parameters->AddWithValue("@CustomerID", customerID);
				cmdUpdate->ExecuteNonQuery();


				MessageBox::Show("Booking successfully done!");
			}
			else
			{
				MessageBox::Show("We're sorry! No vehicle available of selected type on "+ selectedDate);
			}

			con->Close();
			

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			
			Close();
		 }
};
}
