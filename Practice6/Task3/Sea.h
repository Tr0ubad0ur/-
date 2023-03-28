#include <iostream>
#include <string>
#include "Bay.h"

using namespace std;

class Sea: private Bay
{
private:
	string name;
	float deep;
	float size;

	int Bays_count = 0;

	string NamesSea[12] = {"Китайское","Элегенское","Унарное","Арабское","Кабанье","Сильное","Франзенское","Батинское","Седьмое","Парамайское"
	};

public:
	Bay* Bays = new Bay[Bays_count];

	Sea()
	{
		name = NamesSea[rand() % 12];
		deep = rand() % 8500 + 3500;
		size = (rand() % 100000 + 20000) / 10.0;
	}
	Sea(string N, float D, float S)
	{
		name = N;
		deep = D;
		size = S;
	}

	void addBay();

	void setName(string N);
	void setDeep(float D);
	void setSize(float S);
};
