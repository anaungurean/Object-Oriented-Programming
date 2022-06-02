#include "Decimal.h"
std::string Decimal ::GetFormatName()
{
	return "Decimal";
}
std::string Decimal::FormatNumber(int number)
{
	return std::to_string(number);
}