#include "listI.h"


listI::listI()
{
	this->first = NULL;
	this->current = NULL;
}

bool listI::insertFirst(instructor* tutor) {
	current = new nodeI(tutor, NULL);
	if (this->first == NULL) {
		this->first = current;
		return true;
	}
	else if ((searchAndGet(tutor->getId())))
	{
		return false;
	}
	else
	{
		this->current->setNext(this->first);
		this->first = this->current;
		return true;
	}
}

instructor* listI::searchAndGet(string id) {
	this->current = this->first;
	while (current != NULL)
	{
		if (this->current->getTutor()->getId() == id)
		{
			return this->current->getTutor();
		}
		else
		{
			this->current = this->current->getNext();
		}
	} return NULL;
}



listI::~listI() {
	current = first;
	while (first != NULL)
	{
		first = first->getNext();
		delete current;
	}
}
