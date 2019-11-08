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
		current->setNext(new nodeM(measures, NULL));
	}
}

double listM::fatLoss() 
{
	double penul;
	double ult;
	current = first;
	if (first == NULL || first->getNext() == NULL)
	{
		return 0.0;
	}
	else
	{
		while (current->getNext()->getNext() != NULL)
		{
			current = current->getNext();
		}
		penul = current->getMeasures()->getBodyFat();
		ult = current->getNext()->getMeasures()->getBodyFat();
		
	}	return (ult - penul);

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
