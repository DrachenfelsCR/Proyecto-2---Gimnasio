#include "exercise.h"

exercise::exercise()
{
	this->bodypart = "";
	this->repetitions = 0;
	this->series = 0;
}

exercise::exercise(string bodypart, int series, int repetitions, string name)
{
	this->bodypart = bodypart;
	this->series = series;
	this->repetitions = repetitions;
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
int exercise::getRepetitions()
{
	return this->repetitions;
}
int exercise::getSeries()
{
	return this->series;
}

string exercise::toString(string b)
{
	stringstream s;
	if (b == this->bodypart)
	{
		s << this->bodypart << ": " << endl;
		s << this->name << "\t" << this->series << "\t" << this->repetitions << endl;
	}
	return s.str();
}

exercise::~exercise()
{
}