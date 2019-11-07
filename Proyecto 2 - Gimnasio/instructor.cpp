#include "instructor.h"


instructor::instructor(string full_name, string id, listA* lista, int codeI ): person(full_name,id)
{
	this->lista = lista;
	this->codeI = codeI;
}

int instructor::getCodeI()
{
	return codeI;
}

void instructor::setCodeI(int codeI)
{
	this->codeI = codeI;
}

instructor::instructor() : person("", "")
{
	codeI = 0;
	lista = new listA();
}


instructor::~instructor()
{
}

string instructor::toString()
{
	stringstream s;
	s << person::toString() << endl;
	return s.str();
}

listA* instructor::getLista()
{
	return lista;
}


void instructor::guardar(ofstream& output)
{
	output << getFullName() << "\t";
	output << getId() << "\t";
	output << getCodeI() << "\n";
}
