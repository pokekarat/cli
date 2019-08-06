#pragma once
ref class Terminal {

public:
	System::String^ name;
	double x;
	double y;

	void Terminal::draw(System::Drawing::Graphics^ g) {
	
		g->DrawString(
			name,
			gcnew System::Drawing::Font("Arial", 12),
			System::Drawing::Brushes::Black,
			(float)x,
			(float)y + 10
		);

		g->FillEllipse(System::Drawing::Brushes::Black, x, y, 5, 5);
	}

};
