#include "groupClass.h"

groupClass::groupClass() {
	this->class_name = "";
	this->class_code = 0;
	this->tutor = NULL;
	this->room = ' ';
	this->quantity = 0;
	this->hour = "";
	this->day = "";
}

groupClass::groupClass(string class_nam, instructor* tutor, int class_code, char room, int quantity, string hour, int day) {
	this->class_name = class_name;
	this->class_code = class_code;
	this->tutor = tutor;
	this->room = room;
	this->quantity = quantity;
	this->hour = hour;
	switch (day)
	{
	case 1:
		this->day = "Lunes";
		break;
	case 2:
		this->day = "Martes";
		break;
	case 3:
		this->day = "Miercoles";
		break;
	case 4:
		this->day = "Jueves";
		break;
	case 5:
		this->day = "Viernes";
		break;
	case 6:
		this->day = "Sabado";
		break;
	default:
		this->day = "";
		break;
	}
	
}

void groupClass::setClassName(string class_name) {
	this->class_name = class_name;
}

void groupClass::setClassCode(int class_code) {
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

void groupClass::setHour(string hour){
	this->hour = hour;
}

void groupClass::setDay(int day) {
	switch (day)
	{
	case 1:
		this->day = "Lunes";
		break;
	case 2:
		this->day = "Martes";
		break;
	case 3:
		this->day = "Miercoles";
		break;
	case 4:
		this->day = " Jueves";
		break;
	case 5:
		this->day = "Viernes";
		break;
	case 6:
		this->day = "Sabado";
		break;
	default:
		this->day = "";
		break;
	}
}

string groupClass::getHour() {
	return this->hour;
}

string groupClass::getClassName() {
	return this->class_name;
}

int groupClass::getClassCode() {
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

groupClass::~groupClass() {

}

string groupClass::toString()
{
	stringstream s;
	s << "Nombre de la clase: " << this->class_name << endl;
	s << "Codigo de la clase: " << this->class_code << endl;
	s << "Tutor de la clase: " << this->tutor<< endl;
	s << "Salon de la clase: " << this->room << endl;
	s << "Cantidad: " << this->quantity << endl;
	s << "Horario: " << this->hour << endl;
	return s.str();
}