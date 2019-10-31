#ifndef LIST_R
#define LIST_R
#include "nodeR.h"
#include "routine.h"
#include "nodeA.h"
#include "associate.h"
class nodeR;
class nodeA;
class routine;
class associate;
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
