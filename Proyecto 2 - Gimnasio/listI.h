#ifndef LISTI_H
#define LISTI_H
#include "nodeI.h"
#include "associate.h"

class listI
{
private:
	nodeI* first;
	nodeI* current;
	ifstream input;
	ofstream output;
public:
	listI();
	~listI();
	void insertLast(instructor*);
	string toString();
	void save(string);
	bool recover(string);
	void swap(nodeI*, nodeI*);
	void bubbleSort();
	bool findInstructor(string id);
	instructor* searchAndGet(string id);
	nodeI* getFirst();
};

#endif // !LISTA_H
