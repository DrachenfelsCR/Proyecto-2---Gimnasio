#include "listA.h"

listA::listA()
{
	this->first = NULL;
	this->current = NULL;
}

void listA::insertFirst(associate* member) {
	current = first;
	if (first == nullptr)
	{
		first = new nodeA (member, nullptr);
	}
	else {
		while (current->getNext() != NULL)
		{
			current = current->getNext();
		}
		if (current->getMember()->getId() != member->getId())
		{
			current->setNext(new nodeA(member, nullptr));
		}

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

string listA::toString()
{
	stringstream s;
	while (current!=NULL)
	{
		s << current->toString();
		current = current->getNext();
	}
	return s.str();
}

listA::~listA() {
	current = first;
	while (first != NULL)
	{
		first = first->getNext();
		delete current;
	}
}

