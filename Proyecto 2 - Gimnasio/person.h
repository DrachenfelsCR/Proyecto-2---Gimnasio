#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
class person
{
private:
	string id;
	string full_name;

public:
	person();
	person(string,string);
	void setId(string);
	void setFullName(string);
	string getId();
	string getFullName();
	virtual string toString();
	~person();
};


#endif // !PERSON_H



