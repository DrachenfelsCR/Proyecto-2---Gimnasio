#ifndef ASSOCIATE_H
#define ASSOCIATE_H
#include "person.h"
#include "measurements.h"
#include "instructor.h"
class associate;
class instructor;


class associate : public person
{
private:
	string email;
	int phone;
	string registration_date;
	measurements* measures;
	instructor*  assigned;
public:
	associate();
	associate(string, string, string,int,string, measurements*, instructor*);
	void setAssigned(instructor*);
	void setEmail(string);
	void setPhone(int);
	void setMeasures(measurements*);
	void setRegistrationDate(string);
	string getEmail();
	int getPhone();
	measurements* getMeasures();
	instructor* getAssigned();
	string getRegistrationDate();
	string toString();
	~associate();
};

#endif // !ASSOCIATE_H

