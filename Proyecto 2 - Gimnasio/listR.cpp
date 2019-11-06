#include "listR.h"

listR::listR()
{
	this->first = NULL;
	this->current = NULL;
}

listR::~listR()
{
}

void listR::insertFirst(routine*routine)
{
	current = new nodeR(routine, NULL);
	if (first == NULL)
	{
		first = current;
	}
	else
	{
		current->setNext(first);
		first = current;
	}

}





string listR::toString()
{
	stringstream s;
	current = first;
	while (current!=NULL)
	{
		s << current->toString()<<endl;
		current = current->getNext();
	}
	return s.str();
}
