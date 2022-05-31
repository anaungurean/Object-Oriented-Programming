#pragma once
#include <string>
#include "Carte.h"
using namespace std;

class Revista :public Carte
{
private:
	string titlu;
	int nrArticole;
public:
	Revista(string titlu, int nrArticole);
	string GetInfo() override;
};



