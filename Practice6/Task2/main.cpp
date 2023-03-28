#include <iostream>
#include "subcone.h"

using namespace std;

int main()
{
	
	int size;
	cout << "Введите кол-во усечённых конусов\n";
	cin >> size;

	subcone* C = new subcone[size];
	
	cout << endl;
	cout << "Введите усечённый конус в формате {x y z R H subH}\n";

	for (int i = 0; i < size; i++)
	{
		cout << "Введите данные усчённого конуса номер " << i + 1 << ": ";
		cin >> C[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << endl;
		cout << "Данные конуса номер " << i + 1 << ":\n";
		cout << C[i] << endl;
		cout << "S = " << C[i].area() << endl;
		cout << "V = " << C[i].volume() << endl;
	}

	return 0;
}
