#include "associate.h"

associate::associate() : person(" ", " ")
{
	this->email = " ";
	this->phone = 0;
	this->registration_date = " ";

}
associate::associate(string id, string full_name, string email, int phone, string registration_date) : person(id, full_name)
{
	this->email = email;
	this->phone = phone;
	this->registration_date = registration_date;
}

void associate::setEmail(string email) {
	this->email = email;
}

void associate::setPhone(int phone) {
	this->phone = phone;
}

void associate::setRegistrationDate(string registration_date) {
	this->registration_date = registration_date;
}

string associate::getEmail() {
	return this->email;
}

int associate::getPhone() {
	return this->phone;
}

string associate::getRegistrationDate() {
	return this->registration_date;
}
string associate::toString() {
	stringstream s;
	s << person::toString() << endl;
	s << "Email: " << this->email << endl;
	s << "Numero de telefono: " << this->phone << endl;
	s << "Fecha de inscripcion: " << this->registration_date << endl;
	return s.str();
}
associate::~associate()
{
}