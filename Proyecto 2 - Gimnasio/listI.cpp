#include "listI.h"


listI::listI()
{
	this->first = NULL;
	this->current = NULL;
}

void listI::insertLast(instructor* tutor) {
	current = first;
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

			current->setNext(new nodeI(tutor,nullptr));
		}
	}
}

string listI::toString()
{
	current = first;
	stringstream s;
	while (current!=NULL)
	{
		s << current->toString() << endl;
		current = current->getNext();
	}
	return s.str();
}

void listI::save(string textname)
{
	output.open(textname.c_str());
	if (output.good())
	{


		current = first;
		while (current!=NULL)
		{
			current->getTutor()->guardar(output);
			current = current->getNext();
		}

	}
	output.close();
}

bool listI::recover(string textname)
{
	input.open(textname.c_str());
	instructor* aux = NULL;
	while (input.good())
	{
		aux->recuperar(input);
		if (input.good())
		{
			this->insertLast(aux);
		}


	}
	input.close();
	return true;
}

bool listI::findInstructor(string id)
{
	current = first;
	while (current!=NULL)
	{

		if (current->getTutor()->getId() == id)
		{
			return true;
		}
		current = current->getNext();
	}
	return false;
}

instructor* listI::searchAndGet(string id)
{
	current = first;
	while (current != NULL)
	{
		if (this->current->getTutor()->getId() == id)
		{
			return current->getTutor();
		}
		else
		{
			current = this->current->getNext();
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
