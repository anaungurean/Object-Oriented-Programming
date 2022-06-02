#pragma once
#include "SUV.h"
class RangeRover :
    public SUV
{
private: int consum;
public:
    void setConsum(int val);
    int getConsum() override;
    string getName() override;
};

