#ifndef ROOM_H
#define ROOM_H
#include "schedule.h"
#include "groupClass.h"

class room
{
private:
	string name;
	string code;
	int capacity;
	schedule room_schedule;
public:
	room();
	~room();
};



#endif // !ROOM_H
