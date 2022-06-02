#pragma once
#include "Entry.h"

class IntegerData :
    public Entry
{private:
    int value;
public:
    IntegerData(string name, string value);
    void Add(string toAdd) override;
    bool Substract(int toSubstract)override;
    void Print() override;
};

