#include "Dreptunghi.h"
#include <iostream>
void Dreptunghi::set(int x, int y, int lungime, int latime)
{
	this->x = x;
	this->y = y;
	this->lungime = lungime;
	this->latime = latime;

}

void Dreptunghi::Paint()
{
	std::cout << "dretunghi(" << this->x << "," << this->y << "," << this->lungime << "," << this->latime << ")\n";
}
