#ifndef LISTI_H
#define LISTI_H
#include "nodeI.h"

class listI
{
private:
	nodeI* first;
	nodeI* current;
public:
	listI();
	~listI();
	bool insertFirst(instructor*);
	instructor* searchAndGet(string);
	string toString();
};

#endif // !LISTA_H
