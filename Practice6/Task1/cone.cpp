#include "cone.h"

void cone::setCoord(double X, double Y, double Z)
{
	x = X;
	y = Y;
	z = Z;
}
void cone::setRad(double r)
{
	R = r;
}
void cone::setHeight(double h)
{
	H = h;
}
void cone::getCoord(double& X, double& Y, double& Z)
{
	X = x;
	Y = y;
	Z = z;
}
double cone::getRad()
{
	return R;
}
double cone::getHeight()
{
	return H;
}

double cone::area()
{
	return PI * R * (R + sqrt(H * H + R * R));
}
double cone::volume()
{
	return PI * R * R * H / 3;
}
