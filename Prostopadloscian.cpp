#ifndef Prostopadloscian_source
#define Prostopadloscian_source


#include <iostream>
#include <string>
#include "Figura.cpp"

class Prostopadloscian :public Figura {

public:

	Prostopadloscian() {
		boki = new int[3];
		boki[0] = 0;
		boki[1] = 0;
		boki[2] = 0;

	};

	Prostopadloscian(int podstawa, int szerokosc, int wysokosc) {
		nazwa = "Prostopadloscian";
		wymiar = "3D";
		boki = new int[3];
		boki[0] = podstawa;
		boki[1] = szerokosc;
		boki[2] = wysokosc;
	}

	~Prostopadloscian() {
		//delete[] this->boki;
	}

	void setbok(int bok1, int bok2, int bok3) {
		this->boki[0] = bok1;
		this->boki[1] = bok2;
		this->boki[2] = bok3;
	};

	int obwod() {
		return (4 * boki[0]) + (4 * boki[1]) + (4 * boki[2]);
	}
	int pole() {
		return (2 * (boki[0] * boki[1])) + (2 * (boki[1] * boki[2])) + (2 * (boki[0] * boki[2]));
	}
	int objetosc() {
		return boki[0] * boki[1] * boki[2];
	}
	void info() {
		cout << nazwa << endl;
		cout << wymiar << endl;
		cout << boki[0] << " , " << boki[1] << " , " << boki[2] << endl;
		cout << "Obwod: " << obwod() << endl;
		cout << "Pole: " << pole() << endl;
		cout << "Objetosc: " << objetosc() << endl;
	}
};

#endif