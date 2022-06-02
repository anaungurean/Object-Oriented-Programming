#include "Forme.h"

void Forme::Add(Forma* f1) {
	this->vector.push_back(f1);
}
void Forme::Paint()
{
	for (auto it : this->vector)
	{
		it->Paint();
	}
}