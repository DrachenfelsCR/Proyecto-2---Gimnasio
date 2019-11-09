#include "measurements.h"

measurements::measurements() {
	this->weight = 0;
	this->height = 0;
	this->body_fat = 0;
	this->body_mass = 0;
	this->date = new timeG();
	this->m_date = "0/0/0";
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

void measurements::setDate(timeG* dat) {
	this->date = dat;
}

void measurements::setMDate(string d) {
	this->m_date = d;
}

timeG* measurements::getDate() {
	return this->date;
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
	delete this->date;
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
		if (calculateBMI()>=18.5 && calculateBMI()<=24.9)
		{
			return "Normal";
		}
		else
		{
			if (calculateBMI()>=25 && calculateBMI()<=29.9)
			{
				return "sobrePeso";
			}
			else
			{
				if (calculateBMI()>=30 && calculateBMI()<=34.9)
				{
					return "Obesidad I";
				}
				else
				{
					if (calculateBMI()>=35 && calculateBMI()<=39.9)
					{
						return "Obesidad II"; 
					}
					else
					{
						if (calculateBMI()>=40 && calculateBMI()<=49.9)
						{
							return "Obesidad III";
						}
						else
						{
							if (calculateBMI()>50)
							{
								return "Obesidad IV";
							}
						}
					}
				}
			}
		}

	}
}

string measurements::toString()
{
	stringstream s;
	s << "\t Fecha: " << m_date << endl; 
	s << "\t Peso : " << weight <<" kg "<< endl;
	s << "\t Altura : " << height <<"m"<< endl;
	s << "\t Porcentaje de Grasa : " << body_fat << "%" << endl;
	s << "\t IMC : " << calculateBMI() << endl;
	s << "\t Estado: " << bmiDescription() << endl;
	return s.str();
}

double measurements::getBodyMass() {
	return this->body_mass;
}