#include <iostream>
#include <string>

using namespace std;

class Bay
{
private:
	string name;
	float deep;
	float size;

	string NamesBay[12] = {
	"Джинанский", "Ворстонский", "Новорассветный", "Байкальский", "Ломоносовский", "Тропический", "Трамиский", "Апрельский", "Безымянный", "Холодный", "Маленький", "Тормонский"
	};

public:
	Bay()
	{
		name = NamesBay[rand() % 12];
		deep = rand() % 6000 + 4000;
		size = (rand() % 9500 + 2500) / 10.0;
	}
	Bay(string N, float D, float S)
	{
		name = N;
		deep = D;
		size = S;
	}

	void setName(string N);
	void setDeep(float D);
	void setSize(float S);

};

