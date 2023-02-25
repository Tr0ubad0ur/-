#include <iostream>
#include "circle.h"

using namespace std;

int main()
{

	circle A(0, 0, 0);
	circle B(0, 0, 0);
	circle C(0, 0, 0);

	float x1, y1, r1;

	cout << "x, y и радиус окружности A\n";
	cin >> x1 >> y1 >> r1;
	A.set_circle(x1, y1, r1);

	cout << "x, y и радиус окружности B\n";
	cin >> x1 >> y1 >> r1;
	B.set_circle(x1, y1, r1);

	cout << "x, y и радиус окружности C\n";
	cin >> x1 >> y1 >> r1;
	C.set_circle(x1, y1, r1);


	cout << "Площадь окружности A - " << A.square();
	cout << "Площадь окружности B - " << B.square();
	cout << "Площадь окружности C - " << C.square();

	float R, X, Y;

	A.get_circle(R, X, Y);
	if (B.check_circle(R, X, Y)){
    cout << "Окружность A и B пересекаются\n";
  }
  else{
    cout << "Окружность A и B не пересекаются\n";
  }
  
	B.get_circle(R, X, Y);
	if (C.check_circle(R, X, Y)){ 
    cout << "Окружность B и C пересекаются\n";
  }
	else{
    cout << "Окружность B и C не пересекаются\n";
  }
  
	C.get_circle(R, X, Y);
	if (A.check_circle(R, X, Y)){ 
    cout << "Окружность A и C пересекаются\n";
  }
	else{ 
    cout << "Окружность A и C не пересекаются\n";
  }
  
	float a, b, c;

	cout << "Введите треугольник (a,b,c)\n";
	cin >> a >> b >> c;

	if (A.triangle_around(a, b, c)){ 
    cout << "Окружность A можно вписать треугольник\n";
  }
	else{ 
    cout << "Окружность A нельзя вписать треугольник\n";
  }
	if (B.triangle_around(a, b, c)){ 
    cout << "Окружность B можно вписать треугольник\n";
  }
	else{ 
    cout << "Окружность B нельзя вписать треугольник\n";
  }
	if (C.triangle_around(a, b, c)){ 
    cout << "Окружность C можно вписать треугольник\n";
  }
	else{ 
    cout << "Окружность C нельзя вписать треугольник\n";
  }
	if (A.triangle_in(a, b, c)){ 
    cout << "В окружность A можно вписать треугольник\n";
  }
	else{ 
    cout << "В окружность A нельзя вписать треугольник\n";
  }
	if (B.triangle_in(a, b, c)){ 
    cout << "В окружность B можно вписать треугольник\n";
  }
	else{ 
    cout << "В окружность B нельзя вписать треугольник\n";
  }
	if (C.triangle_in(a, b, c)){ 
    cout << "В окружность C можно вписать треугольник\n";
  }
	else{
    cout << "В окружность C нельзя вписать треугольник\n";
  }
	return 0;
}
