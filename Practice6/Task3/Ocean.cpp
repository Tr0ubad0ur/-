#include "Ocean.h"

void Ocean::addSea()
{
	Sea* subarray = new Sea[seas_count + 1];
	for (int i = 0; i < seas_count; i++)
	{
		subarray[i] = seas[i];
	}
	seas_count++;
	seas = subarray;
}

void Ocean::setName(string N)
{
	name = N;
}
void Ocean::setDeep(float D)
{
	deep = D;
}
void Ocean::setSize(float S)
{
	size = S;
}
