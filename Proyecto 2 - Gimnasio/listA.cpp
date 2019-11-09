#include "listA.h"

listA::listA()
{
	this->first = NULL;
	this->current = NULL;
}

void listA::insertFirst(associate* member) {

	current = first;
	if (first == NULL)
	{
		first = new nodeA(member, nullptr);
	}
	else
	{
		while (current->getNext() != NULL)
		{
			current = current->getNext();
		}
		if (current->getMember()->getId() != member->getId())
		{

			current->setNext(new nodeA(member, nullptr));
		}
	}
}

void listA::swap(nodeA* node_1, nodeA* node_2)
{
	associate* aux = node_1->getMember();
	node_1->setMember(node_2->getMember());
	node_2->setMember(aux);
}

void listA::bubbleSort()
{
	bool aswap;
	nodeA* aux = NULL;
	do
	{
		aswap = false;
		current = first;

		while (current->getNext() != aux)
		{
			if (current->getMember()->getListaM()->fatLoss() > current->getNext()->getMember()->getListaM()->fatLoss())
			{
				swap(current, current->getNext());
				aswap = true;
			}
			current = current->getNext();
		}
	} while (aswap);
	
}

double listA::fatLossTotal()
{
	double total = 0;
	current = first;
	while (current != NULL)
	{
		total = total + current->getMember()->getListaM()->fatLoss();
		current = current->getNext();
	}
	return total;
}

int listA::countNodes() {
	current = first;
	int quantity = 0;
	while (current != NULL)
	{
		quantity++;
		current = current->getNext();
	}
	return quantity;
}


routine* listA::searchR(int ccode)
{
	current = first;
	while (current != NULL)
	{
		if (current->getMember()->getListaR()->searchRoutine(ccode))
		{
			return current->getMember()->getListaR()->getRoutine(ccode);
		}
		else
		{
			current = current->getNext();
		}
	}
	return NULL;
}
associate* listA::searchByRoutine(int ccode)
{
	current = first;
	while (current != NULL)
	{
		if (current->getMember()->getListaR()->searchRoutine(ccode))
		{
			return current->getMember();
		}
		else
		{
			current = current->getNext();
		}
	}
	return NULL;
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

string listA::toStringSmall()
{
	current = first;
	stringstream s;
	while (current != NULL)
	{
		s << current->toStringPerson() << endl;
		current = current->getNext();
	}
	return s.str();
}
string listA::toStringVencidas()
{
	current = first;
	stringstream s;
	while (current != NULL)
	{
		s << current->getMember()->getFullName()<< "\t";
		s << current->getMember()->getListaR()->toStringVencida() << "\t";
		current = current->getNext();
	}
	return s.str();
}

string listA::toStringFat()
{
	current = first;
	stringstream s;
	while (current != NULL)
	{
		s << current->getMember()->toStringFat() << endl;
		current = current->getNext();
	}
	return s.str();
}


bool  listA::checkVen()
{
	current = first;
	while (current != NULL)
	{
		if (current->getMember()->getListaR()->checkVencida())
		{
			return true;
		}
		current = current->getNext();
	}
	return false;
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
	while (current != NULL)
	{
		current->getMember()->save(foutput);
		current = current->getNext();
	}

}
foutput.close();
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
					aso = new associate(id, name, email, phoneAux, registration, NULL, NULL, NULL, clAux, NULL);
					lisA->insertFirst(aso);
				}
			}
			
			
		}
		finput.close();
		return true;
		
}

