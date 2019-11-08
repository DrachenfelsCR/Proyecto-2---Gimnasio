#include "listG.h"

listG::listG()
{
	this->first = NULL;
	this->current = NULL;
}

void listG::insertFirst(groupClass* group_class) {
	current = new nodeG(group_class, nullptr);
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
groupClass* listG::searchAndGet(int class_code) {
	this->current = this->first;
	while (current != NULL)
	{
		if (this->current->getGroupClass()->getClassCode() == class_code)
		{
			return this->current->getGroupClass();
		}
		else
		{
			this->current = this->current->getNext();
		}
	} return NULL;
}

string listG::toString()
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

int listG::countNodes(){
	current = first;
	int quantity = 0;
	while (current != NULL)
	{
		quantity++;
		current = current->getNext();
	}
	return quantity;
}

listG::~listG() {
	current = first;
	while (first != NULL)
	{
		first = first->getNext();
		delete current;
	}
}

void listG::save(string fileName)
{
	output.open(fileName.c_str());
	if (output.good())
	{
		current = first;
		while (current!=NULL)
		{
			current->getGroupClass()->save(output);
			current = current->getNext();
		}

	}
	output.close();
}


