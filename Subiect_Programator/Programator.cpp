#include "Programator.h"
#include <iostream>
void Programator::Lucreaza()
{

    std::cout <<"[" << this->nume << "]\n" << this->cod;
}

void Programator::Add(string cod)
{
    this->cod.append(cod);
}

Programator::Programator(string nume, int salariu, int id)
{
    this->nume = nume;
    this->salariu = salariu;
    this->id = id;
}

string Programator::GetCode()
{
    return this->cod;
}
