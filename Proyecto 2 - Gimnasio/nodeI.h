#ifndef NODEI_H
#define NODEI_H
#include "instructor.h"
using namespace std;

class instructor;
class nodeI;


class nodeI
{
private:
	instructor* tutor;
	nodeI* next;
public:
	nodeI(instructor*, nodeI*);
	void setTutor(instructor*);
	instructor* getTutor();
	void setNext(nodeI*);
	nodeI* getNext();
	string toString();
	~nodeI();


};
#endif // !NODEA_H

