#ifndef ROUTINE_H
#define ROUTINE_H

#include <string>
#include <sstream>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include"routine.h"
using namespace std;
class routine
{
private:
	int code;
	string creation_date;
	string ending_date;
	string exerciseName;
	string objetive;
public:
	routine(string,string,string,string);
	routine();
	~routine();
	void setCode(int);
	void setExerciseName(string);
	void setCreationDate(string);
	void setEndingDate(string);
	void setObjetive(string);
	int getCode();
	string getCreationDate();
	string getExerciseName();
	string getEndingDate();
	string getObjective();
	string toString();
	int RandomCode();
};




#endif // !ROUTINE_H


