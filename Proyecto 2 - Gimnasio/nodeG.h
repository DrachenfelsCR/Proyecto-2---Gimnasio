#ifndef NODEG_H
#define NODEG_H
#include "groupClass.h"

class nodeG
{
private:
	groupClass* group_class;
	nodeG* next;

public:
	nodeG(groupClass*, nodeG*);
	void setGroupClass(groupClass*);
	groupClass* getGroupClass();
	void setNext(nodeG*);
	nodeG* getNext();
	string toString();
	~nodeG();

};

#endif // !NODEG_H
