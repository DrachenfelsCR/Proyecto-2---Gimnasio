#include "listA.h"

listA::listA()
{
	this->first = NULL;
	this->current = NULL;
}

void listA::insertFirst(associate* member) {
	current = new nodeA(member, NULL);
	if (this->first == NULL) {
		this->first = current;
	}
	else
	{
		this->current = this->current->setNext(this->first);
		this->first = this->current;
	}
}

bool listA::searchAssociate(associate* member) {
	this->current = new nodeA();
}

listA::~listA()
{
}

bool eliminateAssociate(associate*);
string toString();