#include <iostream>
#include "cone.h"

using namespace std;

int main()
{

	cone c1(3, 7);
	cone c2(1,2,3,5,10);
	
	cout << "Площадь первого конуса: "<< c1.area() << endl;
	cout << "Объём первого конуса: " << c1.volume() << endl;
	cout << "Площадь второго конуса: " << c2.area() << endl;
	cout << "Объём второго конуса: " << c2.volume() << endl;
	cout << endl;
	
	int size;
	double x, y, z, r, h;
	cout << "Введите кол-во конусов ->";
	cin >> size;
	cone* cones = new cone[size];
	cout << endl;
	cout << "Вводите данные в формате {x,y,z,r,h}";
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Введите данные конуса номер " << i + 1 << " : ";
		cin >> x >> y >> z >> r >> h;
		cones[i].setCoord(x, y, z);
		cones[i].setRad(r);
		cones[i].setHeight(h);
	}

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Данные конуса номер " << i + 1 << " : \n";
		cout << cones[i] << endl;
		cout << "	S = " << cones[i].area() << endl;
		cout << "	V = " << cones[i].volume() << endl;
	}

	cone cones2[5];
	cones2[0].setCoord(0, 0, 0); cones2[0].setRad(18); cones2[0].setHeight(20);
	cones2[1].setCoord(0, 0, 1); cones2[1].setRad(2); cones2[1].setHeight(5);
	cones2[2].setCoord(0, 1, 0); cones2[2].setRad(0.0059); cones2[2].setHeight(10);
	cones2[3].setCoord(0, 1, 1); cones2[3].setRad(1000); cones2[3].setHeight(150);
	cones2[4].setCoord(1, 0, 0); cones2[4].setRad(2.71); cones2[4].setHeight(3.14);

	cout << endl;
	cout << "Статический массив: ";
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Данные конуса номер " << i + 1 << " : \n";
		cout << cones[i] << endl;
		cout << "	S = " << cones2[i].area() << "\n";
		cout << "	V = " << cones2[i].volume() << "\n";
	}

	return 0;
}
