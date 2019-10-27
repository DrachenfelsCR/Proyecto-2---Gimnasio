#ifndef ROOM_H
#define ROOM_H
#include "schedule.h"
#include "groupClass.h"

class room
{
private:
	char name;
	int capacity;
	schedule* room_schedule;
public:
	room(char,int,schedule*);
	void setName(char);
	void setCapacity(int);
	void setSchedule(schedule*);
	char getName();
	int getCapacity();
	schedule* getSchedule();
	~room();
};



#endif // !ROOM_H
