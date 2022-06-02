#include "HouseAdvertisment.h"
#include <iostream>
HouseAdvertisment::HouseAdvertisment(int surface, int price, int nrFloors)
{
	this->surface = surface;
	this->price = price;
	this->nrFloors = nrFloors;
}

void HouseAdvertisment::SetNrFloors(int nr)
{
	this->nrFloors = nr;
}

void HouseAdvertisment::PrintInfo()
{
	std::cout << "   House with " << this->nrFloors << " floors, with a surface of " << this->surface << " square meters that costs " << this->price << " dollars\n";
}
