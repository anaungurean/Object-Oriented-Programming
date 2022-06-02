#include "Database.h"
Database& Database::operator += (Entry * e) {
	this->vec.push_back(e);
	return *this;
}
Database& Database::operator -= (string nume) {
	int nr = 0;
	for (auto a : this->vec)
	{
		
		if ((a)->GetName() == nume)
		{
			this->vec.erase(this->vec.begin() + nr);
		}
		nr++;
	}
	return *this;
}
vector<Entry*>::iterator Database::begin()
{
	return this->vec.begin();
}
vector<Entry*>::iterator Database::end()
{
	return this->vec.end();
}

void Database::Print()
{
	for (auto a : this->vec)
	{
		a->Print();
	}
	cout << "\n";
}