#pragma once
#include<string>
using namespace std;
class Item
{protected:
	string name;
public:
	string getName();
	void setName(string name);
	virtual string getInfo() = 0;

};

