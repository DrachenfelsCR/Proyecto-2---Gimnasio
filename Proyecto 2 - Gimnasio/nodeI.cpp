#include "nodeI.h"

nodeI::nodeI(instructor* tutor, nodeI* next)
{
	this->tutor = tutor;
	this->next = next;
}
void nodeI::setTutor(instructor* tutor) {
	this->tutor = tutor;
}

instructor* nodeI::getTutor() {
	return tutor;
}

void nodeI::setNext(nodeI* next) {
	this->next = next;
}

nodeI* nodeI::getNext() {
	return this->next;
}

string nodeI::toString()
{
	stringstream s;
	s << tutor->toString()<<endl;
	return s.str();
}

nodeI::~nodeI()
{
}





