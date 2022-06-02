#include "Forme.h"
#include "Forma.h"
#include <vector>

void Forme::Add(Forma* f)
{
	this->list.push_back(f);
}

void Forme::Paint()
{
	for (int i = 0; i < list.size(); i++)
		list[i]->Paint();
}
