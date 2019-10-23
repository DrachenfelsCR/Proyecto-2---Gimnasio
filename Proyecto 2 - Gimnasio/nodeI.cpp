#include "nodeI.h"

nodeI::nodeI(instructor* instruc, nodeI* next)
{
	this->instruc = instruc;
	this->next = next;
}

void nodeI::setInstruc(instructor* instruc)
{
	this->instruc = instruc;
}

instructor* nodeI::getInstruc()
{
	return instruc;
}

void nodeI::setNext(nodeI* next)
{
	this->next = next;
}

nodeI* nodeI::getNext()
{
	return next;
}

string nodeI::toString()
{
	return string();
}

nodeI::~nodeI()
{
}

