#ifndef NODER_H
#define NODER_H
#include "routine.h"
#include "listR.h"
#include "associate.h"
class associate;
class listR;
class routine;

class nodeR
{
private:
	routine* r;
	nodeR* next;

public:
	nodeR(routine*, nodeR*);
	void setR(routine*);
	routine* getR();
	void setNext(nodeR*);
	nodeR* getNext();
	string toString();
	string toStringVe();
	~nodeR();

};

#endif // !NODER_H
