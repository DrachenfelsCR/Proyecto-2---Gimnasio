#include "listR.h"

listR::listR()
{
	this->first = NULL;
	this->current = NULL;
}

listR::~listR()
{
}

void listR::insertFirst(routine*routine)
{
	current = new nodeR(routine, NULL);
	if (first == NULL)
	{
		first = current;
	}
	else
	{
		current->setNext(first);
		first = current;
	}

}

void listR::updateRoutines(timeG* today)
{
	current = first;
	while (current != NULL)
	{
		current->getR()->setRoutineStatus(today);
		current = current->getNext();
	}
}



string listR::toString()
{
	stringstream s;
	current = first;
	while (current!=NULL)
	{
		s << current->toString()<<endl;
		current = current->getNext();
	}
	return s.str();
}

string listR::toStringVencida()
{
	stringstream s;
	current = first;
	while (current != NULL)
	{
		if (current->getR()->getRoutineStatus() == false)
		{
			s << current->toString() << endl;
		}
		
		current = current->getNext();
	}	
	return s.str();
}

bool listR::checkVencida()
{
	current = first;
	while (current != NULL)
	{
		if (current->getR()->getRoutineStatus() == false)
		{
			return true;
		}	
	}
	return false;
}