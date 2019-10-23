#include "listI.h"

listI::listI()
{
	first = NULL;
	current = NULL;
}

listI::~listI()
{
	current = first;
	while (first!=NULL)
	{
		first = first->getNext();
		delete current;
	}
}

void listI::insertLast(instructor* i)
{
	if (first==NULL)
	{
		first = new nodeI(i, nullptr);
	}
	else
	{
		while (current->getNext()!=NULL)
		{
			current = current->getNext();
		}
		if (current->getInstruc()->getId()!=i->getId())
		{
			current = first;
			current->setNext(new nodeI(i,nullptr));
		}
	}
	
}

string listI::toString()
{
	stringstream s;
	current = first;
	while (current!=NULL)
	{
		s << current->toString() << endl;
		current = current->getNext();
	}
	return s.str();
}
