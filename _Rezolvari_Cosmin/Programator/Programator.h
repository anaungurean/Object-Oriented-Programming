//
// Created by sorod on 01/06/2022.
//

#ifndef CLION_PROGRAMATOR_H
#define CLION_PROGRAMATOR_H

#include "Angajat.h"
class Programator: public Angajat {
private: string cod;
public:
    Programator(string nume,int salariu,int id);
    void Lucreaza() override;
    void Add(string cod);
    string GetCode();


};


#endif //CLION_PROGRAMATOR_H
