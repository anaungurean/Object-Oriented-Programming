#pragma once
#include "Advertisment.h"
#include <vector>

class Agency
{ private:
	const char* name;
	std::vector<Advertisment*> list;
public:
	Agency(const char* name);
	void AddAdvertisment(Advertisment*);
	void PrintOffers(int minSurface, int maxPrice);
};

