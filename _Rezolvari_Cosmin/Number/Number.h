#pragma once
#include"Printer.h"
#include<array>
#include<iostream>
class Number
{
private:
	int number;
	int count;
	std::array<Printer*,100> vec;
public:
	Number(int value);
	operator int();
	
	Number operator + (Number& n1);
	Number operator - (Number& n1);
	Number operator * (Number& n1);
	Number operator / (Number& n1);

	std::array<Printer*,100>::iterator begin()
	{
		return this->vec.begin();
	}

	std::array<Printer*, 100>::iterator end()
	{
		return this->vec.end();
	}
	Number& operator += (Printer* prnt);

	void Print();
};

