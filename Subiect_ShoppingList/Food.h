#pragma once
#include "Item.h"
class Food : public Item
{
private:
	float quantity;
public:

	void setQuantity(float quantity);
	string getInfo() override;

};

