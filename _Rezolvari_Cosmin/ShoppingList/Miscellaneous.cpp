#include "Miscellaneous.h"
string Miscellaneous::getInfo()
{
	return this->name + " : " + to_string(this->count )+ " items";
}
void Miscellaneous::setCount(int count) {
	this->count = count;
}

