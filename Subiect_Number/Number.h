#pragma once
#include "Printer.h"
class Number
{
private:
	int number;
	int count;
	Printer* printers[100];
public:
	Number(int value);
	operator int();
	Number operator +(Number n);
	Number operator -(Number n);
	Number operator *(Number n);
	Number operator /(Number n);
	Number& operator+= (Printer* prnt);
	void Print();

};
 

