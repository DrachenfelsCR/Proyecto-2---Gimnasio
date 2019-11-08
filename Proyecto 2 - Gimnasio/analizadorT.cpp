#include "analizadorT.h"

void analizadorT::cargarListaI(listI*list, string Archivo)
{
	string id, name, code;
	ifstream input;
	int auxCode = 0;
	input.open(Archivo.c_str());
	while (input.good())
	{
		getline(input, name,'\t');
		getline(input, id,'\t');
		getline(input, code,'\n');
		auxCode = convertirInt(code);
		if (!input.eof())
		{
			instructor* t1 = new instructor(name, id, nullptr,auxCode);
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

void analizadorT::cargarGrupo(listG* listaG, string archivo,associate* aso,instructor* ins,int code)
{
	ifstream finput;
	finput.open(archivo.c_str());
	int auxcode = 0;
	char auxroom = '#';
	int auxq = 0;
	int auxDay = 0;
	string classCode, quality,day,hour,className,room;
	while (finput.good())
	{
		getline(finput, className, '\t');
		getline(finput, classCode, '\t');
		getline(finput, room, '\t');
		getline(finput, quality, '\t');
		getline(finput, hour, '\t');
		getline(finput, day, '\n');
		auxcode = convertirInt(classCode);
		auxroom = convertirChar(room);
		auxq = convertirInt(quality);
		int auxDay = convertirInt(day);
		if (!finput.eof()) {
			
			
				groupClass* g = new groupClass(className,ins,auxcode,auxroom,auxq,hour,auxDay);
				listaG->insertFirst(g);
			
			
		}
	}
	
	finput.close();
	}



