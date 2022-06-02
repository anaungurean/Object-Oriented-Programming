#pragma once
#include "Carte.h"
class Roman :
    public Carte
{
private: string nume;
       string autor;
public:
    Roman(string nume, string autor);
    string GetInfo() override;
};

