#include "Revista.h"

Revista::Revista(string titlu, int nrArticole) :
	titlu(titlu),
	nrArticole(nrArticole){
}

string Revista::GetInfo()
{
	return "Revista " + this->titlu + " cu" + to_string(this->nrArticole) + " articole";
}
