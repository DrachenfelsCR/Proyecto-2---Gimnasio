#include "instructor.h"




instructor::instructor(string full_name, string id, associate*): person(full_name,id)
{
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
