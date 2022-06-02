#pragma once
#include "MasinaOras.h"
class Dacia :
    public MasinaOras
{private:
int capacitate;
string culoare;
public:
    void setCapacitate(int val);
    void setCuloare(string cul);

    string getName()override;
    string getCuloare() override;
    int getCapacitate() override;
};

