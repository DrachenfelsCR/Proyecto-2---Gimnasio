#include "associate.h"

associate::associate() : person(" ", " ")
{
	this->email = " ";
	this->phone = 0;
	this->registration_date = " ";
	this->classCode = 0;
	listaR = new listR();
	listaM = new listM();
}
associate::associate(string id, string full_name, string email, int phone, string registration_date, measurements* measures,instructor*,routine* exercises,int classCode,listR* listaR): person(id, full_name)
{
	this->email = email;
	this->phone = phone;
	this->registration_date = registration_date;
	this->measures = measures;
	this->exercises = exercises;
	this->listaR = listaR;
	this->classCode = classCode;
}

void associate::setAssigned(instructor* ins)
{
	assigned = ins;
}

void associate::setEmail(string email) {
	this->email = email;
}

void associate::setPhone(int phone) {
	this->phone = phone;
}

void associate::setMeasures(measurements* measures)
{
	this->measures = measures;
}

void associate::setRegistrationDate(string registration_date) {
	this->registration_date = registration_date;
}

void associate::setExercises(routine* exercises)
{
	this->exercises = exercises;
}

void associate::setClassCode(int classcode)
{
	this->classCode = classcode;
}

string associate::getEmail() {
	return this->email;
}

routine* associate::getExercises()
{
	return exercises;
}

int associate::getPhone() {
	return this->phone;
}

measurements* associate::getMeasures()
{
	return measures;
}

instructor* associate::getAssigned()
{
	return assigned;
}

string associate::getRegistrationDate() {
	return this->registration_date;
}
int associate::getClassCode() {
	return this->classCode;
}

string associate::toStringPerson() {
	stringstream s;
	s << person::toString() << endl;
	return s.str();
}

string associate::toString() {
	stringstream s;
	s << person::toString() << endl;
	s << "Instructor:" << this->assigned->getFullName() << endl;
	s << "Email: " << this->email << endl;
	s << "Numero de telefono: " << this->phone << endl;
	s << "Fecha de inscripcion: " << this->registration_date << endl;
	return s.str();
}

string associate::toStringR() {
	stringstream s;
	s << person::toString() << endl;
	s << "Instructor: " << this->assigned->getFullName() << endl;
	s << "ID socio: " << this->classCode;
	return s.str();
}
string  associate::toStringFat()
{
	stringstream s;
	s << this->getId() << "\t";
	s << this->getFullName() << "\t";
	s << this->listaM->fatLoss() << "%";
	return s.str();
}

associate::~associate()
{
}

listR* associate::getListaR()
{
	return listaR;
}

listM* associate::getListaM()
{
	return listaM;
}




void associate::save(ofstream& outp)
{
	outp << getId() << '\t';
	outp << getFullName() << '\t';
	outp << getEmail() << '\t';
	outp << getPhone() << '\t';
	outp << getRegistrationDate() << '\t';
	outp << this->classCode << '\n';

}