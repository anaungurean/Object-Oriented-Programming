#include "Database.h"
#include <iostream>
Database::Database()
{

}

Database::~Database()
{
    for (int i = 0; i < intrari.size(); i++)
        delete this->intrari[i];
}

Database:: Iterator Database::begin()
{
    return Iterator(0,this);
}
Database :: Iterator Database::end()
{
    return Iterator(this->intrari.size(),this);
}
Database& Database::operator+=(Entry* e)
{
    intrari.push_back(e);
    return *this;
 }

Database& Database::operator-=(string info)
{
    for (int i = 0; i < intrari.size(); i++)
    {
        if (intrari[i]->GetName() == info)
        {
            intrari.erase(intrari.begin() + i );
        }
   }

    return *this;
}

void Database::Print()
{
    for (int i = 0; i < intrari.size(); i++)
    {
        intrari[i]->Print();
    }
    cout << endl;
}

Database::Iterator::Iterator(int index, Database* pDatabase)
{
    this->index = index;
    this->pDatabase = pDatabase;

}

bool Database::Iterator::operator!=(Iterator const& otherIterator)
{
    return this->index != otherIterator.index;
}

Entry* Database::Iterator::operator*() const
{
    return this->pDatabase->intrari[this->index];
}

Database::Iterator& Database:: Iterator::operator++()
{
    ++this->index;
    return *this;

}
