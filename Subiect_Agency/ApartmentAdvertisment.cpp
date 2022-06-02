#include "ApartmentAdvertisment.h"
#include <iostream>
ApartmentAdvertisment::ApartmentAdvertisment(int surface, int price, int atLevel)
{
	this->surface = surface;
	this->price = price;
	this->atLevel = atLevel;
}

void ApartmentAdvertisment::SetLevel(int lvl)
{
	this->atLevel = lvl;
}

void ApartmentAdvertisment::PrintInfo()
{
	std::cout << "   Apartment at " << this->atLevel << "-th level, with a surface of " << this->surface << " square meters that costs " << this->price << " dollars\n";

}
