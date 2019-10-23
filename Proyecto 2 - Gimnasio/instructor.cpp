#include "instructor.h"




instructor::instructor(string, string, associate*) : person(full_name, id)
{
}

instructor::instructor : person("", "")
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
