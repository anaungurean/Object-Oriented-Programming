#pragma once
#include"Carte.h"
#include"Roman.h"
#include"Revista.h"
#include<array>
#include<stdexcept>
#include<iostream>
class Biblioteca
{
private: int count; 
	   Carte* carti[100];
	  // array<Carte*, 100> carti;//sa ne fie mai usor la begin/end
public:
	class Iterator {

	private: int index;
		   Biblioteca* pBiblioteca;
	public:
		Iterator(int index, Biblioteca* pBiblioteca);
		bool operator != (Iterator const &otherIterator)const ;
		Carte* operator * () const;
		Iterator& operator ++ ();
	};
	Biblioteca();
	~Biblioteca();
	Biblioteca& operator += (Carte* c);
	//	array<Carte*,100>::iterator being() {
	//	return this->carti.begin();
	//}
	Iterator begin();
	Iterator  end();

	operator int() const;
	template<typename FilterFunc>
	void printFilter(FilterFunc fn);//scriem in header pt ca este un template
};

template<typename FilterFunc>
void Biblioteca::printFilter(FilterFunc fn)
{
	for (auto c : *this)//facem iteratii pe obicetul curent cu deferentiere
	{
		if (fn(c)) {
			std::cout << c->GetInfo()<<"\n";
		}
	}
}