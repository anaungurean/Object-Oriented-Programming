#pragma once
#include "Carte.h"
class Revista :public Carte
{
private: string titlu;
       int nrArticole;
public:
    Revista(string nume, int nrArticole);
    string GetInfo() override;
};

