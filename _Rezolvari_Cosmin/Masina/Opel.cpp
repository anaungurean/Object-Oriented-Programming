#include "Opel.h"

void Opel::setCapacitate(int val) {
	this->capacitate = val;
}
void Opel::setCuloare(string cul) {
	this->culoare = cul;
}
void Opel::setAnFabricatie(int an) {
	this->anFabricatie = an;
}
int Opel::getAnFabricatie() {
	return this->anFabricatie;
}

string Opel::getName() {
	return "Opel";
}
string Opel::getCuloare() {
	return this->culoare;
}
int Opel::getCapacitate() {
	return this->capacitate;
}