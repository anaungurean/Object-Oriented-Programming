#pragma once
#include "Printer.h"
class Hexazecimal :
    public Printer
{
public:
    string GetFormatName() override;
    string FormatNumber(int number) override;

};

