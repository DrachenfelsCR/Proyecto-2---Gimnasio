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
	void insertFirst(associate*);
	bool searchAssociate(associate*);
	bool eliminateAssociate(associate*);
	string toString();
};

#endif // !LISTA_H
