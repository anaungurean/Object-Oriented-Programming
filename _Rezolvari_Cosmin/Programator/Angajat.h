//
// Created by sorod on 01/06/2022.
//

#ifndef CLION_ANGAJAT_H
#define CLION_ANGAJAT_H
#include<string>
#include<iostream>
using namespace std;
class Angajat {
protected:
    int id,salariu;
    std::string nume;
public:
    Angajat (string nume, int salariu, int id);
    string GetNume();
    int GetSalariu();
    bool SetSalariu(int Salariu);
    virtual void Lucreaza() = 0 ;
    int GetId() ;
};


#endif //CLION_ANGAJAT_H
