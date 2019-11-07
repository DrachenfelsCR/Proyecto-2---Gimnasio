#include "exercise.h"

exercise::exercise()
{
	this->bodypart = "";
	this->repetitions = "";
	this->series = "";
}

exercise::exercise(string bodypart, int series, int repetitions, string name)
{
	this->bodypart = bodypart;
	this->series = convertirString(series);
	this->repetitions = convertirString(repetitions);
	this->name = name;
}

string exercise::getName()
{
	return this->name;
}
string exercise::getBodyPart()
{
	return this->bodypart;
}
string exercise::getRepetitions()
{
	return this->repetitions;
}
string exercise::getSeries()
{
	return this->series;
}

string exercise::toString(string b)
{
	stringstream s;
	if (b == this->bodypart)
	{
		s << this->name << "\t" << this->series << "\t" << this->repetitions << endl;
	}
	return s.str();
}

exercise::~exercise()
{
}