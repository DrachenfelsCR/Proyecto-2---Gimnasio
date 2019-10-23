#include "instructor.h"




instructor::instructor(string full_name, string id, associate* aso): person(full_name,id)
{
	this->aso = aso;
}

instructor::instructor() : person("", "")
{
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
