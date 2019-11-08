#include "roomArray.h"

roomArray::roomArray()
{

	the_rooms = new room*[5];
	the_rooms[0] = new room('A', 20);
	the_rooms[1] = new room('B', 20);
	the_rooms[2] = new room('C', 20);
	the_rooms[3] = new room('D', 20);
	the_rooms[4] = new room('E', 20);
}

bool roomArray::searchRoom(char name)
{
	for (int i = 0; i < 5; i++)
	
		if (the_rooms[i]->getName()==name)
			    return true;	
	
	return false;
	
}

room* roomArray::getRoom(char name)
{
	for (int i = 0; i < 5; i++)
	
		if (the_rooms[i]->getName() == name)
			return this->the_rooms[i];
		
		return NULL;
	
	
}

void roomArray::setNames()
{

}

roomArray::~roomArray()
{
	for (int i = 0; i < 5; i++)
	{
		delete this->the_rooms[i];
	}
	delete[] this->the_rooms;
}