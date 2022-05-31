#pragma once
#include "Printer.h"
class Decimal :
    public Printer
{
public:
    string GetFormatName() override;
    string FormatNumber(int number) override;
};

