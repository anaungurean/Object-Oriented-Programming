#include "Dacia.h"
void Dacia::setCapacitate(int val) {
	this->capacitate = val;

}
void Dacia::setCuloare(string cul) {
	this->culoare = cul;
}
string Dacia::getName() {
	return "Dacia";
}
string Dacia::getCuloare() {
	return this->culoare;
}
int Dacia::getCapacitate() {
	return this->capacitate;
}