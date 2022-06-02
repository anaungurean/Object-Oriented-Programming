#include"Database.h"
#include "StringData.h"
#include"IntegerData.h"
int main() {
	Database d;
	Entry* e2 = (Entry*)new IntegerData("NotaEngleza", "10");
	Entry* e1 = (Entry*)new StringData("Student", "Alexandru");
	/*e1->Substract(1);
	e1->Print();
	e2->Print();*/
	(d += e1) += (new StringData("Facultate", "FII"));
	(d += e2) += (new IntegerData("NotaPOO", "9"));
	d.Print();
	for (Entry* e : d) {
		e->Substract(5);
	}
	d.Print();
	
	d -= "NotaEngleza";
	d.Print();
	for (auto e : d) {
		e->Add("1");
	}
	d.Print();

	std::cout<< "\n\n\n";
	std::string aaa ("Buna ziuaa, numele meu esteeee ; )");
	aaa.erase(std::remove_if(aaa.begin(), aaa.end(), [](char ch) {
		string vocale ("AEIOUaeiou");
		return (vocale.find(ch) != std::string::npos);
		//cout << "->" << ch << "<-\n";
		return true;

		}), aaa.end());
	cout << aaa << "\n";
	return 0;
}
