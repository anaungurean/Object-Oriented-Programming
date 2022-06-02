#pragma once
class Advertisment
{
protected:
	int surface;
	int price;
public:
	void SetSurface(int s);
	int GetSurface();
	void SetPrice(int p);
	int GetPrice();
	virtual void PrintInfo() = 0;

};

