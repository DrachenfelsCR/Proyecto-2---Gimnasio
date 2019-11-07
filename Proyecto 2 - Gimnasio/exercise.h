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
	int repetitions;
	int series;

public:
	exercise();
	exercise(string,int,int,string);
	string toString(string);
	~exercise();
	string getName();
	string getBodyPart();
	int getRepetitions();
	int getSeries();

};






#endif // !EXERCISE_H
