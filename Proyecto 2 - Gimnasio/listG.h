#ifndef LISTA_G
#define LISTA_G
#include "nodeG.h"
#include "groupClass.h"

class listG
{
private:
	nodeG* first;
	nodeG* current;
public:
	listG();
	~listG();
	void insertFirst(groupClass*);
	groupClass* searchAndGet(string);
	string toString();
	int countNodes();
};

#endif // !LISTA_G