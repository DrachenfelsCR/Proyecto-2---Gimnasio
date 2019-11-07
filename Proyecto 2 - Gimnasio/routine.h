#ifndef ROUTINE_H
#define ROUTINE_H

#include <string>
#include <sstream>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include"routine.h"
#include "time.h"
#include "tools.h"
#include "listE.h"
using namespace std;
class routine
{
private:
	int code;
	timeG creation_date;
	timeG ending_date;
	string objetive;
	bool routine_status;
	string combo[8];
	listE* listEx;
public:
	routine(timeG, timeG,string);
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
	//int RandomCode();
	string toStringVen();
	string toStringEsp();
	string toStringFull();
	listE* getListE();

};



#endif // !ROUTINE_H


