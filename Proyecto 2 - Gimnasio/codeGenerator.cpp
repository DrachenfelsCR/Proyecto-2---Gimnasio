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
		s << "(" << "00" << this->last + 1 << ")";
	}
	else if (last < 100 && last >= 10)
	{
		s << "(" << "0" << this->last + 1 << ")";
	}
	else
	{
		s << "(" << this->last + 1 << ")";
	}
	this->last++;
	return s.str();
}

int codeGen::genCodeNum()
{
	this->last++;
	return this->last;
}

int codeGen::getLast()
{
	return this->last;
}
codeGen::~codeGen()
{
}

