#ifndef ROUTINE_H
#define ROUTINE_H

#include <string>
#include <sstream>
using namespace std;

class routine
{
private:
	int code;
	string creation_date;
	string ending_date;
	string objetive;
	string instructions[4];
public:
	routine();
	~routine();
	void setCode(int);
	void setCreationDate(string);
	void setEndingDate(string);
	void setObjetive(string);
	void setInstructions(string,string,string,string);
	int getCode();
	string getCreationDate();
	string getEndingDate();
	string getObjective();
	string toString();
};




#endif // !ROUTINE_H


