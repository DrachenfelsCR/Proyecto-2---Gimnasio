#include "instructor.h"

instructor::instructor(string full_name, string id): person(full_name,id)
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
