#ifndef ASSOCIATE_H
#define ASSOCIATE_H
#include "person.h"
#include "measurements.h"

class associate : public person
{
private:
	string email;
	int phone;
	string registration_date;
	measurements measures;
public:
	associate();
	associate(string, string, string,int,string);
	void setEmail(string);
	void setPhone(int);
	void setRegistrationDate(string);
	string getEmail();
	int getPhone();
	string getRegistrationDate();
	string toString();
	~associate();
};

#endif // !ASSOCIATE_H

