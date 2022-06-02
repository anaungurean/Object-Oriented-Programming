#include<iostream>
#include"ShoppingList.h"

int main()
{
	Food item1;
	item1.setName("meat"); item1.setQuantity(1.5f);
	Miscellaneous item2;
	item2.setName("servetele"); item2.setCount(3);
	Miscellaneous item3;
	item3.setName("servetele_2"); item3.setCount(3);
	ShoppingList L;
	//std::cout<<item1.getInfo();
	
		L.addItem(&item1);
		L.addItem(&item1);
		L.addItem(&item2);
		L.addItem(&item1);
		L.addItem(&item3);
		L.addItem(&item2);
	
	L.printList();
	return 0;
}