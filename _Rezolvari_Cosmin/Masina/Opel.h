#pragma once
#include "MasinaOras.h"
class Opel :
    public MasinaOras
{private:
    int capacitate, anFabricatie;
    string culoare;
public:
    void setCapacitate(int val);
    void setCuloare(string cul);
    void setAnFabricatie(int an);
    int getAnFabricatie();

    string getName() override;
    string getCuloare() override;
    int getCapacitate() override;
};

