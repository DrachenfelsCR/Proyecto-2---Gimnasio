#ifndef ASSOCIATE_H
#define ASSOCIATE_H
#include "person.h"
#include "measurements.h"
#include "instructor.h"
#include "listR.h"
#include "routine.h"
#include "nodeR.h"
class associate;
class instructor;
class listR;
class nodeA;
class routine;


class associate : public person
{
private:
	string email;
	int phone;
	string registration_date;
	measurements* measures;
	instructor*  assigned;
	routine* exercises;
	listR* listaR;

public:
	associate();
	associate(string, string, string,int,string, measurements*, instructor*,routine*,listR*);
	void setAssigned(instructor*);
	void setEmail(string);
	void setPhone(int);
	void setMeasures(measurements*);
	void setRegistrationDate(string);
	void setExercises(routine*);
	string getEmail();
	routine* getExercises();
	int getPhone();
	measurements* getMeasures();
	instructor* getAssigned();
	string getRegistrationDate();
	string toString();
	~associate();
	listR* getListaR();
};

#endif // !ASSOCIATE_H

