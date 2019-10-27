#ifndef GROUPCLASS_H
#define GROUPCLASS_H
#include "associate.h"
#include "instructor.h"
#include "listA.h"

class groupClass
{
private:
	string class_name;
	instructor* tutor;
	string class_code;
	listA class_members;
	char room;
	int quantity;
	string hour;
	string day;

public:
	groupClass();
	groupClass(string, instructor*, string, char, int, string, string);
	void setClassName(string);
	void setTutor(instructor*);
	void setClassCode(string);
	void setRoom(char);
	void setQuantity(int);
	void setHour(string);
	void setDay(int);
	string getClassName();
	instructor* getInstructor();
	string getHour();
	string getClassCode();
	char getRoom();
	int getQuantity();
	string toString();
	~groupClass();


};


#endif // !GROUPCLASS_H
