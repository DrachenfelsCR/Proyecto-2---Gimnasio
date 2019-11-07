#ifndef LIST_R
#define LIST_R
#include "nodeR.h"
#include "routine.h"
#include "associate.h"
#include "time.h"
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
	routine* getRoutine(int);
	void updateRoutines(timeG*);
	int countNodes();
	string toString();
	string toStringVencida();
	bool checkVencida();
	bool searchRoutine(int);
};

#endif // !LIST_R