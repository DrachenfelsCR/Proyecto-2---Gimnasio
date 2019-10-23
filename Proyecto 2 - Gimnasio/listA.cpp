#include "listA.h"

listA::listA()
{
	this->first = NULL;
	this->current = NULL;
}

bool listA::insertFirst(associate* member) {
	current = new nodeA(member, NULL);
	if (this->first == NULL) {
		this->first = current;
		return true;
	}
	else if ((searchAndGet(member->getId())))
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

associate* listA::searchAndGet(string id) {
	this->current = this->first;
	while (current != NULL)
	{
		if (this->current->getMember()->getId() == id)
		{
			return this->current->getMember();
		}
		else
		{
			this->current = this->current->getNext();
		}
	} return NULL;
}

bool listA::eliminateAssociate(string id) {
	if (first != NULL) {
		nodeA* before = NULL;
		nodeA* aux = NULL;
		current = first;
		while ((current != NULL) && (current->getMember()->getId() != id))
		{
			before = current;
			current = current->getNext();
		}
		if (current == NULL) {
			return false;
		}
		//this else if, is in case that the first element is the one that must be deleted.
		else if (before == NULL)
		{
			first = first->getNext();
			delete current;
		}
		else
		{
			aux = before->getNext();
			aux = current->getNext();
			delete current;
		}
	} return false;
}

listA::~listA()
{
	current = first;
	while (first != NULL)
	{
		first = first->getNext();
		delete current;
	}
}

