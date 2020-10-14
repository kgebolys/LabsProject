#ifndef Figura_source
#define Figura_source

#include <iostream>
#include <string>

using namespace std;

class Figura {
public:
	string nazwa;
	string wymiar;
	int* boki;
	virtual void info() {};
	virtual ~Figura() {
		delete[] this->boki;
	};
};

#endif