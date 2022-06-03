#include "Manager.h"
#include <iostream>
using namespace std;
void Manager::Lucreaza()
{
	cout << "===============\n" << this->numeEchipa << "\n";

	for (auto a : this->echipa)
		a->Lucreaza();
	cout << "===============\n";
}

bool Manager::Angajeaza(Angajat* a)
{
	this->echipa.push_back(a);
	return true;
}

bool Manager::Concediaza(Angajat* a)
{
	for(int i=0;i<echipa.size(); i++)
		if(echipa[i]==a)
		    this->echipa.erase(echipa.begin()+i);

	return true;
}

Angajat& Manager::GetAngajat(int id)
{
	for (int i = 0; i < echipa.size(); i++)
		if (echipa[i]->GetId() == id)
			return *this;
	return *this;
}

Manager::Manager(string numeEchipa, string nume, int salariu, int id)
{
	this->numeEchipa = numeEchipa;
	this->nume = nume;
	this->salariu = salariu;
	this->id = id;
}
