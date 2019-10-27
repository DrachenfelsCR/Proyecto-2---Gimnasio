#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class time {

private:
	int day;
	int month;
	int year;

public:
	time(int = 0, int = 0, int = 0);
	~time();
	int getDay();
	int getMonth();
	int getYear();
	void setDay();
	void setMonth();
	void setYear();
	string toString();




};

























#endif