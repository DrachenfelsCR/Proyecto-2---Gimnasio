#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "person.h"
#include <iostream>

class instructor : public person
{
private:

public:
	instructor(string = "#", string ="#");
	~instructor();
	string toString();

	

};





#endif // !INSTRUCTOR_H
