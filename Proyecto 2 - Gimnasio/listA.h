#ifndef LISTA_H
#define LISTA_H
#include "nodeA.h"
#include "associate.h"

class associate;
class nodeI;
class nodeA;


class listA
{
private:
	nodeA* first;
	nodeA* current;
public:
	listA();
	~listA();
	void insertFirst(associate*);
	associate* searchAndGet(string);
	bool eliminateAssociate(string);
	string toString();
};

#endif // !LISTA_H
