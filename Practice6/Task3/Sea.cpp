#include "Sea.h"

void Sea::addBay()
	{
	Bay* subarray = new Bay[Bays_count + 1];
	for (int i = 0; i < Bays_count; i++)
	{
		subarray[i] = Bays[i];
	}
	Bays_count++;
	Bays = subarray;
	}

void Sea::setName(string N)
{
	name = N;
}
void Sea::setDeep(float D)
{
	deep = D;
}
void Sea::setSize(float S)
{
	size = S;
}
