#pragma once
#include "Angajat.h"
class Programator :
    public Angajat
{

private:
    string cod;
public:
    void Lucreaza() override;
    void Add(string cod);
    Programator(string nume, int salariu, int id);
    string GetCode();
};

