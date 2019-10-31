#ifndef ROUTINE_H
#define ROUTINE_H

#include <string>
#include <sstream>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include "listR.h"
#include "associate.h"
#include "nodeR.h"
#include"routine.h"
using namespace std;
class nodeR;
class nodeA;
class associate;
class listR;
class routine
{
private:
	int code;
	string creation_date;
	string ending_date;
	string exerciseName;
	string objetive;
	associate* partner;
public:
	routine(string,string,string,string,associate*);
	routine();
	~routine();
	void setCode(int);
	void setExerciseName(string);
	void setCreationDate(string);
	void setEndingDate(string);
	void setPartner(associate*);
	void setObjetive(string);
	int getCode();
	string getCreationDate();
	string getExerciseName();
	string getEndingDate();
	string getObjective();
	string toString();
	associate* getPartner();
	int RandomCode();
};




#endif // !ROUTINE_H


