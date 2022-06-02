#include "DreptunghiRotit.h"

void DreptunghiRotit::set(int x, int y, int lungime, int latime, int unghi) {

	this->x = x;
	this->y = y;
	this->lungime = lungime;
	this->latime = latime;
	this->unghi = unghi;
}
void DreptunghiRotit::Paint()
{
	printf("dreptunghi(%d,%d,%d,%d) rotiti la %d de grade \n", this->x, this->y, this->lungime, this->latime, this->unghi);

}