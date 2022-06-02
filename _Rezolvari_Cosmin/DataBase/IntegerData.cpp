#include "IntegerData.h"
#include<iostream>
IntegerData::IntegerData(string name, string value): Entry(name) {
	//this->name = name;
	this->value = stoi(value);
}
void IntegerData::Add(string toAdd)
{
	int nr = stoi(toAdd);
	this->value += nr;
}
bool IntegerData::Substract(int toSubstract)
{
	this->value -= toSubstract;
	return true;
}
void IntegerData::Print()
{
	std::cout << this->name << " = " << this->value << " ; ";
}