#pragma once
#include<string>

using namespace std;
class Entry
{protected:
	string name;
public:
	Entry(string name);
	string GetName();
	virtual void Add(string toAdd) = 0;
	virtual bool Substract(int toSubstract) = 0;
	virtual void Print() = 0;

};

