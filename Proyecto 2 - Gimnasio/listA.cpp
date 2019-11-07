#include "listA.h"

listA::listA()
{
	this->first = NULL;
	this->current = NULL;
}

void listA::insertFirst(associate* member) {
	current = new nodeA(member,nullptr);
	if (first==NULL)
	{
		first = current;
	}
	else
	{
		current->setNext(first);
		first = current;
	}
}
bool listA::find(string id)
{
	current = first;
	while (current!=NULL)
	{
		if (current->getMember()->getId()==id)
		{
			return true;
		}
		current = current->getNext();
	}
	return false;
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
	current = first;
	stringstream s;
	while (current!=NULL)
	{
		s << current->toString()<<endl;
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

void listA::save(string fileName)
{
	foutput.open(fileName.c_str());

	if (foutput.good())
	{
		current = first;
		stringstream s;
		while (current != NULL)
		{
			current->getMember()->save(foutput);
			current = current->getNext();
		}
	}
	else
	{
		cout << endl << "Error al abrir fichero de salida" << endl << endl;
	}
}

bool listA::load(listA* lisA, string fileName, int clcode) 
{
	int phoneAux = 0;
	int clAux = 0;
	finput.open(fileName.c_str());
	string email, registration, phone, classcode, name, id;
	associate* aso = NULL;
		while (finput.good()) {
			getline(finput, id, '\t');
			getline(finput, name, '\t');
			getline(finput, email, '\t');
			getline(finput, phone, '\t');
			getline(finput, registration, '\t');	
			getline(finput, classcode, '\t');
			
			
			phoneAux = convertirInt(phone);
			clAux = convertirInt(classcode);
			if (clcode == clAux)
			{
				if (!name.empty() && !id.empty())
				{
					aso = new associate(id, name, email, phoneAux, registration, NULL, NULL, NULL, classcode, NULL);
					lisA->insertFirst(aso);
				}
			}
			
			
		}
		finput.close();
		return true;
		
}

