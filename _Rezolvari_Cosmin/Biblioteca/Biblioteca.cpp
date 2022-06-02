#include "Biblioteca.h"

Biblioteca& Biblioteca::operator+=(Carte* c)
{
    if (this->count >= 100) {
        throw runtime_error("Nr maxim este de 100");
    }
    this->carti[this->count] = c;
    this->count++;
    return *this;
}
Biblioteca::Biblioteca()
{
    this->count = 0;

}
Biblioteca::~Biblioteca()
{
    this->count = 0;
    for (int i = 0; i < this->count; ++i)
    {
        delete this->carti[i];
    }

}
Biblioteca::Iterator::Iterator(int index, Biblioteca* pBiblioteca):index(index),pBiblioteca(pBiblioteca){

}
Biblioteca::Iterator Biblioteca::begin() {
    return Iterator(0, this);
}
Biblioteca::Iterator Biblioteca::end() {
    return Iterator(this->count, this);
}

bool Biblioteca::Iterator::operator != (Biblioteca::Iterator const & otherIterator) const
{
    return this->index != otherIterator.index;
}

Carte* Biblioteca::Iterator::operator * ()const {
    return this->pBiblioteca->carti[this->index];
}
Biblioteca::Iterator& Biblioteca::Iterator::operator++()
{
    this->index++;
    return *this;
}
Biblioteca:: operator int() const {
    return this->count;
}