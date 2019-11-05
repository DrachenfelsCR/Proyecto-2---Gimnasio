#include "associate.h"

associate::associate() : person(" ", " ")
{
	this->email = " ";
	this->phone = 0;
	this->registration_date = " ";
	listaR = new listR();
}
associate::associate(string id, string full_name, string email, int phone, string registration_date, measurements* measures,instructor*,routine* exercises,listR* listaR): person(id, full_name)
{
	this->email = email;
	this->phone = phone;
	this->registration_date = registration_date;
	this->measures = measures;
	this->exercises = exercises;
	this->listaR = listaR;
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

listR* associate::getListaR()
{
	return listaR;
}

listM* associate::getListaM()
{
	return listaM;
}


associate* associate::load(ifstream& inp) {
	string id;
	string name;
	string email;
	string phone;
	string registration_date;

	getline(inp, id, '\t');
	getline(inp, name, '\t');
	getline(inp, email, '\t');
	getline(inp, phone, '\t');
	getline(inp, registration_date, '\n');
	
	int phoneAux = convertirInt(phone);
	
	return new associate(id, name, email, phoneAux, registration_date, NULL, NULL, NULL, NULL);
}
void associate::save(ofstream& outp)
{
	outp << getId() << '\t';
	outp << getFullName() << '\t';
	outp << email << '\t';
	outp << phone << '\t';
	outp << registration_date << '\n';
}