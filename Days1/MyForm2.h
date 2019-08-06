#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <msclr\marshal_cppstd.h>



namespace Days1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;

	

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		

	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			srand(time(NULL));
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;



	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::Timer^  timer3;
	private: System::ComponentModel::IContainer^  components;




	protected:







	protected:





	protected:











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(36, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(592, 389);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(584, 363);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(235, 153);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Stack";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(235, 97);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Map";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(235, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"A", L"B+", L"B", L"C+", L"C", L"D+", L"D", L"F" });
			this->comboBox1->Location = System::Drawing::Point(73, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox1_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(584, 363);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(41, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(367, 277);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(188, 317);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(584, 363);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(99, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(172, 39);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 0;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->textBox2);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->pictureBox3);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->pictureBox2);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(584, 363);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(376, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(357, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"y";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(76, 52);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 36);
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(375, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(357, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(12, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"x";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(375, 106);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Run";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(67, 38);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(167, 68);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button7);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(584, 363);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(336, 39);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 0;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// timer3
			// 
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm2::timer3_Tick);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(692, 423);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::MyForm2_Paint);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		
	}

private: StringBuilder^ sb = gcnew StringBuilder();

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
    
	/*sb->Append("a");
	sb->Append("b");
	sb->Append("c");
	sb->Insert(1, "c1");
	sb->Remove(0, 1);
	String^ r = sb->ToString();
	
	bool ch1Chk = checkBox1->Checked;
	//MessageBox::Show("" + ch1Chk);
	if (ch1Chk) {
		label1->Text = "Coke";
	}
	else {
		label1->Text = "";
	}
	*/
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void test(System::Object^  sender, System::EventArgs^  e) {
			 //MessageBox::Show("hi");

	array<Control ^> ^ s = tabPage2->Controls->Find("text1", true);
	int x = int::Parse(s[0]->Text);
	String^ ss = "";
}

		 

Drawing::Graphics^ g;

private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
	g = pictureBox1->CreateGraphics();

	TextBox^ t1 = gcnew TextBox();
	t1->Location = Point(450, 0);
	t1->Name = "text1";
	this->tabPage2->Controls->Add(t1);

	Button^ b1 = gcnew Button();
	b1->Location = Point(450, 50);
	b1->Click += gcnew EventHandler(this, &MyForm2::test);
	this->tabPage2->Controls->Add(b1);

	







	/*int size = 3;
	array<TextBox^> ^tt = gcnew array<TextBox^>(size);
	for (int i = 0; i < size; i++) {
		tt[i] = gcnew TextBox();
		tt[i]->Location = Point(450, i*30);
		this->tabPage2->Controls->Add(tt[i]);
		tt[i]->Click += gcnew EventHandler(this, &MyForm2::test);
	}*/



	/*tt[0] = gcnew TextBox();
	tt[0]->Location = Point(450, 0);
	this->tabPage2->Controls->Add(tt[0]);

	tt[1] = gcnew TextBox();
	tt[1]->Location = Point(450, 30);
	this->tabPage2->Controls->Add(tt[1]);

	tt[2] = gcnew TextBox();
	tt[2]->Location = Point(450, 60);
	this->tabPage2->Controls->Add(tt[2]);*/


	


}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ test = comboBox1->Text;
	label1->Text = test;
	TextBox^ a = gcnew TextBox();
	
}

value struct Rect 
{ 
	int length; 
	int width;
};

private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

	array<Rect> ^rects = gcnew array<Rect>(3);
	rects[0].length= 10;
	rects[0].width = 10;
	rects[1].length = 5;
	rects[1].width = 5;
	rects[2].length = 4;
	rects[2].width = 3;

	

	String^ test = comboBox1->Text;
	label1->Text = test;

	enum Animals
	{
		CAT = 2
	};
	int array[5];
	array[CAT] = 4;
	int prime[2];
	prime[0] = 1;
	prime[1] = 2;
	int total = prime[0] + prime[1];
	label1->Text = "" + array[CAT];
}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Brush^ brush = gcnew Drawing::SolidBrush(Color::Green);
	g->FillRectangle(brush, 0, 0, 100, 100);
	g->RotateTransform(1.5);
	this->Refresh();
	
}

value struct Node{
	int d;
	Node *ptr;
};

