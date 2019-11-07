#ifndef timeG_H
#define timeG_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class timeG {

private:
	int day;
	int month;
	int year;

public:
	timeG(int, int, int);
	timeG();
	~timeG();
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	string toString();
	bool increaseMonth();




};

























#endif