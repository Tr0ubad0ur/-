#include <iostream>
#include <cmath>

using namespace std;

class cone
{
	private:
		const double PI = 3.141592;
		double x, y, z;
		double R;
		double H;
	public:
		cone()
		{
			x = 0;
			y = 0;
			z = 0;
			R = 0;
			H = 0;
		}
		cone(double r, double h)
		{
			x = 0;
			y = 0;
			z = 0;
			R = r;
			H = h;
		}
		cone(double X, double Y, double Z, double r, double h)
		{
			x = X;
			y = Y;
			z = Z;
			R = r;
			H = h;
		}

		void setCoord(double X, double Y, double Z);
		void setRad(double r);
		void setHeight(double h);
		void getCoord(double& X, double& Y, double& Z);
		double getRad();
		double getHeight();

		double area();
		double volume();

		friend ostream& operator<<(ostream& stream, cone obj);
};
