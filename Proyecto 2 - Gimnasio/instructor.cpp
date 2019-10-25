#include "instructor.h"




instructor::instructor(string full_name, string id, listA* ): person(full_name,id)
{
	
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
