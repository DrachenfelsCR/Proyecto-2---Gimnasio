#include "routine.h"

routine::routine(string creation_date, string ending_date, string exerciseName, string objetive)
{
	this->creation_date = creation_date;
	this->ending_date = ending_date;
	this->exerciseName = exerciseName;
	this->objetive = objetive;
}

routine::routine() {
	creation_date = "";
	ending_date = "";
	objetive = "";
}

void routine::setCode(int code){
	this->code = code;
}
void routine::setExerciseName(string exerciseName)
{
	this->exerciseName= exerciseName;
}
void routine::setCreationDate(string creation_date) {
	this->creation_date = creation_date;
}
void routine::setEndingDate(string ending_date) {
	this->ending_date = ending_date;
}

void routine::setObjetive(string objective) {
	this->objetive = objective;
}


int routine::getCode() {
	return this->code;
}

string routine::getCreationDate() {
	return this->creation_date;
}

string routine::getExerciseName()
{
	return exerciseName;
}

string routine::getEndingDate() {
	return this->ending_date;
}

string routine::getObjective() {
	return this->objetive;
}

string routine::toString() {
	stringstream s;
	s << "Codigo: " << this->code << endl;
	s << "Fecha de creacion: " << this->creation_date << endl;
	s << "Fecha estimada de finalizacion: " << this->ending_date << endl;
	s << "Objetivo: " << this->objetive << endl;
	return s.str();
}


int routine::RandomCode()
{
	code = rand() % 20;
	return code;
}

routine::~routine(){}