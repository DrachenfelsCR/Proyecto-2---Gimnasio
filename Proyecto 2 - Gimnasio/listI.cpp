#include "listI.h"


listI::listI()
{
	this->first = NULL;
	this->current = NULL;
}

void listI::insertLast(instructor* tutor) {
	if (first==NULL)
	{
		first = new nodeI(tutor, nullptr);
	}
	else
	{
		while (current->getNext()!=NULL)
		{
			current = current->getNext();
		}
		if (current->getTutor()->getId()!=tutor->getId())
		{
			current = first;
			current->setNext(new nodeI(tutor,nullptr));
		}
	}
}

string listI::toString()
{
	stringstream s;
	while (current!=NULL)
	{
		s << current->toString() << endl;
		current = current->getNext();
	}
	return s.str();
}





listI::~listI() {
	current = first;
	while (first != NULL)
	{
		first = first->getNext();
		delete current;
	}
}
