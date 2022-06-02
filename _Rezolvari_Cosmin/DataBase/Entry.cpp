#include "Entry.h"
Entry::Entry(string name) {
	this->name = name;
}
string Entry::GetName() {
	return this->name;
}
