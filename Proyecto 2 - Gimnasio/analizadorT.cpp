#include "analizadorT.h"

void analizadorT::cargarListaI(listI*list, string Archivo)
{
	string id, name;
	ifstream input;
	input.open(Archivo.c_str());
	while (input.good())
	{
		getline(input, name,'\t');
		getline(input, id,'\n');
		if (!input.eof())
		{
			instructor* t1 = new instructor(name, id, nullptr);
			list->insertLast(t1);
	
		}
		
			
		
			
	}
	input.close();
}
