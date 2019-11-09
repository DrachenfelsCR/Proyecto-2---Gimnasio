#include "routine.h"

routine::routine(timeG creation_date, timeG ending_date, string objetive)
{
	this->creation_date = creation_date;
	this->ending_date = ending_date;
	this->objetive = objetive;
	this->routine_status = true;
	this->listEx = new listE();
	this->combo[0] = "Pierna";
	this->combo[1] = "Pecho";
	this->combo[2] = "Espalda";
	this->combo[3] = "Hombro";
	this->combo[4] = "Triceps";
	this->combo[5] = "Biceps";
	this->combo[6] = "Trapecio";
	this->combo[7] = "Antebrazo";
}
routine::routine()
{
	this->objetive = "";
	this->routine_status = true;
	this->listEx = new listE();
	this->combo[0] = "Pierna";
	this->combo[1] = "Pecho";
	this->combo[2] = "Espalda";
	this->combo[3] = "Hombro";
	this->combo[4] = "Triceps";
	this->combo[5] = "Biceps";
	this->combo[6] = "Trapecio";
	this->combo[7] = "Antebrazo";
}

void routine::setCode(int code){
	this->code = code;
}

void routine::setCreationDate(timeG creation_date) {
	this->creation_date = creation_date;
}
void routine::setEndingDate(timeG ending_date) {
	this->ending_date = ending_date;
}

void routine::setObjetive(string objective) {
	this->objetive = objective;
}

void routine::setRoutineStatus(timeG* today)
{
	if (today->getYear() > this->ending_date.getYear())
	{
		this->routine_status = false;
	} 
	else if ((today->getMonth() >= this->ending_date.getMonth()) && (today->getYear() == this->ending_date.getYear()))
	{
		if (today->getDay() >= this->ending_date.getDay())
		{
			this->routine_status = false;
		}
	}
	else
	{
		this->routine_status = true;
	}
}
listE* routine::getListE()
{
	return listEx;
}

bool routine::getRoutineStatus()
{
	return this->routine_status;
}

int routine::getCode() {
	return this->code;
}

timeG routine::getCreationDate() {
	return this->creation_date;
}

timeG routine::getEndingDate() {
	return this->ending_date;
}

string routine::getObjective() {
	return this->objetive;
}

string routine::toString() {
	stringstream s;
	s << this->code << "\t";
	s << this->creation_date.toString();
	if (routine_status == false)
	{
		s << "(vencida)";
	}
	else
	{
		s << "(vigente)";
	}
	s << endl << "\t";
	return s.str();
}

string routine::toStringVen() {
	stringstream s;
	s << this->code << "\t";
	s << this->ending_date.toString();
	if (routine_status == false)
	{
		s << "(vencida)";
	}
	else
	{
		s << "(vigente)";
	}
	s << endl << "\t";
	return s.str();
}
string routine::toStringEsp()
{
	stringstream s;
	s << "Fecha de inicio: " << this->creation_date.toString() << endl;
	s << "Fecha de vencimiento: " << this->ending_date.toString();
	if (routine_status == false)
	{
		s << "(vencida)";
	}
	else
	{
		s << "(vigente)";
	}
	s << endl;
	return s.str();
}

string routine::toStringFull()
{
	stringstream s;
	for (int i = 0; i < 8; i++)
	{
		s << this->listEx->toString(this->combo[i]);
	}
	return s.str();
}

/*int routine::RandomCode()
{
	code = rand() % 20;
	return code;
}*/

routine::~routine()
{
	delete this->listEx;
}