#include "nodeM.h"

nodeM::nodeM(measurements* measures, nodeM* next)
{
	this->measures = measures;
	this->next = next;
}
void nodeM::setMeasures(measurements* measures) {
	this->measures = measures;
}

measurements* nodeM::getMeasures() {
	return this->measures;
}

void nodeM::setNext(nodeM* next) {
	this->next = next;
}

nodeM* nodeM::getNext() {
	return this->next;
}

string nodeM::toString()
{
	stringstream s;
	s << this->measures->toString() << endl;
	return s.str();
}

nodeM::~nodeM()
{
}





