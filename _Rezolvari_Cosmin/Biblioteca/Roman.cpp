#include "Roman.h"
Roman::Roman(string name, string autor) : nume(name), autor(autor) {
}
string Roman::GetInfo() {
	return "Roman" + this->nume + "de" + this->autor;
}