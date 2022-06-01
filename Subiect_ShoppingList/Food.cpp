#include "Food.h"
#include <string>
 
using namespace std;

void Food::setQuantity(float quantity)
{  
	this->quantity = quantity;
}

string Food::getInfo()
{
	
	return getName() + ":" + to_string(this->quantity) + "kg; ";
}
