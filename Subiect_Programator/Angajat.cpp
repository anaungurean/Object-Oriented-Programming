#include "Angajat.h"

string Angajat::GetNume()
{
    return this->nume;
}

int Angajat::GetSalariu()
{
    return this->salariu;
}

bool Angajat::SetSalariu(int salariu)
{
    this->salariu = salariu;
    return true;
}

int Angajat::GetId()
{
    return this->id;
}

Angajat::Angajat(string nume, int salariu, int id)
{
    this->nume = nume;
    this->salariu = salariu;
    this->id = id;
}

Angajat::Angajat()
{
}
