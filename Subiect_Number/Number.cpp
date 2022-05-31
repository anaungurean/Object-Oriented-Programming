#include "Number.h"
#include <iostream>
#include <stdexcept>

Number::Number(int value)
{
	this->number = value;
	this->count = 0;
	
}

Number::operator int()
{
	return this->number;
}

Number Number::operator+(Number n)
{
	return Number(this->number + n.number);

 }

Number Number::operator-(Number n)
{
	return Number(this->number - n.number);
}

Number Number::operator*(Number n)
{
	return Number(this->number * n.number);
}

Number Number::operator/(Number n)
{
	return Number(this->number / n.number);
}

Number & Number::operator+=(Printer* prnt)
{
	if (this->count == 100)
	{
		throw std::runtime_error("No more space");
	}
	this->printers[this->count] = prnt;
	this->count++;
	return *this; //referinta la obiect

}

void Number::Print()
{
	for (int i = 0; i < this->count; i++)
	{
		string format = printers[i]->GetFormatName();
		string name = printers[i]->FormatNumber(this->number);;
		std::cout << "Format: " << format << " Value: " << name << '\n';

	}
}
 

 
