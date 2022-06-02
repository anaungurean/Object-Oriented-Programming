#pragma once
#include"Masina.h"
#include<vector>
class Parcare
{
private:
	int maxi;
	vector<Masina*> vec;
public:
	void Create(int maxCapacity);
	bool Add(Masina* m1);
	bool RemoveByName(string name);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(string color);
};

