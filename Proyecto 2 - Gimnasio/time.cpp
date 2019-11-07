#include "time.h"

timeG::timeG(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}
timeG::timeG()
{
	this->day = 0;
	this->month = 0;
	this->year = 0;
}

timeG::~timeG()
{
}

int timeG::getDay()
{
	return day;
}

int timeG::getMonth()
{
	return month;
}

int timeG::getYear()
{
	return year;
}

void timeG::setDay(int day)
{
	this->day = day;
}

void timeG::setMonth(int month)
{
	this->month = month;
}

void timeG::setYear(int year)
{
	this->year = year;
}

string timeG::toString()
{
	stringstream s;
	s << day << "/" << month << "/" << year;
	return s.str();
}
bool  timeG::increaseMonth()
{
	if (this->month == 12)
	{
		this->year = this->year + 1;
		this->month = 1;
		return true;
	}
	else
	{
		this->month = this->month + 1;
		return true;
	}
	return false;
}