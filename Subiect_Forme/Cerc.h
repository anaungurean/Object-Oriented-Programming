#pragma once
#include "Forma.h"
class Cerc :
    public Forma
{
private:
    int x, y, raza;
public:
    void set(int x, int y, int raza);
    void Paint() override;
};

