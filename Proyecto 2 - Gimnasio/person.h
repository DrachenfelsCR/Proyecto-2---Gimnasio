#ifndef PERSON_H
#define PERSON_H
#include <iostream>
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
	~person();
};


#endif // !PERSON_H



