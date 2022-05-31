#pragma once
#include <string>
#include "Carte.h"
using namespace std;

class Roman:public Carte
{
private:
	string nume;
	string autor;
public:
	Roman(string nume, string autor);
	string GetInfo() override;
};

