#pragma once
#include "Entry.h"
class StringData :
    public Entry
{private:
    string value;
public:
    StringData(string name,string Value);
    void Add(string toAdd) override;
    bool Substract(int toSubstract) override;
    void Print()override;
};

