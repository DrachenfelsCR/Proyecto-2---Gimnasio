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
	bool searchAssociate(string);
	bool eliminateAssociate(associate*);
	string toString();
};

#endif // !LISTA_H
