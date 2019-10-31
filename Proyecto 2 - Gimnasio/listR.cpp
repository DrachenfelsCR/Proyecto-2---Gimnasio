#include "listR.h"

listR::listR()
{
	first = NULL;
	current = NULL;
}

listR::~listR()
{
}

void listR::insertFirst(routine*member)
{
	current = new nodeR(member, NULL);
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
