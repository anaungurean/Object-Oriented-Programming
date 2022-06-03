#pragma once
#include <string>
using namespace std;
class Angajat
{
protected:
	int salariu;
	string nume;
	int id;
public:
	string GetNume();
	int GetSalariu();
	bool SetSalariu(int salariu);
	int GetId();
	virtual void Lucreaza() = 0;
	Angajat(string nume, int salariu, int id);
	Angajat();
};

