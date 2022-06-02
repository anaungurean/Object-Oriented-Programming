#include "Hexazecimal.h"
std::string Hexazecimal::GetFormatName()
{
	return "Hexazecimal";
}
std::string Hexazecimal::FormatNumber(int number)
{
	char buffer[100];
	sprintf_s(buffer, 100, "0x%08X",number);
	std::string a(buffer);
	return a;
	
}