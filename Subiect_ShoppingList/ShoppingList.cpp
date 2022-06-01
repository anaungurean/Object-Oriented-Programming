#include "ShoppingList.h"
#include "Item.h"
#include <iostream>
 

void ShoppingList::addItem(Item* i)
{
	this->list.push_back(i);
}

void ShoppingList::printList()
{
	for (auto e : list)
	{
		
		std::cout << e->getInfo();
   }

	 
}
