#include "routine.h"

routine::routine(timeG creation_date, timeG ending_date, string exerciseName, string objetive)
{
	this->creation_date = creation_date;
	this->ending_date = ending_date;
	this->exerciseName = exerciseName;
	this->objetive = objetive;
	this->routine_status = true;
}
routine::routine()
{
	this->exerciseName = "";
	this->objetive = "";
	this->routine_status = true;
}

void routine::setCode(int code){
	this->code = code;
}
void routine::setExerciseName(string exerciseName)
{
	this->exerciseName= exerciseName;
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
	if (today->getYear() >= this->ending_date.getYear())
	{
		if (today->getMonth() >= this->ending_date.getMonth())
		{
			if (today->getDay() >= this->ending_date.getDay())
			{
				this->routine_status = false;
			}
		}
	}
	else
	{
		this->routine_status = true;
	}
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

string routine::getExerciseName()
{
	return exerciseName;
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


int routine::RandomCode()
{
	code = rand() % 20;
	return code;
}

routine::~routine(){}