#ifndef LISTA_H
#define LISTA_H
#include "nodeA.h"

class listA
{
private:
	nodeA* first;
	nodeA* current;
public:
	listA();
	~listA();
	bool insertFirst(associate*);
	associate* searchAndGet(string);
	bool eliminateAssociate(string);
	string toString();
};

#endif // !LISTA_H
