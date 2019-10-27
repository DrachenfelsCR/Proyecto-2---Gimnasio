#include "roomArray.h"

roomArray::roomArray()
{
	this->the_rooms = new room*[5];
	this->the_rooms[0]->setName('A');
	this->the_rooms[1]->setName('B');
	this->the_rooms[2]->setName('C');
	this->the_rooms[3]->setName('D');
	this->the_rooms[4]->setName('E');
}

room* roomArray::getRoom(char name)
{
	for (int i = 0; i < 5; i++)
	{
		if (the_rooms[i]->getName() == name)
			return this->the_rooms[i];
		else
			return NULL;
	}
	return NULL;
}
roomArray::~roomArray()
{
	for (int i = 0; i < 5; i++)
	{
		delete this->the_rooms[i];
	}
	delete[] this->the_rooms;
}