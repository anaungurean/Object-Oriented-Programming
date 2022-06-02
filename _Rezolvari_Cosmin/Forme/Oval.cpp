#include "Oval.h"
void Oval::set(int x, int y, int raza1, int raza2) {
	this->x = x;
	this->y = y;
	this->raza1 = raza1;
	this->raza2 = raza2;

}
void Oval::Paint() {
	printf("oval(%d,%d,%d,%d)\n", this->x, this->y, this->raza1, this->raza2);
}