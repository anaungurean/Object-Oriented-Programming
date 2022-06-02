#pragma once
#include "Masina.h"
class SUV :
    public Masina
{public:
    virtual string getName() = 0 ;
    virtual int getConsum() = 0;
};

