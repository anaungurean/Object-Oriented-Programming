#pragma once
#include "Suv.h"
class RangeRover :
    public Suv
{
private:
    int consum;
public:
    void setConsum(int);
    int getConsum() override;
    string getName() override;
};

