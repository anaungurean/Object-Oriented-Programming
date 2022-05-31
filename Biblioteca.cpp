#include "Biblioteca.h"
#include <stdexcept>

Biblioteca::Biblioteca()
{
	this->count = 0;
}

Biblioteca::~Biblioteca()
{
	for (int i = 0; i < this->count; i++) {
		delete this->carti[i];
	}

}

Biblioteca & Biblioteca :: operator+= (Carte* c)
{
	if (this->count >= 100)
	{ 
		// daca nu vrem throw
		// delete c
		// return * this
		throw std::runtime_error("Prea multe carti in biblioteca");
	}
	this->carti[this->count] = c;
	this->count++;
	return *this; //referinta la obiect
}

Biblioteca::operator int() const
{
	return this->count;
}

Biblioteca::Iterator Biblioteca::begin()
{
	return Iterator(0, this);

 }

Biblioteca::Iterator Biblioteca::end ()
{
	return Iterator(this->count, this);

}

Biblioteca::Iterator::Iterator(int index, Biblioteca* pBiblioteca)
	:index(index), pBiblioteca(pBiblioteca) {
}

bool Biblioteca::Iterator::operator!=(Iterator const& otherIterator)
{
	return this->index != otherIterator.index;
}

Carte* Biblioteca::Iterator::operator*() const
{
	return this->pBiblioteca->carti[this->index];

}

Biblioteca :: Iterator& Biblioteca::Iterator::operator++()
{
	++ this->index;
	return *this;
}


