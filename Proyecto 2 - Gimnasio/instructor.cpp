#include "instructor.h"




instructor::instructor(string full_name, string id, listA* lista ): person(full_name,id)
{
	this->lista = lista;
}

instructor::instructor() : person("", "")
{
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

instructor* instructor::recuperar(ifstream& input)
{

	string nam, id;
	getline(input, nam,'\t');
	getline(input, id, '\n');
	return new instructor(nam,id,nullptr);

}

void instructor::guardar(ofstream& output)
{
	output << getFullName() << endl;
	output << getId() << endl;
}
