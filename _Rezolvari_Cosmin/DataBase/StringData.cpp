#include "StringData.h"
#include<iostream>
StringData::StringData(string name,string value) : Entry(name), value(value)
{/*
	this->name = name;
	this->value = value;*/
}
void StringData::Add(string toAdd)
{
	this->value += toAdd;
}
bool StringData::Substract(int toSubstract)
{
	int l = this->value.size();
	if (l < toSubstract)
	{
		cout << "StringData: len(" << this->value << ") < " << toSubstract << "\n";
		return false;
	}
	this->value.erase(this->value.begin() + l - toSubstract, this->value.end());
	return true;
}
void StringData::Print()
{
	std::cout <<this->name << " = "<<this->value << ";";
}