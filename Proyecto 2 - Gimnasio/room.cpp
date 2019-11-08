#include "room.h"
room::room()
{
	this->name = ' ';
	this->capacity = 0;
	this->room_schedule = new schedule();
	list = new listG();
}

room::room(char name, int capacity)
{

	this->name = name;
	this->capacity = capacity;
	this->room_schedule = new schedule();
	this->list = new listG();
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

listG* room::getList()
{
	return list;
}

room::~room()
{
	delete this->room_schedule;
}