void show(std::vector<int> v) {
	//แสดงผล
	std::cout << "show..." << '\n';
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << "\n";
	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	Node node1;
	Node node2;
	Node node3;
	Node header;

	node1.d = 1;
	node2.d = 2;
	node3.d = 3;

	header.ptr = &node1;
	node1.ptr = &node2;
	node2.ptr = &node3;

	while (header.ptr != NULL) {
		//std::cout << (*header.ptr).d << '\n';
		header = *header.ptr;
	}

	//#include <vector>
	
	std::vector<int> myvec; //int myarray[4]

	//ใส่ค่าต่อในหางแถว
	for (int i = 0; i < 100; i++) {
		myvec.push_back(i);
	}
	std::to_string(i);
	//myvec.push_back(1);
	//myvec.push_back(2);
	//myvec.push_back(3);
	//myvec.push_back(4);
	//myvec.push_back(5);
	//myvec.insert(myvec.begin(), 6);
	//myvec.insert(myvec.begin() + 1, 7);

	//แสดงผล
	//show(myvec);
	
	//การลบข้อมูล
	myvec.pop_back();
	myvec.pop_back();
	myvec.erase(myvec.begin()+2);

	//แสดงผลที่ index 3
	int value = myvec.at(3);
	//แสดงผลทั้งหมด
	//show(myvec);

	//#include<algorithm> 
	//น้อยไปมาก
	std::sort(myvec.begin(), myvec.begin() + myvec.size());
	//แสดงผล
	//show(myvec);

	//แสดงค่ามากสุด
	int max = myvec.back();
	std::cout << max;
	//แสดงค่าน้อยสุด
	//int min = myvec.front();
	




	//int numRows = 3;
	//int numCols = 5;
	//int array[3][5] = 
	//{
	//	{1,2,3,4,5},
	//	{6,7,8,9,10},
	//	{11,12,13,14,15}
	//};

	////std::cout << array[0][0] << std::endl;

	//for (int row = 0; row < numRows; ++row)
	//{
	//	for (int col = 0; col < numCols; col++) {
	//		std::cout << array[row][col] << " ";
	//	}
	//	std::cout << std::endl;
	//}

	//tabPage3->Refresh();
	//label2->Text = "a";
	

	//timer1->Start();

	//int x = 5;
	//std::cout << x << '\n';
	//std::cout << &x << '\n';
	//std::cout << *(&x) << '\n';

	//int *ptr; // = &x;
	//std::cout << ptr << '\n';
	//std::cout << *ptr << '\n';

	/*int value1 = 5;
	int value2 = 7;
	std::cout << &value1 << '\n';
	std::cout << &value2 << '\n';
	int *ptr2 = &value1;
	std::cout << *ptr2 << '\n';

	ptr2 = &value2;
	std::cout << *ptr2 << '\n';

	*ptr2 = 100;
	std::cout << value2 << '\n';

	int a[] = { 1,2,3,4,5 };
	int *ptr3 = a;
	for(int i=0; i<5; i++)
		std::cout << (ptr3+i) << '\n';

	std::cout << a[0] << '\n';
	int aaa = 3;
	changeArray(&aaa);
	std::cout << aaa << '\n';*/
}

void changeArray(int *ptr) {
	*ptr = 5;
}

int xPosition = 0;
int yPosition = 0;
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	label2->Location = Point(xPosition, yPosition);
	xPosition += 10;	
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (String::IsNullOrEmpty(textBox1->Text)) {
		MessageBox::Show("Please insert a number.");
	}
	else {
		timer3->Start();
	}
}

int i = 0;
int j = 0;
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	
	
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	using namespace std;
	map<string, int> m;
	m["banana"] = 30;
	m["orange"] = 20;
	m["mango"] = 40;
	int price = m.at("orange");
	cout << price << endl;
	
	map<string, int>::iterator it = m.begin();
	while (it != m.end()) {
		cout << it->first << " " << it->second << endl;
		it++;
	}

	if (m.find("man") == m.end()) {
		cout << "Not found.";
	}
	else {
		cout << "Found.";
	}
	
}

		
System::Collections::Queue ^ q;
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	using namespace std;
	using namespace std::chrono;
	// = System::Collections::Queue();
	q = gcnew  System::Collections::Queue();
	q->Enqueue(1);
	q->Enqueue(2);
	//q->Dequeue();
	//q->Peek();
	int c = q->Count;

	queue<string> q;


	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);

	int x[10] = {};
	for (int i = 0; i < 10; i++) {
		x[i] = i;
		cout << x[i];
	}

	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	while (!s.empty()) {
		int data = s.top();
		//cout << data << " ";
		s.pop();
	}
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(t2 - t1).count();
	cout << "duration = " << duration << endl;

	//Exercise reverse string "abc" answer "cba"
	string str = "abc";
	//char c = str.at(0); //'a'
	//#include <msclr\marshal_cppstd.h>
	std::string name = msclr::interop::marshal_as<std::string>(textBox1->Text);
	stack<string> ss;
	
	ss.push(name);

	stack<char> s2;
	int size = str.length();
	for (int i = 0; i < size; i++) {
		//cout << str.at(i) << "";
		s2.push(str.at(i));
	}
	cout << endl;

	while (!s2.empty()) {
		char data = s2.top();
		//cout << data << "";
		s2.pop();
	}

	//Excercise 2, หาว่าจำนวนวงเล็บครบถ้วนมั๊ย 
	string str1 = "(2+3)";
	string str2 = "(2+3";
	string str3 = "((2+3)+4)-5";

	/*if (str.at(i) == '(' || str.at(i) == ')') {
	}*/

	
	//#include <stdlib.h>
	//#include <time.h>
	
	

	int randomNumber;
	for (int i = 0; i < 100; i++) {
		randomNumber = rand() % 10 + 1; //1 ~ 10
		s.push(randomNumber);
	}
	cout << randomNumber << " ";

	//1 ~ 6
	//5 ~ 10
	//5 ~ 11
}
		 value class Person {
		 public:
			 String ^ PID;
			 String ^ fullName;
			 String ^ address;
		 };

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

	Person kunAdd;
	kunAdd.PID = "001";
	kunAdd.fullName = "Tawatchai";
	kunAdd.address = "1 BangBua";
	
	
	//fullName
	//address
}
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
	int stepX = Convert::ToInt32(textBox1->Text);
	int stepY = Convert::ToInt32(textBox2->Text);

	


	if (i < stepX) {
		pictureBox3->Location = Point(pictureBox3->Location.X + 50, pictureBox3->Location.Y);
		++i;
	}
	else {
		if (j < stepY) {
			pictureBox3->Location = Point(pictureBox3->Location.X, pictureBox3->Location.Y + 50);
			j++;
		}
	}

}

		 
private: System::Void MyForm2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

	Graphics^ g = e->Graphics;

	//make it High Quality  
	g->SmoothingMode = Drawing2D::SmoothingMode::HighQuality;

	//draw a rectangle with the position based on rectanglePos  
	//with 50 px width and 50 px height  
	g->FillRectangle(Brushes::LightGreen, 0, 0, 50, 50);
	g->DrawRectangle(Pens::Blue, 0, 0, 50, 50);
}
};



}











