#ifndef LIST_R
#define LIST_R
#include "nodeR.h"
#include "routine.h"
#include "associate.h"
class associate;
class nodeR;
class nodeA;
class listR
{
private:
	nodeR* first;
	nodeR* current;
public:
	listR();
	~listR();
	void insertFirst(routine*);
	routine* searchAndGet(string);
	int countNodes();
	string toString();
};

#endif // !LIST_R