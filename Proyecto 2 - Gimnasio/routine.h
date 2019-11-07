#ifndef ROUTINE_H
#define ROUTINE_H

#include <string>
#include <sstream>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include"routine.h"
#include "time.h"
using namespace std;
class routine
{
private:
	int code;
	timeG creation_date;
	timeG ending_date;
	string exerciseName;
	string objetive;
	bool routine_status;
public:
	routine(timeG, timeG,string,string);
	routine();
	~routine();
	void setCode(int);
	void setExerciseName(string);
	void setCreationDate(timeG);
	void setEndingDate(timeG);
	void setObjetive(string);
	void setRoutineStatus(timeG*);
	bool getRoutineStatus();
	int getCode();
	timeG getCreationDate();
	string getExerciseName();
	timeG getEndingDate();
	string getObjective();
	string toString();
	int RandomCode();

};



#endif // !ROUTINE_H


