#include "nodeA.h"

nodeA::nodeA(associate* member, nodeA* next)
{
	this->member = member;
	this->next = next;
}
void nodeA::setMember(associate* member) {
	this->member = member;
}

associate* nodeA::getMember() {
	return this->member;
}

void nodeA::setNext(nodeA* next) {
	this->next = next;
}

nodeA* nodeA::getNext() {
	return this->next;
}

string nodeA::toString()
{
	stringstream s;
	s << member->toString() << endl;
	return s.str();
}

string nodeA::toStringPerson()
{
	stringstream s;
	s << member->toStringPerson() << endl;
	return s.str();
}

string nodeA::toStringVe()
{
	stringstream s;
	s << member->toString() << endl;
	return s.str();
}

nodeA::~nodeA()
{
}
