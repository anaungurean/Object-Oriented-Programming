//
// Created by sorod on 01/06/2022.
//

#include "Manager.h"
Manager::Manager(string numeEchipa, string nume, int salariu, int id): Angajat(nume,salariu,id) , numeEchipa(numeEchipa) {

}
bool Manager::Angajeaza(Angajat*x) {
    this->echipa.push_back(x);
    return true;
}
bool Manager::Concediaza(Angajat*x) {
    int nr=0;
    for( auto a: this->echipa) {
        if (a == x)
        {
            this->echipa.erase(this->echipa.begin() + nr);
            return true;
        }
        nr++;
    }
    return false;
}
void Manager::Lucreaza() {
    cout<<"===============\n"<<this->numeEchipa<<"\n";

    for(auto a:this->echipa)
        a->Lucreaza();
    cout<<"===============\n";
}
Angajat* Manager::GetAngajat(int id) {
    for(auto a : this->echipa)
    {
        if(id==a->GetId())
            return a;
    }
}