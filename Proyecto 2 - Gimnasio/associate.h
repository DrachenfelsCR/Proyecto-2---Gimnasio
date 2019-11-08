#ifndef ASSOCIATE_H
#define ASSOCIATE_H
#include "person.h"
#include "measurements.h"
#include "instructor.h"
#include "listR.h"
#include "routine.h"
#include "nodeR.h"
#include "listM.h"
#include <fstream>
#include "tools.h"
class associate;
class instructor;
class listR;
class nodeA;
class routine;
class listM;

class associate : public person
{
private:
	string email;
	int phone;
	string registration_date;
	measurements* measures;
	instructor*  assigned;
	routine* exercises;
	int classCode;
	listR* listaR;
	listM* listaM;

public:
	associate();
	associate(string, string, string,int,string, measurements*, instructor*,routine*,int,listR*);
	void setAssigned(instructor*);
	void setEmail(string);
	void setPhone(int);
	void setMeasures(measurements*);
	void setRegistrationDate(string);
	void setExercises(routine*);
	void setClassCode(int);
	string getEmail();
	routine* getExercises();
	int getPhone();
	int getClassCode();
	measurements* getMeasures();
	instructor* getAssigned();
	string getRegistrationDate();
	string toStringPerson();
	string toString();
	string toStringR();
	string toStringFat();
	~associate();
	listR* getListaR();
	listM* getListaM();
	static associate* load(ifstream&);
	void save(ofstream&);
};

#endif // !ASSOCIATE_H

