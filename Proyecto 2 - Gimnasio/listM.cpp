#include "listM.h"

listM::listM()
{
	this->first = NULL;
	this->current = NULL;
}

void listM::insertLast(measurements* measures) {
	current = first;
	if (first == NULL)
	{
		first = new nodeM(measures, nullptr);
	}
	else
	{
		while (current->getNext() != NULL)
		{
			current = current->getNext();
		}
		
	}
}

void listM::insertOrdered(measurements* m)
{
	current = first;

	if (first == NULL || first->getMeasures()->getBodyFat() > m->getBodyFat())
	{
		first = new nodeM(m, nullptr);
	}
	else
	{      
		while ((current->getNext() != NULL) && (current->getNext()->getMeasures()->getBodyFat() < m->getBodyFat()))
		{
			current = current->getNext();
		}
		nodeM* nuevo = new nodeM(m, current->getNext());
		current->setNext(nuevo);
	}
}

string listM::toString()
{
	current = first;
	stringstream s;
	while (current != NULL)
	{
		s << current->toString() << endl;
		current = current->getNext();
	}
	return s.str();
}


listM::~listM() {
	current = first;
	while (first != NULL)
	{
		first = first->getNext();
		delete current;
	}
}
