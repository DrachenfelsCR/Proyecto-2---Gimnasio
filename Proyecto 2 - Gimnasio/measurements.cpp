#include "measurements.h"

measurements::measurements() {
	this->weight = 0;
	this->height = 0;
	this->body_fat = 0;
	this->body_mass = 0;
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

double measurements::getBodyMass() {
	return this->body_mass;
}