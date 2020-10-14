#ifndef Odcinek_source
#define Odcinek_source

#include <iostream>
#include <string>
#include "Figura.cpp"


class Odcinek :public Figura {

public:

	Odcinek() { nazwa = "Odcinek"; wymiar = "1D"; boki = new int[1]; boki[0] = 0; };

	Odcinek(int bok) {
		nazwa = "Odcinek";
		wymiar = "1D";
		boki = new int[1];
		boki[0] = bok;
	}

	~Odcinek() {
		//delete[] this->boki;
	}

	int obwod() {
		return boki[0];
	}

	void setbok(int bok) {
		this->boki[0] = bok;
	};

	void info() {
		cout << nazwa << endl;
		cout << wymiar << endl;
		cout << boki[0] << endl;
		cout << "Obwod: " << obwod() << endl;

	}
};

#endif