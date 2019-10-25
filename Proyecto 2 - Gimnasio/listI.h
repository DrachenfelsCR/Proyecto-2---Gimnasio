#ifndef LISTI_H
#define LISTI_H
#include "nodeI.h"
#include "associate.h"
class listI
{
private:
	nodeI* first;
	nodeI* current;
public:
	listI();
	~listI();
	void insertLast(instructor*);
	string toString();
	bool findInstructor(string id);
};

#endif // !LISTA_H
