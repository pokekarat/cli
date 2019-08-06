#pragma once
#include <math.h>
#include <iostream>
#include "AGVH.h"
#include "Terminal.h"
#include <vector>
namespace Days1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Graphic
	/// </summary>
	public ref class Graphic : public System::Windows::Forms::Form
	{
	public:
		Graphic(void)
		{
			InitializeComponent();

			setup();

			serialPort = gcnew SerialPort(
				"COM3",
				9600,
				Parity::None,
				8,
				StopBits::One
			);


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Graphic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


	//Point rectanglePos;
	private: System::Windows::Forms::Timer^  timer1;
			 //Point rectangleSpeed;
			 //float angle = 0;

			 SerialPort^ serialPort;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				 this->SuspendLayout();
				 // 
				 // timer1
				 // 
				 this->timer1->Enabled = true;
				 this->timer1->Interval = 50;
				 this->timer1->Tick += gcnew System::EventHandler(this, &Graphic::timer1_Tick);
				 // 
				 // Graphic
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(484, 461);
				 this->Name = L"Graphic";
				 this->Text = L"Graphic";
				 this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Graphic::Graphic_Paint);
				 this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Graphic::Graphic_MouseClick);
				 this->ResumeLayout(false);

			 }

			 void setup() {
				 //Terminal
				 t1 = gcnew Terminal();
				 t1->name = "t1";
				 t1->x = 450;
				 t1->y = 200;
				 t2 = gcnew Terminal();
				 t2->name = "t2";
				 t2->x = 100;
				 t2->y = 400;
				 t3 = gcnew Terminal();
				 t3->name = "t3";
				 t3->x = 450;
				 t3->y = 300;
				 t4 = gcnew Terminal();
				 t4->name = "t4";
				 t4->x = 400;
				 t4->y = 400;

				 //AGV
				 a1 = gcnew AGV();
				 a1->name = "agv1";
				 a1->color = Brushes::DarkOrange;
				 a1->x = 50; //ตำแหน่ง x รถ
				 a1->y = 200; //ตำแหน่ง y รถ
				 //ใส่สถานีปลายทาง
				 a1->terminals->Add(t1);
				 a1->terminals->Add(t3);
				 a1->terminals->Add(t4);
				 //			a1->terminals->Add(t2);
							 //หาทิศทางพร้อม speed
				 a1->findDirection(5.0f);
				 a1->run = true;

				 a2 = gcnew AGV();
				 a2->name = "agv2";
				 a2->color = Brushes::Red;
				 a2->x = 100;
				 a2->y = 100;
				 /*a2->atx = t2->x;
				 a2->aty = t2->y;*/
				 a2->terminals->Add(t2);
				 a2->terminals->Add(t4);
				 a2->terminals->Add(t3);
				 a2->findDirection(10.0f);
				 a2->run = true;

				 a3 = gcnew AGV();
				 a3->name = "agv3";
				 a3->color = Brushes::LawnGreen;
				 a3->x = 50;
				 a3->y = 300;
				 /*a3->atx = t3->x;
				 a3->aty = t3->y;
				 a3->terminals->Add(t3);
				 a3->findDirection(10.0f);
				 a3->run = true;

				 a4 = gcnew AGV();
				 a4->name = "agv4";
				 a4->color = Brushes::Red;
				 a4->x = 400;
				 a4->y = 100;
				 a4->atx = t4->x;
				 a4->aty = t4->y;
				 a4->terminals->Add(t4);
				 a4->findDirection(6.0f);
				 a4->run = true;*/

				 list->Clear();

				 list->Add(a1);
				 list->Add(a2);
				 /*list->Add(a3);
				 list->Add(a4);*/

			 }
#pragma endregion

			 AGV^ a1;
			 AGV^ a2;
			 AGV^ a3;
			 AGV^ a4;
			 Terminal^ t1;
			 Terminal^ t2;
			 Terminal^ t3;
			 Terminal^ t4;

			 bool start = false;
			 List<AGV^>^ list = gcnew List<AGV^>();

	private: System::Void Graphic_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		//if (start) {
			//Image^ image = Image::FromFile("c:\\circle.png");
			//make it High Quality  

			//draw a rectangle with the position based on rectanglePos  
			//with 50 px width and 50 px height 
			//g->TranslateTransform(25, 25);
			//g->RotateTransform(angle);
			//e->Graphics->DrawImage(image, 100, 100, image->Size.Width, image->Size.Height);
			//g->RotateTransform(15);
			//g->DrawRectangle(Pens::Blue, 50, 50, 50, 50);
			//g->ResetTransform();
			//g->SmoothingMode = Drawing2D::SmoothingMode::HighQuality;

			/*a1->draw(e->Graphics);
			a2->draw(e->Graphics);
			a3->draw(e->Graphics);*/
			for (int i = 0; i < list->Count; i++) {
				list[i]->draw(e->Graphics);
			}

			t1->draw(e->Graphics);
			t2->draw(e->Graphics);
			t3->draw(e->Graphics);
			t4->draw(e->Graphics);
		//}	
	}

			 List<AGV^>^ hitCarList = gcnew List<AGV^>();

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		if (start) {

			for (int i = 0; i < list->Count; i++) {
				list[i]->update();
			}

			for (int i = 0; i < list->Count; i++) {
				for (int j = 0; j < list->Count; j++) {

					if (i != j) {

						double r = sqrt(
							pow((list[i]->x - list[j]->x), 2)
							+ pow((list[i]->y - list[j]->y), 2));

						//std::cout << r << std::endl;

						//มีการชน
						if (r < 50) {
							if (list[i]->hitCar == nullptr && list[j]->hitCar == nullptr) {

								//1. บันทึกว่าใครชนกับใคร
								list[i]->hitCar = list[j];
								list[j]->hitCar = list[i];
								//2. ให้คันนึงหยุด
								list[i]->run = false;
							}
						}
						else
						{
							//1. คันที่หยุดจะได้ไปก็ต่อเมื่อ คู่กรณีเท่านั้นที่เคลื่อนห่างออกไปเกิน r
							if (list[i]->run == false && list[i]->hitCar->Equals(list[j])) {
								list[i]->run = true;
								list[i]->hitCar = nullptr;
								list[j]->hitCar = nullptr;
							}

						}
					}

				}

			}

			this->Invalidate();
		}

		//serialPort->Open();

		/*String^ dataIn = serialPort->ReadLine();
		array<wchar_t>^ a = { ':' };
		array<String^>^ s = dataIn->Split(a);
		a1.name = s[0];
		a1.x = Convert::ToDouble(s[1]);
		a1.y = Convert::ToDouble(s[2]);*/


		//serialPort->Close();

	}
	private: System::Void Graphic_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {


		setup();

		start = true;

		/*
		serialPort->Open();
		serialPort->WriteLine("1");
		serialPort->Close();
		*/

	}


	};

}
