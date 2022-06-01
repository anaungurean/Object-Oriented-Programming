#include "StringData.h"
#include <string>
#include <iostream>
using namespace std;

StringData::StringData(string name, string value)
{
    this->name = name;
    this->value = value;
}

void StringData::Add(string toAdd)
{
    this->value = this->value + toAdd;
  
}

bool StringData::Substract(int toSubstract)
{
    if (this->value.length() < toSubstract)
    {
        cout << "StringData: len(" << this->value << ") < " << toSubstract << endl;
        return false;
    }
    else
    {
        this->value.erase(this->value.size() - toSubstract, toSubstract);
     
    }
}

void StringData::Print()
{
    cout<<this->name <<" = "<<this->value<<";";
}
