#include "routine.h"

routine::routine() {
	creation_date = "";
	ending_date = "";
	objetive = "";
	for (int i = 0; i < 4; i++) {
		instructions[i] = "";
	}
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
void routine::setInstructions(string body_part, string exercise_name, string series, string repetitions) {
	this->instructions[0] = body_part;
	this->instructions[1] = exercise_name;
	this->instructions[2] = series;
	this->instructions[3] = repetitions;
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
	s << "Instrucciones de la rutina: " << endl;
	s << " " << "Parte del cuerpo: " << this->instructions[0] << endl;
	s << " " << "Nombre del ejercicio " << this->instructions[1] << endl;
	s << " " << "Series: " << this->instructions[2] << endl;
	s << " " << "Repeticiones: " << this->instructions[3] << endl;
	return s.str();
}

int routine::RandomCode()
{
	code = rand() % 20;
	return code;
}

routine::~routine(){}