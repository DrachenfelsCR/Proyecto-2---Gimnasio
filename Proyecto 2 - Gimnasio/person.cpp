#include "person.h"

person::person() {
	this->full_name = " ";
	this->id = " ";
}

person::person(string full_name, string id) {
	this->full_name = full_name;
	this->id = id;
}

void person::setFullName(string full_name) {
	this->full_name = full_name;
}

void person::setId(string id) {
	this->id = id;
}

string person::getFullName() {
	return this->full_name;
}

string person::getId() {
	return this->id;
}

person::~person() {}
