#include "nodeR.h"

nodeR::nodeR(routine* routines, nodeR* next)
{
	this->routines = routines;
	this->next = next;
}

void nodeR::setRoutines(routine* routines)
{
	this->routines = routines;
}

routine* nodeR::getRoutines()
{
	return routines;
}

void nodeR::setNext(nodeR* next)
{
	this->next = next;
}

nodeR* nodeR::getNext()
{
	return next;
}

string nodeR::toString()
{
	stringstream s;
	s << routines->toString() << endl;
	return s.str();
}

nodeR::~nodeR()
{
}
