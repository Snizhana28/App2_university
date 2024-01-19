#include "Alcohol.h"

int main()
{
	Liquid water("Water", 1.0);
	Alcohol beer("Beer", 1.01, 5.0);

	water.print();
	beer.print();

	water.setDensity(0.9);
	water.print();

	beer.setStrength(4.5);
	beer.print();

	return 0;
}
