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
	else if (searchAssociate(member->getId() == this->current->getMember()->getId()))
	{
		return false;
	}
	else
	{
		this->current = this->current->setNext(this->first);
		this->first = this->current;
		return true;
	}
}

bool listA::searchAssociate(string id) {
	this->current = this->first;
	while (current != NULL)
	{
		if (this->current->getMember()->getId() == id)
		{
			return true;
		}
		else
		{
			this->current = this->current->getNext();
		}
	} return false;
}

while (current != NULL) {
	if ((current->getCar()->getPlaca() == p)) {
		return true;
	}
	else {
		current = current->getNext();
	}
} return false;


listA::~listA()
{
}

bool eliminateAssociate(associate* ) {

}
string toString();