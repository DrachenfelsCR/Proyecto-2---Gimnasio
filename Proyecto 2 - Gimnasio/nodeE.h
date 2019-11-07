#ifndef NODEE_H
#define NODEE_H
#include "exercise.h"
using namespace std;
class exercise;

class nodeE
{
private:
	exercise* ex;
	nodeE* next;
public:
	nodeE(exercise*, nodeE*);
	void setEx(exercise*);
	exercise* getEx();
	void setNext(nodeE*);
	nodeE* getNext();
	string toString(string);
	~nodeE();


};
#endif // !NODEE_H
