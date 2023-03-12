#include <iostream>
#include "rational.h"

using namespace std;

int main()
{	
	
	int size;
	cout << "Ââåäèòå êîëè÷åñòâî äðîáåé"; cin >> size;
	cout << endl;
	rational* arr = new rational[size];
	int a, b;

	cout << "Ââîäèòü ÷èñëà íóæíî ñòðîãî ÷åðåç ïðîáåë" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Ââåäèòå ÷èñëèòåëü è çíàìèíàòåëü äðîáè íîìåð" << i + 1 << " : "; cin >> a >> b;
		(arr[i]).set(a,b);
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Äðîáü íîìåð " << i + 1 << " : ";
		(arr[i]).show();
	}
	cout << endl;

	delete[] arr;

	return 0;
}
