#include <iostream>
#include "Biblioteca.h"
#include "Carte.h"
#include "Roman.h"
#include "Revista.h"

int main()
{
// +=
// constructor
// destructor : Biblioteca -> detine obiecte alocate dinamic
// iterator
// new, delete, new[], delete[] -> C++
// malloc, realloc, calloc, free -> C

	Biblioteca b;
	(b += new Roman("DON QUIJOTE", "MIGUEL DE CERVANTES")) += new Revista("Journal of Artificial Intelligence", 100);
	b += new Roman("MACBETH", "WILLIAM SHAKESPEARE");
	for (auto x : b)
	{
		std::cout << x->GetInfo() << std::endl;
	}

	/*for (auto it = b.begin(); it != b.end(); ++it)
	{
		auto x * = *it;
		std::cout << x->GetInfo() << std::endl;

	}
	*/

	std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;
	std::cout << "Lista doar cu romane:" << std::endl;
	b.PrintFilter([](Carte* c)->bool 
		{
		// adaugati codul care determina daca o carte este un Roman
			return dynamic_cast  <Roman*> (c) != nullptr;

		/*auto* pRoman = dynamic_cast < Roman* > { c };
		if (pRoman != nullptr)
			//e roman
			return true;
		else
			return false;
			// nu e roman*/ 

		});
	 

	return 0;
}