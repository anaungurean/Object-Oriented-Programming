#include "Dreptunghi.h"


void Dreptunghi::set(int x, int y, int lungime, int latime) {

	this->x = x;
	this->y = y;
	this->lungime = lungime;
	this->latime = latime;
}
void Dreptunghi::Paint()
{
	printf("dreptunghi(%d,%d,%d,%d)\n", this->x, this->y, this->lungime, this->latime);
}