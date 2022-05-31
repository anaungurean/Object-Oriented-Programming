#pragma once
#include <string>
using namespace std;

class Printer
{
public:
	virtual string GetFormatName() = 0;
	virtual string FormatNumber(int number)=0;
};

