#include "listR.h"

listR::listR()
{
	first = NULL;
	current = NULL;
}

listR::~listR()
{
}

void listR::insertFirst(routine*r)
{
	current = new nodeR(r, nullptr);
	if (first==NULL)
	{
		first = current;

	}
	else
	{
		current->setNext(first);
		first = current;
	}


}
