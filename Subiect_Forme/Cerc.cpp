#include "Cerc.h"
#include <iostream>
void Cerc::set(int x, int y, int raza)
{
	this->x = x;
	this->y = y;
	this->raza = raza;
}

void Cerc::Paint()
{
	std::cout << "cerc(" << this->x << "," << this->y << "," << this->raza << ")\n";
}
