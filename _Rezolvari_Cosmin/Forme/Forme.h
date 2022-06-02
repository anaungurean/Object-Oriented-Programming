#pragma once
#include "Forma.h"
#include<vector>
class Forme :
    public Forma
{
private:
    std::vector<Forma*> vector;
public:
    void Add(Forma* f1);
    void Paint() override;
};

