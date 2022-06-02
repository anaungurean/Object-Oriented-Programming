#include "Number.h"
#include<stdio.h>
#include<string>
Number::Number(int value) : number(value),count(0) {
}
Number::operator int (){
	return this->number;
}
Number Number::operator + (Number& n1)
{
	Number ret(this->number + (int)n1);
	return ret;
}
Number Number::operator - (Number& n1)
{
	Number ret(this->number - (int)n1);
	return ret;
}
Number Number::operator * (Number& n1)
{
	Number ret(this->number * (int)n1);
	return ret;
}
Number Number::operator / (Number& n1)
{
	Number ret(this->number / (int)n1);
	return ret;
}

Number& Number::operator += (Printer* prnt) {
	this->vec[this->count]=prnt;
	this->count++;
	return *this;
}
void Number::Print() {

	//for (int i = 0; i < this->count; ++i)
	//	std::cout << "Format: " << this->vec[i]->GetFormatName() << " Value: " << this->vec[i]->FormatNumber(this->number)<<"\n";
	for (auto it : *this)
	{
		std::cout << "Format: " << it->GetFormatName() << " Value: " << it->FormatNumber(this->number)<<"\n";
	}
}