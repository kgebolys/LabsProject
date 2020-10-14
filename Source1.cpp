#include <iostream>
#include <string>
#include "Odcinek.cpp"
#include "Kwadrat.cpp"
#include "Prostopadloscian.cpp"

using namespace std;

int main() {
	Odcinek *odc=new Odcinek();
	Odcinek *odc1 = new Odcinek(1);
	Kwadrat *kw = new Kwadrat();
	Kwadrat *kw1 = new Kwadrat(5);
	Prostopadloscian *p = new Prostopadloscian();
	Prostopadloscian *p1 = new Prostopadloscian(4,5,6);

	odc->info();
	odc1->info();
	kw->info();
	kw1->info();
	p->info();
	p1->info();

	delete odc1;
	delete kw1;
	delete p1;

	odc->setbok(4);
	kw->setbok(8);
	p->setbok(4, 6, 8);
	odc->info();
	kw->info();
	p->info(); 

	
	Figura** tab = new Figura*[3]; //zalokowanie 3 elementowej tablicy wskaŸników do figur
	for (int i = 0; i < 3; ++i) //inicjalizacja pamiêci
		tab[i] = new Figura();
	tab[0] = new Odcinek(5);
	tab[1] = new Kwadrat(5); //ka¿dy bok ma tak¹ sam¹ d³ugoœæ 
	tab[2] = new Prostopadloscian(5, 5, 5);

	tab[0]->info();
	tab[1]->info();
	tab[2]->info();

	delete[] tab;
	system("pause");
};