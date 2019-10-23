#include "groupClass.h"

groupClass::groupClass() {
	this->class_name = "";
	this->class_code = "";
	this->tutor = NULL;
	this->room = '';
	this->quantity = 0;
}

groupClass::groupClass(string class_name, string class_code, instructor* tutor, char room, int quantity) {
	this->class_name = class_name;
	this->class_code = class_code;
	this->tutor = tutor;
	this->room = room;
	this->quantity = quantity;
}

void groupClass::setClassName(string class_name) {
	this->class_name = class_name;
}

void groupClass::setClassCode(string class_code) {
	this->class_code = class_code;
}

void groupClass::setTutor(instructor* tutor) {
	this->tutor = tutor;
}

void groupClass::setQuantity(int quantity) {
	this->quantity = quantity;
}

void groupClass::setRoom(char room) {
	this->room = room;
}

string groupClass::getClassName() {
	return this->class_name;
}

string groupClass::getClassCode() {
	return this->class_code;
}

instructor* groupClass::getInstructor() {
	return this->tutor;
}

char groupClass::getRoom() {
	return this->room;
}

int groupClass::getQuantity() {
	return this->quantity;
}