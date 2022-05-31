#pragma once
#include "Masina.h"
class MasinaOras :
    public Masina
{
public:
    virtual int getCapacitate() = 0;
    virtual string getCuloare() = 0;
  
};

