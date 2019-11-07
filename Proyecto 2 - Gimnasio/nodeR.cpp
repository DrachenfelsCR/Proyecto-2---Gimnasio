#include "nodeR.h"

nodeR::nodeR(routine* r, nodeR* next)
{
	this->r = r;
	this->next = next;
}

void nodeR::setR(routine*r)
{
	this->r = r;
}

routine* nodeR::getR()
{
	return r;
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
	s << r->toString();
	return s.str();
}
string nodeR::toStringVe()
{
	stringstream s;
	s << r->toStringVen();
	return s.str();
}


nodeR::~nodeR()
{
}
