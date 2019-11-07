#include "listE.h"

listE::listE()
{
	this->first = NULL;
	this->current = NULL;
}

void listE::insertFirst(exercise* exc) 
{
	current = first;
	if (first == NULL)
	{
		first = new nodeE(exc, nullptr);
	}
	else
	{
		while (current->getNext() != NULL)
		{
			current = current->getNext();
		}
			current->setNext(new nodeE(exc, nullptr));
	}
}

string listE::toString(string n)
{
	current = first;
	stringstream s;
	while (current != NULL)
	{
		s << current->toString(n) << endl;
		current = current->getNext();
	}
	return s.str();
}

bool listE::find(string name)
{
	current = first;
	while (current != NULL)
	{
		if (current->getEx()->getName() == name)
		{
			return true;
		}
		else
			current = current->getNext();
	}
	return false;
}
exercise* listE::getExercise(string Bpart)
{
	current = first;
	while (current != NULL)
	{
		if (current->getEx()->getBodyPart() == Bpart)
		{
			return current->getEx();
		}
		else
			current = current->getNext();
	}
	return NULL;
}

listE::~listE() {
	current = first;
	while (first != NULL)
	{
		first = first->getNext();
		delete current;
	}
}
