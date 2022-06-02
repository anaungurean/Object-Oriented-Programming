#include "ShoppingList.h"
void ShoppingList::addItem(Item* it)
{ //caz in care folosim Item **vector;
	/*try
	{
		if (this->nr_items == 0)
			this->vector = new Item * [100];
		if (this->nr_items == 100)
		{
			throw runtime_error("\n ~ ! Exceptie : Ati atins limita maxima de items in lista ! ~ \n");
		}


		//auto* ptr = dynamic_cast<Food*>(it);
		//if (ptr == nullptr)
		//{//std::cout << "Este servetel ";
		//	this->vector[this->nr_items] = new Miscellaneous;
		//}
		//else
		//{//std::cout << "Este food ";
		//	this->vector[this->nr_items] = new Food;
		//}

		this->vector[this->nr_items] = it;
	this->nr_items++;
	}
	catch (exception& e)
	{
		cout<<e.what();
	}
	*/
	vector.push_back(it);
}
void ShoppingList::printList()
{
	 //caz in care folosim Item **vector;
	/*for (int i = 0; i<this->nr_items - 1; ++i)
	{
		std::cout << this->vector[i]->getInfo() << " ; ";
	}
	std::cout << this->vector[this->nr_items-1]->getInfo() << "\n";
	*/
	for (auto i = vector.begin(); i != vector.end(); ++i)
	{
		cout << (*i)->getInfo() << "; ";
	}
	cout << "\n";
}