#include <iostream>
#include "rational.h"

using namespace std;

int main()
{	

	int size;
	cout << "Ââåäèòå êîëè÷åñòâî äðîáåé "; cin >> size;
	cout << endl;
	rational* arr = new rational[size];
	int a, b;

	cout << "Ââîäèòü ÷èñëà íóæíî ñòðîãî ÷åðåç ïðîáåë";
	for (int i = 0; i < size; i++)
	{
		cout << "Ââåäèòå ÷èñëèòåëü è çíàìèíàòåëü äðîáè íîìåð " << i + 1 << " : "; cin >> a >> b;
		(arr[i]).set(a, b);
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Äðîáü íîìåð " << i + 1 << " : ";
		(arr[i]).show();
	}
	cout << endl;

	int i1, i2;

	cout << "Óêàæèòå äâå äðîáè, êîòîðûå âû õîòèòå ñëîæèòü: "; 
  cin >> i1 >> i2; 
  i1 = i1 - 1; 
  i2 = i2 - 1;
	cout << endl; 
  (arr[i1]).show(); 
  cout << " + "; 
  (arr[i2]).show(); 
  cout << " = ";
	((arr[i1]) + (arr[i2])).show();
	cout << endl;

	cout << "Óêàæèòå äâå äðîáè, îäíó èç êîòîðûõ âû õîòèòå âû÷åñòü èç äðóãîé: "; 
  cin >> i1 >> i2; 
  i1 = i1 - 1; 
  i2 = i2 - 1;
	cout << endl; 
  (arr[i1]).show(); 
  cout << " - "; 
  (arr[i2]).show(); 
  cout << " = ";
	((arr[i1]) - (arr[i2])).show();
	cout << endl;

	cout << "Óêàæèòå äðîáü, ê ÷èñëèòåëþ êîòîðîé âû õîòèòå ïðèáàâèòü åäèíèöó: "; 
  cin >> i1; 
  i1 = i1 - 1;
	cout << endl; 
  (arr[i1]).show(); 
  cout << "++";
  cout << " = ";
	rational xr = arr[i1];
	(++xr).show();
	cout << endl;

	cout << "Óêàæèòå äâå äðîáè, êîòîðûå âû õîòèòå ïðîâåðèòü íà ðàâåíñòâî: "; 
  cin >> i1 >> i2; 
  i1 = i1 - 1; 
  i2 = i2 - 1;
	cout << endl; 
  (arr[i1]).show(); 
  cout << " == "; 
  (arr[i2]).show();
	if (arr[i1] == arr[i2]) cout << "Äðîáè ðàâíû";
	else cout << "Äðîáè íå ðàâíû";
	cout << endl;

	cout << "Óêàæèòå äâå äðîáè, êîòîðûå âû õîòèòå ñðàâíèòü: "; 
  cin >> i1 >> i2; 
  i1 = i1 - 1; 
  i2 = i2 - 1;
	cout << endl; 
  (arr[i1]).show(); 
  cout << " > "; 
  (arr[i2]).show();
	if (arr[i1] > arr[i2]) cout << "Ïåðâàÿ äðîáü áîëüøå";
	else cout << "Âòîðàÿ äðîáü áîëüøå";
	cout << endl;

	delete[] arr;

	return 0;
}
