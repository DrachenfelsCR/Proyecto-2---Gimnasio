#include "measurements.h"

measurements::measurements() {
	this->weight = 0;
	this->height = 0;
	this->body_fat = 0;
	this->body_mass = 0;
}

measurements::measurements(double weight, double height, double body_mass, double body_fat)
{
	this->weight = weight;
	this->height = height;
	this->body_mass = body_fat;
	this->body_fat = body_fat;
}

void measurements::setWeight(double weight) {
	this->weight = weight;
}

void measurements::setHeight(double height) {
	this->height = height;
}

void measurements::setBodyFat(double body_fat) {
	this->body_fat = body_fat;
}

void measurements::setBodyMass(double body_mass) {
	this->body_mass = body_mass;
}

double measurements::getWeight() {
	return this->weight;
}

double measurements::getHeight() {
	return this->height;
}

double measurements::getBodyFat() {
	return this->body_fat;
}

measurements::~measurements()
{
}

double measurements::calculateBMI()
{
	double bodyMass = 0;
	bodyMass =( (weight) / (height * height));
	return bodyMass;
}

string measurements::bmiDescription()
{
	if (calculateBMI()<18.5)
	{
		return "Bajo de peso";
	}
	else
	{
		if (calculateBMI()<=23.5)
		{
			return "Normal";
		}
	}
}

string measurements::toString()
{
	stringstream s;
	s << "\t Peso : " << weight <<" k "<< endl;
	s << "\t Altura : " << height <<"m"<< endl;
	s << "\t Porcentaje de Grasa : " << body_fat << "%" << endl;
	s << "\t IMC : " << calculateBMI() << endl;
	//s << "\t Estado: " << bmiDescription() << endl;
	return s.str();
}

double measurements::getBodyMass() {
	return this->body_mass;
}