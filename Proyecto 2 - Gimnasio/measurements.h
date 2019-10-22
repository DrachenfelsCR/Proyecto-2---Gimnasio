#ifndef MEASUREMENTS_H
#define MEASUREMENTS_H
#include <iostream>
#include <string>
using namespace std;

class measurements
{
private:
	double weight; 
	double height;
	double body_mass;
	double body_fat;

public:
	measurements();
	void setWeight(double);
	void setHeight(double);
	void setBodyMass(double);
	void setBodyFat(double);
	double getWeight();
	double getHeight();
	double getBodyMass();
	double getBodyFat();
	~measurements();

};


#endif // !MEASUREMENTS_H
