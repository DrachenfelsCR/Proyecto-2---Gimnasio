#include "room.h"
room::room()
{
	this->name = ' ';
	this->capacity = 0;
	this->room_schedule = new schedule();
}

room::room(char name, int capacity)
{
	this->name = name;
	this->capacity = capacity;
	this->room_schedule = new schedule();
}
void room::setName(char n)
{
	this->name = n;
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
	return name;
}

int room::getCapacity()
{
	return this->capacity;
}

schedule* room::getSchedule()
{
	return this->room_schedule;
}

listG room::getGroupList()
{
	return this->group_list;
}

room::~room()
{
	delete this->room_schedule;
}