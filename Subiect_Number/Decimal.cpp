#include "Decimal.h"

string Decimal::GetFormatName()
{
	return "Decimal";
}

string Decimal::FormatNumber(int number)
{
	return to_string(number);
}
