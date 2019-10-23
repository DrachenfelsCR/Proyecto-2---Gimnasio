#ifndef LISTI_H
#define LISTI_H
#include "nodeI.h"
using namespace std;


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