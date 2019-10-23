#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "person.h"
#include "associate.h"
#include "listA.h"
#include <iostream>
using namespace std;

class instructor : public person
{
private:
	associate* aso;
public:
	instructor(string,string, associate*);
	instructor();
	~instructor();
	string toString();

	

};





#endif // !INSTRUCTOR_H
