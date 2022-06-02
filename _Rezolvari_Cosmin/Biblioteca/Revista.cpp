#include "Revista.h"
Revista::Revista(string nume, int nr) : titlu(nume), nrArticole(nr){
}
string Revista::GetInfo()
{
	return "Roman " + this->titlu + "cu" + to_string(this->nrArticole) + "articole";
}