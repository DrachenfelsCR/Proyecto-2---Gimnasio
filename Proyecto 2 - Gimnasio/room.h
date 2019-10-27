#ifndef ROOM_H
#define ROOM_H
#include "schedule.h"
#include "groupClass.h"
#include "listG.h"
class room
{
private:
	char name;
	int capacity;
	schedule* room_schedule;
	listG group_list;
public:
	room();
	room(char,int);
	void setName(char);
	void setCapacity(int);
	void setSchedule(schedule*);
	listG getGroupList();
	char getName();
	int getCapacity();
	schedule* getSchedule();
	~room();
};



#endif // !ROOM_H