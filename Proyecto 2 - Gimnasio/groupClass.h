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
public:
	groupClass();
	groupClass(string, instructor*, string, char, int);
	void setClassName(string);
	void setTutor(instructor*);
	void setClassCode(string);
	void setRoom(char);
	void setQuantity(int);
	string getClassName();
	instructor* getInstructor();
	string getClassCode();
	char getRoom();
	int getQuantity();
	string toString();
	~groupClass();


};


#endif // !GROUPCLASS_H
