//
// Created by sorod on 01/06/2022.
//

#ifndef CLION_MANAGER_H
#define CLION_MANAGER_H
#include "Angajat.h"
#include<vector>
class Manager :public Angajat {
private:
    vector<Angajat*> echipa;
    string numeEchipa;
public:
    Manager(string numeEchipa,string nume,int salariu,int id);
    void Lucreaza() override;
    bool Angajeaza(Angajat* x);
    bool Concediaza (Angajat* x);
    Angajat* GetAngajat(int id);
};


#endif //CLION_MANAGER_H
