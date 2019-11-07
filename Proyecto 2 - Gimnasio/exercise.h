#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <sstream>
#include "tools.h"
using namespace std;

class exercise
{
private:
	string name;
	string bodypart;
	string repetitions;
	string series;

public:
	exercise();
	exercise(string,int,int,string);
	string toString(string);
	~exercise();
	string getName();
	string getBodyPart();
	string getRepetitions();
	string getSeries();

};






#endif // !EXERCISE_H
