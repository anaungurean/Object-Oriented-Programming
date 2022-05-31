#include "Opel.h"

void Opel::setCapacitate(int number)
{
	this->capacitate = number;
}

void Opel::setCuloare(string culoare)
{
	this->culoare = culoare;
}

void Opel::setAnFabricatie(int an)
{
	this->anFabricatie = an;
}

int Opel::getAnFabricatie()
{
	return this->anFabricatie;
}

string Opel::getName()
{
	return "Opel";
}

int Opel::getCapacitate()
{
	return this->capacitate;
}

string Opel::getCuloare()
{
	return this->culoare;
}
