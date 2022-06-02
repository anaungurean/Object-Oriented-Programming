//
// Created by sorod on 01/06/2022.
//

#include "Angajat.h"

Angajat::Angajat(string nume, int salariu, int id):nume(nume),id(id),salariu(salariu) {

}
string Angajat::GetNume() {
    return this->nume;
}
int  Angajat::GetSalariu() {
    return this->salariu;
}
bool Angajat::SetSalariu(int Salariu) {
    this->salariu=salariu;
    return true;
}
int Angajat::GetId() {
    return this->id;
}