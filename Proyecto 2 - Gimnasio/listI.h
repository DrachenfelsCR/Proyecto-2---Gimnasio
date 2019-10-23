#ifndef LISTI_H
#define LISTI_H
#include "nodeI.h"


class listI {

private:
	nodeI* first;
	nodeI* current;


public:
	listI();
	~listI();
	void insertLast(instructor*);
	string toString();










};


#endif