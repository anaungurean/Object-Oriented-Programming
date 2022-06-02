#include "DreptunghiRotit.h"
#include <iostream>
void DreptunghiRotit::set(int x, int y, int lungime, int latime, int unghi)
{
	this->x = x;
	this->y = y;
	this->lungime = lungime;
	this->latime = latime;
	this->unghi = unghi;
	 

}

void DreptunghiRotit::Paint()
{
	std::cout << "dretunghi(" << this->x << "," << this->y << "," << this->lungime << "," << this->latime << ") rotit la "<<this->unghi<<" de grade \n";

}
