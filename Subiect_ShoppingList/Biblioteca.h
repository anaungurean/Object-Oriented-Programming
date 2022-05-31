#pragma once
#include "Carte.h"
#include <array>
#include <iostream>
// std :: vector -> vector redimisional
// std ::  array -> vector marime fizica ( echivalent v[100])
// std :: array -> este iterabil

class Biblioteca {
private:
	int count;
	Carte* carti[100]; //obiect 
	//std :: array < Carte *, 100> carti;

public:

	class Iterator {
	private:
		int index; //va merge pe un array 
		Biblioteca* pBiblioteca;

	public:
		Iterator(int index, Biblioteca* pBiblioteca);
		bool operator != (Iterator const&); //compara index
		Carte* operator * () const; //trebuie sa dea un obiect
		Iterator& operator ++ (); //mareste index
	};



	Biblioteca();
	~Biblioteca();

	Iterator begin();
	Iterator end();

	Biblioteca& operator += (Carte* c);

	//pt varianta cu std :: array
	/*
	   array < Carte *,100 > :: iterator begin()
	   {
	   return this->carti.begin();
	   }
		 array < Carte *,100 > :: iterator end()
	   {
	   return this->carti.end();
	   }
	*/

	operator int() const;
	template <typename FilterFunc>
	void PrintFilter(FilterFunc fn);
};

template < typename FilterFunc >
void Biblioteca::PrintFilter(FilterFunc fn)
{
	for (auto c: *this)
	{
		if (fn(c))
		{
			cout << c->GetInfo() << '\n';
		}
	}
}