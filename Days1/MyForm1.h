#pragma once

namespace Days1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; //ใช้สำหรับ File Input/Output

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtCustName;
	private: System::Windows::Forms::TextBox^  txtCusPhone;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtOrderTime;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtOrderDate;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  btnCalulate;
	private: System::Windows::Forms::TextBox^  txtSubTotalOther;
	private: System::Windows::Forms::TextBox^  txtUnitPriceOther;
	private: System::Windows::Forms::TextBox^  txtQuantityOther;
	private: System::Windows::Forms::TextBox^  txtSubTotalPants;
	private: System::Windows::Forms::TextBox^  txtUnitPricePants;
	private: System::Windows::Forms::TextBox^  txtQuantityPants;
	private: System::Windows::Forms::TextBox^  txtSubTotalShirts;
	private: System::Windows::Forms::TextBox^  txtUnitPriceShirts;
	private: System::Windows::Forms::TextBox^  txtQuantityShirts;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::TextBox^  txtNetPrice;
	private: System::Windows::Forms::TextBox^  txtTaxAmount;
	private: System::Windows::Forms::TextBox^  txtTaxRate;
	private: System::Windows::Forms::TextBox^  txtOrderTotal;
	private: System::Windows::Forms::Button^  btnOthers;
	private: System::Windows::Forms::Button^  btnPants;
	private: System::Windows::Forms::Button^  btnShirts;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtOrderTime = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtOrderDate = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtCusPhone = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCustName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnOthers = (gcnew System::Windows::Forms::Button());
			this->btnPants = (gcnew System::Windows::Forms::Button());
			this->btnShirts = (gcnew System::Windows::Forms::Button());
			this->btnCalulate = (gcnew System::Windows::Forms::Button());
			this->txtSubTotalOther = (gcnew System::Windows::Forms::TextBox());
			this->txtUnitPriceOther = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantityOther = (gcnew System::Windows::Forms::TextBox());
			this->txtSubTotalPants = (gcnew System::Windows::Forms::TextBox());
			this->txtUnitPricePants = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantityPants = (gcnew System::Windows::Forms::TextBox());
			this->txtSubTotalShirts = (gcnew System::Windows::Forms::TextBox());
			this->txtUnitPriceShirts = (gcnew System::Windows::Forms::TextBox());
			this->txtQuantityShirts = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->txtNetPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtTaxAmount = (gcnew System::Windows::Forms::TextBox());
			this->txtTaxRate = (gcnew System::Windows::Forms::TextBox());
			this->txtOrderTotal = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->txtOrderTime);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtOrderDate);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->txtCusPhone);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtCustName);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(25, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(606, 85);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Order Setup";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(391, 1);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 9;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::dateTimePicker1_ValueChanged);
			// 
			// txtOrderTime
			// 
			this->txtOrderTime->Location = System::Drawing::Point(415, 52);
			this->txtOrderTime->Name = L"txtOrderTime";
			this->txtOrderTime->Size = System::Drawing::Size(176, 20);
			this->txtOrderTime->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(324, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Order Time:";
			// 
			// txtOrderDate
			// 
			this->txtOrderDate->Location = System::Drawing::Point(415, 27);
			this->txtOrderDate->Name = L"txtOrderDate";
			this->txtOrderDate->Size = System::Drawing::Size(176, 20);
			this->txtOrderDate->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(324, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Order Date:";
			// 
			// txtCusPhone
			// 
			this->txtCusPhone->Location = System::Drawing::Point(116, 52);
			this->txtCusPhone->Name = L"txtCusPhone";
			this->txtCusPhone->Size = System::Drawing::Size(178, 20);
			this->txtCusPhone->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Customer Phone:";
			// 
			// txtCustName
			// 
			this->txtCustName->Location = System::Drawing::Point(116, 27);
			this->txtCustName->Name = L"txtCustName";
			this->txtCustName->Size = System::Drawing::Size(178, 20);
			this->txtCustName->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Customer Name:";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox2->Controls->Add(this->btnOthers);
			this->groupBox2->Controls->Add(this->btnPants);
			this->groupBox2->Controls->Add(this->btnShirts);
			this->groupBox2->Controls->Add(this->btnCalulate);
			this->groupBox2->Controls->Add(this->txtSubTotalOther);
			this->groupBox2->Controls->Add(this->txtUnitPriceOther);
			this->groupBox2->Controls->Add(this->txtQuantityOther);
			this->groupBox2->Controls->Add(this->txtSubTotalPants);
			this->groupBox2->Controls->Add(this->txtUnitPricePants);
			this->groupBox2->Controls->Add(this->txtQuantityPants);
			this->groupBox2->Controls->Add(this->txtSubTotalShirts);
			this->groupBox2->Controls->Add(this->txtUnitPriceShirts);
			this->groupBox2->Controls->Add(this->txtQuantityShirts);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(25, 117);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(344, 235);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Order Processing";
			// 
			// btnOthers
			// 
			this->btnOthers->Location = System::Drawing::Point(205, 157);
			this->btnOthers->Name = L"btnOthers";
			this->btnOthers->Size = System::Drawing::Size(43, 20);
			this->btnOthers->TabIndex = 19;
			this->btnOthers->Text = L"O";
			this->btnOthers->UseVisualStyleBackColor = true;
			// 
			// btnPants
			// 
			this->btnPants->Location = System::Drawing::Point(205, 117);
			this->btnPants->Name = L"btnPants";
			this->btnPants->Size = System::Drawing::Size(43, 23);
			this->btnPants->TabIndex = 18;
			this->btnPants->Text = L"P";
			this->btnPants->UseVisualStyleBackColor = true;
			// 
			// btnShirts
			// 
			this->btnShirts->Location = System::Drawing::Point(205, 83);
			this->btnShirts->Name = L"btnShirts";
			this->btnShirts->Size = System::Drawing::Size(43, 23);
			this->btnShirts->TabIndex = 17;
			this->btnShirts->Text = L"S";
			this->btnShirts->UseVisualStyleBackColor = true;
			this->btnShirts->Click += gcnew System::EventHandler(this, &MyForm1::btnShirts_Click);
			// 
			// btnCalulate
			// 
			this->btnCalulate->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnCalulate->FlatAppearance->BorderSize = 2;
			this->btnCalulate->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnCalulate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCalulate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(222)));
			this->btnCalulate->ForeColor = System::Drawing::Color::Red;
			this->btnCalulate->Location = System::Drawing::Point(87, 193);
			this->btnCalulate->Name = L"btnCalulate";
			this->btnCalulate->Size = System::Drawing::Size(235, 36);
			this->btnCalulate->TabIndex = 16;
			this->btnCalulate->Text = L"Calculate";
			this->btnCalulate->UseVisualStyleBackColor = true;
			this->btnCalulate->Click += gcnew System::EventHandler(this, &MyForm1::btnCalulate_Click);
			// 
			// txtSubTotalOther
			// 
			this->txtSubTotalOther->Location = System::Drawing::Point(254, 157);
			this->txtSubTotalOther->Name = L"txtSubTotalOther";
			this->txtSubTotalOther->Size = System::Drawing::Size(68, 20);
			this->txtSubTotalOther->TabIndex = 15;
			this->txtSubTotalOther->Text = L"0";
			this->txtSubTotalOther->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtUnitPriceOther
			// 
			this->txtUnitPriceOther->Location = System::Drawing::Point(144, 157);
			this->txtUnitPriceOther->Name = L"txtUnitPriceOther";
			this->txtUnitPriceOther->Size = System::Drawing::Size(55, 20);
			this->txtUnitPriceOther->TabIndex = 14;
			this->txtUnitPriceOther->Text = L"0.00";
			this->txtUnitPriceOther->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtQuantityOther
			// 
			this->txtQuantityOther->Location = System::Drawing::Point(87, 157);
			this->txtQuantityOther->Name = L"txtQuantityOther";
			this->txtQuantityOther->Size = System::Drawing::Size(35, 20);
			this->txtQuantityOther->TabIndex = 13;
			this->txtQuantityOther->Text = L"0";
			this->txtQuantityOther->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtSubTotalPants
			// 
			this->txtSubTotalPants->Location = System::Drawing::Point(254, 117);
			this->txtSubTotalPants->Name = L"txtSubTotalPants";
			this->txtSubTotalPants->Size = System::Drawing::Size(68, 20);
			this->txtSubTotalPants->TabIndex = 12;
			this->txtSubTotalPants->Text = L"0";
			this->txtSubTotalPants->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtUnitPricePants
			// 
			this->txtUnitPricePants->Location = System::Drawing::Point(144, 117);
			this->txtUnitPricePants->Name = L"txtUnitPricePants";
			this->txtUnitPricePants->Size = System::Drawing::Size(55, 20);
			this->txtUnitPricePants->TabIndex = 11;
			this->txtUnitPricePants->Text = L"0.00";
			this->txtUnitPricePants->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtQuantityPants
			// 
			this->txtQuantityPants->Location = System::Drawing::Point(87, 117);
			this->txtQuantityPants->Name = L"txtQuantityPants";
			this->txtQuantityPants->Size = System::Drawing::Size(35, 20);
			this->txtQuantityPants->TabIndex = 10;
			this->txtQuantityPants->Text = L"0";
			this->txtQuantityPants->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtSubTotalShirts
			// 
			this->txtSubTotalShirts->Location = System::Drawing::Point(254, 85);
			this->txtSubTotalShirts->Name = L"txtSubTotalShirts";
			this->txtSubTotalShirts->Size = System::Drawing::Size(68, 20);
			this->txtSubTotalShirts->TabIndex = 9;
			this->txtSubTotalShirts->Text = L"0";
			this->txtSubTotalShirts->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtUnitPriceShirts
			// 
			this->txtUnitPriceShirts->Location = System::Drawing::Point(144, 85);
			this->txtUnitPriceShirts->Name = L"txtUnitPriceShirts";
			this->txtUnitPriceShirts->Size = System::Drawing::Size(55, 20);
			this->txtUnitPriceShirts->TabIndex = 8;
			this->txtUnitPriceShirts->Text = L"0.00";
			this->txtUnitPriceShirts->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtQuantityShirts
			// 
			this->txtQuantityShirts->Location = System::Drawing::Point(87, 85);
			this->txtQuantityShirts->Name = L"txtQuantityShirts";
			this->txtQuantityShirts->Size = System::Drawing::Size(35, 20);
			this->txtQuantityShirts->TabIndex = 7;
			this->txtQuantityShirts->Text = L"0";
			this->txtQuantityShirts->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 157);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 13);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Other";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(5, 117);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Pants";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 85);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 13);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Shirts";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(260, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Sub Total";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(141, 51);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Unity Price";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(87, 51);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Qty";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Item Type";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox3->Controls->Add(this->btnClose);
			this->groupBox3->Controls->Add(this->txtNetPrice);
			this->groupBox3->Controls->Add(this->txtTaxAmount);
			this->groupBox3->Controls->Add(this->txtTaxRate);
			this->groupBox3->Controls->Add(this->txtOrderTotal);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Location = System::Drawing::Point(395, 117);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(236, 235);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Order Summary";
			// 
			// btnClose
			// 
			this->btnClose->DialogResult = System::Windows::Forms::DialogResult::Yes;
			this->btnClose->Location = System::Drawing::Point(45, 193);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(176, 23);
			this->btnClose->TabIndex = 25;
			this->btnClose->Text = L"button1";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm1::btnClose_Click);
			// 
			// txtNetPrice
			// 
			this->txtNetPrice->Location = System::Drawing::Point(121, 156);
			this->txtNetPrice->Name = L"txtNetPrice";
			this->txtNetPrice->Size = System::Drawing::Size(100, 20);
			this->txtNetPrice->TabIndex = 24;
			this->txtNetPrice->Text = L"0.00";
			this->txtNetPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtTaxAmount
			// 
			this->txtTaxAmount->Location = System::Drawing::Point(121, 124);
			this->txtTaxAmount->Name = L"txtTaxAmount";
			this->txtTaxAmount->Size = System::Drawing::Size(100, 20);
			this->txtTaxAmount->TabIndex = 23;
			this->txtTaxAmount->Text = L"0.00";
			this->txtTaxAmount->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtTaxRate
			// 
			this->txtTaxRate->Location = System::Drawing::Point(121, 84);
			this->txtTaxRate->Name = L"txtTaxRate";
			this->txtTaxRate->Size = System::Drawing::Size(61, 20);
			this->txtTaxRate->TabIndex = 22;
			this->txtTaxRate->Text = L"5.75";
			this->txtTaxRate->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtOrderTotal
			// 
			this->txtOrderTotal->Location = System::Drawing::Point(121, 48);
			this->txtOrderTotal->Name = L"txtOrderTotal";
			this->txtOrderTotal->Size = System::Drawing::Size(100, 20);
			this->txtOrderTotal->TabIndex = 21;
			this->txtOrderTotal->Text = L"0.00";
			this->txtOrderTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(42, 160);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 13);
			this->label15->TabIndex = 20;
			this->label15->Text = L"Net Price:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(42, 124);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 13);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Tax Amount:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(42, 85);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(63, 13);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Order Total:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(42, 51);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Order Total:";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(657, 377);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
