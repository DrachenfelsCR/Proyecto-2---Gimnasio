#include "time.h"

time::time(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

time::~time()
{
}

int time::getDay()
{
	return day;
}

int time::getMonth()
{
	return month;
}

int time::getYear()
{
	return year;
}

void time::setDay(int day)
{
	this->day = day;
}

void time::setMonth(int month)
{
	this->month = month;
}

void time::setYear(int year)
{
	this->year = year;
}

string time::toString()
{
	stringstream s;
	s << day << "/" << month << "/" << year << endl;
	return s.str();
}
