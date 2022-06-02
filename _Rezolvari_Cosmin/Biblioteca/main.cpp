#include"Biblioteca.h"
#include<iostream>
int main()
{
	Biblioteca b;
	(b += new Roman("DON QUIJOTE", "MIGUEL DE CERVANTES")) += new Revista("Journal of Artificial Intelligence", 100);
	b += new Roman("MACBETH", "WILLIAM SHAKESPEARE");
	for (auto x : b)
	{
		std::cout << x->GetInfo() << std::endl;
	}
	/*for (auto x= b.begin(); x != b.end() ; ++b )
		x=*b;/
	std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;
	std::cout << "Lista doar cu romane:" << std::endl;
	b.PrintFilter([](Carte* c)->bool {
		// adaugati codul care determina daca o carte este un Roman
		auto *pRoman = dynamic_cast<Roman*> (c);
		if(pRoman != nullptr)
		//este de tip Roman
		return true;
		else
		{
		//nu este de tipul Roman
			return false;
			//return dynamic_cast<Roman*>(c) != nullptr ;
		}
		});*/
	return 0;
}