#pragma once
#include "Masina.h"
class Dacia :
    public Masina
{
private:
    string color;
public:
    Dacia(string cul);
    string GetColor() override;
    string GetName() override;
};

