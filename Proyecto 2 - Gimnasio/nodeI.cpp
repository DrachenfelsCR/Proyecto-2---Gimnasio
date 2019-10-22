#include "nodeI.h"

nodeI::nodeI(instructor* instruc, nodeI* next)
{
	this->instruc = instruc;
	this->instruc = instruc;
}

void nodeI::setMember(instructor* instruc)
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

instructor* nodeI::getMember()
{
	return nullptr;
}
