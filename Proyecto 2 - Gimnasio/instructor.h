#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "person.h"
#include "associate.h"
#include <iostream>

class instructor : public person
{
private:
	associate* aso;
	
public:
	instructor(string = "#", string ="#", associate*);
	~instructor();
	string toString();
	associate* getAso();
	void setAso(associate*);


	

};





#endif // !INSTRUCTOR_H
