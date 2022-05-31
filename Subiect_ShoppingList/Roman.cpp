#include "Roman.h"

Roman::Roman(string nume, string autor)
{
	this->nume = nume;
	this->autor = autor;
}

string Roman::GetInfo()
{
	return "Roman " + this->nume + " de " + this->autor;
}