private: System::Void btnCalulate_Click(System::Object^  sender, System::EventArgs^  e) {
	/*if (System::Text::RegularExpressions::Regex::IsMatch("0", "[0-9]")) {
		MessageBox::Show("OK");
	}*/
	/*MessageBox::Show(
		"The operation has been completed",
		"Notification", 
		MessageBoxButtons::YesNoCancel, 
		MessageBoxIcon::Asterisk);*/

	if (MessageBox::Show(
		"Do you want to exit?", 
		"My Application", 
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) 
		== System::Windows::Forms::DialogResult::Yes) 
	{
		Application::Exit();
	}
	
}

private: System::Void btnShirts_Click(System::Object^  sender, System::EventArgs^  e) {
	int quantity = 1;
	double unitPrice, subTotal;

	//quantity = int::Parse(txtQuantityShirts->Text);
	bool isSuccess1 = int::TryParse(txtQuantityShirts->Text, quantity);
	bool isSuccess2 = double::TryParse(txtUnitPriceShirts->Text, unitPrice);

	if (isSuccess1 && isSuccess2) {
		subTotal = quantity * unitPrice;
		txtSubTotalShirts->Text = subTotal.ToString();
	}
	else {
		MessageBox::Show("Please insert only number.");
	}
}
		 //using namespace System::IO; 
private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
	
	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	try {
		sfd->Filter = "Text File|*.txt";
		sfd->FileName = "MyTextFile";
		sfd->Title = "Save Text File";
		if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ path = sfd->FileName;
			StreamWriter^ writer = gcnew StreamWriter(File::Create(path));
			try {
				writer->WriteLine("a,b,c");
			}
			finally{
				delete writer;
			}
		}
	}
	finally
	{ delete sfd;}
	//Close();
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	txtOrderDate->Text = dateTimePicker1->Value.ToString("dd-MM-yyyy");
//		dateTimePicker1->Value.Day.ToString() + "-" +
//		dateTimePicker1->Value.Month.ToString() + "-" +
//		dateTimePicker1->Value.Year.ToString();
	
}
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
// 2. Pants
// 3. Others