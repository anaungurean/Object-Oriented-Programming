#pragma once
#include "Advertisment.h"
class ApartmentAdvertisment :
    public Advertisment
{
private:
    int atLevel;
public:
    ApartmentAdvertisment(int surface, int price, int atLevel);
    void SetLevel (int lvl);
    void PrintInfo() override;
};

