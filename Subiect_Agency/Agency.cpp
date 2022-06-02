#include "Agency.h"
#include <vector>
#include <iostream>
Agency::Agency(const char* name)
{
	this->name = name;
}

void Agency::AddAdvertisment(Advertisment* ad)
{
	list.push_back(ad);

}

void Agency::PrintOffers(int minSurface, int maxPrice)
{
	int ok = 0;
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i]->GetSurface() >= minSurface && list[i]->GetPrice() <= maxPrice)
		{
			if (ok == 0)
				std::cout << "Agency RealEstate found the following offers:\n";

			list[i]->PrintInfo();
			ok = 1;
		}

	}
	if (ok == 0)
	{
		std::cout << "Agency " << this->name << " could not find any offer for the criteria:\n";
		std::cout << "   -min surface =" << minSurface<<"\n";
		std::cout << "   -max price =" << maxPrice << "\n";
	}
}
