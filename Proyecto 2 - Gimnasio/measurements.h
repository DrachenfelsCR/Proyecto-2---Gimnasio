#ifndef MEASUREMENTS_H
#define MEASUREMENTS_H
#include <iostream>
#include <string>
#include <sstream>
#include "time.h"
using namespace std;

class measurements
{
private:
	double weight; 
	double height;
	double body_mass;
	double body_fat;
	timeG* date;
	string m_date;
public:
	measurements();
	void setWeight(double);
	void setHeight(double);
	void setBodyMass(double);
	void setBodyFat(double);
	void setDate(timeG*);
	double getWeight();
	double getHeight();
	double getBodyMass();
	double getBodyFat();
	timeG* getDate();
	~measurements();
	double calculateBMI();
	string bmiDescription();
	string toString();
	void setMDate(string);
};


#endif // !MEASUREMENTS_H
