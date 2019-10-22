#ifndef NODEI_H
#define NODEI_H
#include "instructor.h"

class nodeI
{
private:
	instructor* instruc;
	nodeI* next;
public:
	nodeI(instructor*, nodeI*);
	void setMember(instructor*);
	instructor* getInstruc();
	void setNext(nodeI*);
	nodeI* getNext();
	string toString();
	~nodeI();


};
#endif // !NODEI_H


