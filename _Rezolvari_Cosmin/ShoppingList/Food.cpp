#include "Food.h"
string Food::getInfo()
{
	return this->name + " : " + to_string( this->quantity )+ " kg";
}
void Food::setQuantity(float quantity) {
	this->quantity = quantity;
}