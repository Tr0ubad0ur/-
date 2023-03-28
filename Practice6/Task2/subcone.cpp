#include <iostream>
#include "subcone.h"

using namespace std;

void subcone::setCoord(double X, double Y, double Z)
{
	x = X;
	y = Y;
	z = Z;
}
void subcone::setRad(double r)
{
	R = r;
}
void subcone::setHeight(double h, double subh)
{
	H = h;
	subH = subh;
}

void subcone::getCoord(double& X, double& Y, double& Z)
{
	X = x;
	Y = y;
	Z = z;
}
double subcone::getRad()
{
	return R;
}
double subcone::getHeight(double& h, double& subh)
{
	h = H;
	subh = subH;
	return 0;
}

double subcone::area()
{
	return (PI * R * (R + sqrt(H * H + R * R)) - PI * R * (R + sqrt((H - subH) * (H - subH) + R * R)));
}
double subcone::volume()
{
	return (PI * R * R * H / 3) - (PI * R * R * (H - subH) / 3);
}
