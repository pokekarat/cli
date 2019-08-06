#pragma once
#include "Terminal.h"
ref class AGV {
public:
	double x, y;
	double wheelCir;
	double direct; //0=N, 90=E, 180=S, 270=W
	double pulsePerRound;
	double sx, sy;
	double atx, aty;
	System::String^ name = "";
	System::Drawing::Brush^ color;
	bool run;
	AGV^ hitCar = nullptr;
	//array<Terminal^ >^ terminals = gcnew array<Terminal^>(4);
	System::Collections::Generic::List<Terminal^>^ terminals 
		= gcnew System::Collections::Generic::List<Terminal^>();
	float _speed;

	//�����зҧ
	double AGV::findDistance(double a, double b) {
		return sqrt(pow((a - x), 2) + pow((b - y), 2));
	}
	//�ҷ�ȷҧ
	double AGV::findAngle(double a, double b) {
		return atan((a - x) / (b - y)) * (180 / 3.1415);
	}
	//�Ҩӹǹ�ͺ�����ع�ͧ���
	double AGV::findNumWheelRound(double distance) {
		return distance / wheelCir;
	}
	
	int i = 0;

	void AGV::findDirection(float speed) {

		//�����˹�ʶҹշ�������Ѻ AGV
		atx = terminals[i]->x;
		aty = terminals[i]->y;

		if (i < terminals->Count-1)++i;
		else {
			i = 0;
			terminals->Reverse();
		}
		_speed = speed;
		double distance = findDistance(atx, aty);
		double m = atx - x;
		double n = aty - y;
		sx = m / distance;
		sy = n / distance;
		std::cout << "sx=" << sx << "sy=" << sy << std::endl;
		sx *= _speed;
		sy *= _speed;
	}

	void AGV::draw(System::Drawing::Graphics^ g) {
		
		//�Ҵ a1
		g->DrawString(
			name,
			gcnew System::Drawing::Font("Arial", 12),
			System::Drawing::Brushes::Black,
			(float) x ,
			(float) y-10
		);

		g->FillRectangle(color, x, y, 10, 10);
		//�Ҵ �ش �������
		g->FillEllipse(System::Drawing::Brushes::Black, atx, aty, 5, 5);

	}

	void AGV::update() {
		if (run) {
			double gapx = System::Math::Abs(atx - x);
			double gapy = System::Math::Abs(aty - y);

			if (gapx > 5) {
				x += sx;
				
			}

			if (gapy > 5) {
				y += sy;
				
			}

			if (gapx <= 5 && gapy <= 5) {
				//����� x, y �ͧ Terminal �Ѵ����Ѻ AGV �ѹ���
				if (terminals->Count != 0) {

					float r = static_cast <float> (rand()) / 
						static_cast <float> (RAND_MAX); //0x7fff
					_speed = (r * 5) + 5;
					findDirection(_speed);

				}
			}

			

		}
	}
};