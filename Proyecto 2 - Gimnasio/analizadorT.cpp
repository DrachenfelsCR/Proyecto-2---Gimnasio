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

void analizadorT::cargarListaA(listA* lisA, string archivo,int clcode)
{
	ifstream input;
	int phoneAux = 0;
	int clAux = 0;
	input.open(archivo.c_str());
	string email, registration, phone, classcode, name, id;
	while (input.good()) {
		getline(input, name, '\t');
		getline(input, id,'\t');
		getline(input, email, '\t');
		getline(input, phone, '\t');
		getline(input, registration, '\t');
		getline(input, classcode,'\n');
		phoneAux = convertirInt(phone);
		clAux = convertirInt(classcode);
		if (!input.eof())
			{
				associate* a1 = new associate(id, name, email, phoneAux, registration, NULL, NULL, NULL, clAux, NULL);
				lisA->insertFirst(a1);

			}
	}
	input.close();
}
