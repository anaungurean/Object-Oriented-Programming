//
// Created by sorod on 01/06/2022.
//

#include "Programator.h"
Programator::Programator(string nume, int salariu, int id): Angajat(nume,salariu,id) {
}

void Programator::Add(string cod) {
    this->cod=this->cod+cod;
}
string Programator::GetCode() {
    return this->cod;
}
void Programator::Lucreaza() {
    cout<<"["<<this->GetNume()<<"]"<<"\n";
    cout<<this->cod;
}