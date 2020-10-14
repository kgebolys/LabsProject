#ifndef Kwadrat_source
#define Kwadrat_source

#include <iostream>
#include <string>
#include "Figura.cpp"


class Kwadrat :public Figura {

public:

	Kwadrat() {
		boki = new int[2];
		boki[0] = 0;
		boki[1] = 0;

	};

	Kwadrat(int bok1) {
		nazwa = "Kwadrat";
		wymiar = "2D";
		boki = new int[2];
		boki[0] = bok1;
		boki[1] = bok1;
	}

	~Kwadrat() {
		//delete[] this->boki;
	}

	int obwod() {
		return 4 * boki[0];
	}
	int pole() {
		return boki[0] * boki[0];
	}

	void setbok(int bok) {
		this->boki[0] = bok;
		this->boki[1] = bok;
	};

	void info() {
		cout << nazwa << endl;
		cout << wymiar << endl;
		cout << boki[0] << " , " << boki[1] << endl;
		cout << "Obwod: " << obwod() << endl;
		cout << "Pole: " << pole() << endl;
	}

};

#endif