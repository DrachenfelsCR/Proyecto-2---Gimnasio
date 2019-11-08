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

void listI::swap(nodeI* node_1, nodeI* node_2)
{
	instructor* aux = node_1->getTutor();
	node_1->setTutor(node_2->getTutor());
	node_2->setTutor(aux);
}

void listI::bubbleSort()
{
	bool aswap;
	nodeI* aux = NULL;
	do
	{
		aswap = false;
		current = first;

		while (current->getNext() != aux)
		{
			if (current->getTutor()->getLista()->fatLossTotal() < current->getNext()->getTutor()->getLista()->fatLossTotal())
			{
				swap(current, current->getNext());
				aswap = true;
			}
			current = current->getNext();
		}
	} while (aswap);

}

nodeI* listI::getFirst()
{
	return this->first;
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
