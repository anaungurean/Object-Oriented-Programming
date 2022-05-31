#pragma once
#include "MasinaOras.h"
class Opel :
    public MasinaOras
{
private:
    int capacitate;
    string culoare;
    int anFabricatie;
public:
    void setCapacitate(int number);
    void setCuloare(string culoare);
    void setAnFabricatie(int an);
    int getAnFabricatie();
    string getName() override;
    int getCapacitate() override;
    string getCuloare() override;
};

