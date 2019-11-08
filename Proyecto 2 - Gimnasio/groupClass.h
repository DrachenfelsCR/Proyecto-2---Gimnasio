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
	int class_code;
	listA* class_members;
	char room;
	int quantity;
	string hour;
	string day;

public:
	groupClass();
	groupClass(string, instructor*,int, char, int, string, int);
	void setClassName(string);
	void setTutor(instructor*);
	void setClassCode(int);
	void setRoom(char);
	void setQuantity(int);
	void setHour(string);
	void setDay(int);
	string getClassName();
	instructor* getInstructor();
	listA* getListA();
	string getHour();
	string getDay();
	int getClassCode();
	char getRoom();
	int getQuantity();
	string toString();
	void save(ofstream&);
	~groupClass();


};


#endif // !GROUPCLASS_H
