#include "room.h"

room::room(char name, int capacity, schedule* room_schedule)
{
	this->name = name;
	this->capacity = capacity;
	this->room_schedule = room_schedule;
}
void room::setName(char name)
{
	this->name = name;
}

void room::setCapacity(int capacity)
{
	this->capacity = capacity;
}

void room::setSchedule(schedule* room_schedule)
{
	this->room_schedule = room_schedule;
}

char room::getName()
{
	return this->name;
}

int room::getCapacity()
{
	return this->capacity;
}

schedule* room::getSchedule()
{
	return this->room_schedule;
}

room::~room()
{
	delete this->room_schedule;
}