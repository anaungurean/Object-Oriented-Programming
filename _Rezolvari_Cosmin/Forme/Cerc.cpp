#include "Cerc.h"
void Cerc::set(int x, int y, int raza)
{
	this->raza = raza;
	this->x = x;
	this->y = y;
}
void Cerc::Paint()
{
	printf("cerc(%d,%d,%d)\n", this->x, this->y, this->raza);
}