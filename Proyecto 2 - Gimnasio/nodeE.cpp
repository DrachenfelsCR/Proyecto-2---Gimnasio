#include "nodeE.h"

nodeE::nodeE(exercise* exc, nodeE* next)
{
	this->ex = exc;
	this->next = next;
}
void nodeE::setEx(exercise* exc) {
	this->ex = exc;
}

exercise* nodeE::getEx() {
	return this->ex;
}

void nodeE::setNext(nodeE* next) {
	this->next = next;
}

nodeE* nodeE::getNext() {
	return this->next;
}

string nodeE::toString(string n)
{
	stringstream s;
	s << ex->toString(n) << endl;
	return s.str();
}

nodeE::~nodeE()
{
}
