#include "IntegerData.h"
#include <string>
#include <iostream>
using namespace std;

IntegerData::IntegerData(string name, string value)
{

	this->name = name;
	this->value = stoi(value);
}

void IntegerData::Add(string toAdd)
{
	this -> value += stoi(toAdd);

}

bool IntegerData::Substract(int toSubstract)
{
	if (toSubstract > value)
		return false;

	this->value -= toSubstract;
	
}

void IntegerData::Print()
{
	cout<< this->name <<" = "<<this->value<<" ; ";

}
