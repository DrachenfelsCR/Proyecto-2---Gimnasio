#include "codeGenerator.h"

codeGen::codeGen()
{
	this->last = 0;
}

string codeGen::genCode()
{
	stringstream s;

	if (last < 10)
	{
		s << "(" << "00" << this->last << ")";
	}
	else if (last < 100 && last >= 10)
	{
		s << "(" << "0" << this->last << ")";
	}
	else
	{
		s << "(" << this->last << ")";
	}
	this->last++;
	return s.str();
}

int codeGen::getLast()
{
	return this->last;
}
codeGen::~codeGen()
{
}

