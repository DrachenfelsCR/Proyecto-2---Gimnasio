#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "person.h"
#include <iostream>
using namespace std;

class instructor : public person
{
private:
	
public:
	instructor(string = "#", string = "#");
	~instructor();
	string toString();

	

};





#endif // !INSTRUCTOR_H
