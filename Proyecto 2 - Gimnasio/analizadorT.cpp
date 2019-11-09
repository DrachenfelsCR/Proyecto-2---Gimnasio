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
			cargarGrupo(nullptr,"",nullptr,t1);
			
		}
		
			
		
			
	}
	input.close();
}

instructor* analizadorT::cargarInstructor(string Archivo, int cclode)
{
	string id, name, code;
	ifstream input;
	int auxCode = 0;
	input.open(Archivo.c_str());
	while (input.good())
	{
		getline(input, name, '\t');
		getline(input, id, '\t');
		getline(input, code, '\n');
		auxCode = convertirInt(code);
		if (!input.eof())
		{
			if (auxCode == cclode) {
				instructor* t1 = new instructor(name, id, nullptr, auxCode);
				return t1;
			}
		}
		else
		{
			input.close();
		}
	}
	input.close();
}

void analizadorT::cargarListaA(listA* lisA, string archivo,int clcode,associate* aso)
{
	ifstream input;
	int phoneAux = 0;
	int clAux = 0;
	input.open(archivo.c_str());
	string email, registration, phone, classcod, name, id;
	while (input.good()) {
		getline(input, id, '\t');
		getline(input, name,'\t');
		getline(input, email, '\t');
		getline(input, phone, '\t');
		getline(input, registration, '\t');
		getline(input, classcod,'\n');
		phoneAux = convertirInt(phone);
		clAux = convertirInt(classcod);
		if (!input.eof())
			{
			//aso->getClassCode()
			if(clcode == clAux ){
				associate* a1 = new associate(id, name, email, phoneAux, registration, NULL, NULL, NULL, clAux, NULL);
				lisA->insertFirst(a1);

			}
			}
	}
	input.close();
}

void analizadorT::cargarGrupo(listG* listaG, string archivo,associate* aso,instructor* ins)
{
	string archivo2 = "instructor_prueba.txt";
	ifstream finput;
	finput.open(archivo.c_str());
	int auxcode = 0;
	int auxclasscod = 0;
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
		int auxDay = convertDayToInt(day);
		ins = cargarInstructor(archivo2, auxcode);
		if (!finput.eof()) {
			
			
			if(auxcode == ins->getCodeI()){
				groupClass* g = new groupClass(className, ins, auxcode, auxroom, auxq, hour, auxDay);
				cargarListaA(g->getListA(), "Socios.txt", auxcode,aso );
				listaG->insertFirst(g);
			}
				
			
			
		}
	}
	
	finput.close();
	}



