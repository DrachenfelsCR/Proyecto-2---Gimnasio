#include "nodeG.h"

nodeG::nodeG(groupClass* group_class, nodeG* next)
{
	this->group_class = group_class;
	this->next = next;
}

void nodeG::setGroupClass(groupClass* group_class)
{
	this->group_class = group_class;
}

groupClass* nodeG::getGroupClass()
{
	return this->group_class;
}

void nodeG::setNext(nodeG* next)
{
	this->next = next;
}

nodeG* nodeG::getNext()
{
	return this->next;
}

string nodeG::toString()
{
	stringstream s;
	s << this->group_class->toString() << endl;
	return s.str();
}




nodeG::~nodeG()
{

}