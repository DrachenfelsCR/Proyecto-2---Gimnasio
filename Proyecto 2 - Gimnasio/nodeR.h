
#ifndef NODER_H
#define NODER_H
#include "routine.h"
#include "listR.h"
#include "associate.h"
class associate;
class listR;
class nodeR;
class routine;
class nodeR
{
private:
	routine* routines;
	nodeR* next;

public:
	nodeR(routine*, nodeR*);
	void setRoutines(routine*);
	routine* getRoutines();
	void setNext(nodeR*);
	nodeR* getNext();
	string toString();
	~nodeR();

};

#endif // !NODER_H
