#pragma once
#include "Forma.h"
#include <vector>
 
class Forme  : public Forma  
{
    std::vector<Forma*>list;
public:
    void Add(Forma* f);
    void Paint() override;
};

