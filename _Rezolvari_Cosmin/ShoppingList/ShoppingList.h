#pragma once
#include"Item.h"
#include"Food.h"
#include"Miscellaneous.h"
#include<iostream >
#include<vector>
class ShoppingList
{
private:
	//Item** vector;
vector<Item*> vector;
	int nr_items=0;
public:
	void addItem(Item* it);
	void printList();
};

