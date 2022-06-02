#pragma once
#include"Entry.h"
#include<vector>
#include<iostream>
class Database
{private:
	vector<Entry*> vec;
public:
	Database& operator += (Entry* e1);
	Database& operator -= (string nume);
	vector<Entry*>::iterator begin();
	vector<Entry*>::iterator end();
	void Print();
};

