#pragma once
#include "MasinaOras.h"
class Dacia :
    public MasinaOras
{
private:
    int capacitate;
    string culoare;
public:
    void setCapacitate(int number);
    void setCuloare(string culoare);
    string getName() override;
    int getCapacitate() override;
    string getCuloare() override;

};

