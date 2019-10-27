#ifndef ROOMARRAY_H
#define ROOMARRAY_H
#include "room.h"

class roomArray
{
private:
	room** the_rooms;
public:
	roomArray();
	bool searchRoom(char);
	room* getRoom(char);
	void setNames();
	~roomArray();

};

#endif // !ROOMARRAY_H

