#pragma once
#include "Forma.h"
class Dreptunghi :
    public Forma
{protected:
    int x, y, lungime, latime;
public:
    void set(int x, int y, int lungime, int latime);
    void Paint()override;
};

