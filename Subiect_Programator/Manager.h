#pragma once
#include "Angajat.h"
#include <vector>

class Manager :
    public Angajat
{
private:
    vector <Angajat *> echipa;
    string numeEchipa;
public:
    void Lucreaza() override;
    bool Angajeaza(Angajat*);
    bool Concediaza(Angajat*);
    Angajat& GetAngajat(int id);
    Manager(string numeEchipa, string nume, int salariu, int id);
};

