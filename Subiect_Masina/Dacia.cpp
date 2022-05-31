#include "Dacia.h"

void Dacia::setCapacitate(int number)
{
	this->capacitate = number;

}

void Dacia::setCuloare(string culoare)
{
	this->culoare = culoare;
}

string Dacia::getName()
{
	return "Dacia";
}
int Dacia::getCapacitate()
{
	return this->capacitate;
}

string Dacia::getCuloare()
{
	return this->culoare;
}