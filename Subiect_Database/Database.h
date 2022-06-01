#pragma once
#include "Entry.h"
#include <vector>

class Database
{ 
private:
	vector <Entry*> intrari;
public:
	Database();
	~Database();

	class Iterator {

	private:
		int index;
		Database* pDatabase;
	public:
		Iterator(int index, Database* pDatabase);
		bool operator != (Iterator const&); //compara index
		Entry* operator* () const; // trebuie sa dea un obiect
		Iterator& operator++(); // mareste index
	};

	Iterator begin();
	Iterator end();

	Database& operator+=(Entry* e);
	Database& operator-=(string info);
	void Print();

};

