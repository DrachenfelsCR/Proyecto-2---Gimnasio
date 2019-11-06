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
	ifstream finput;
	ofstream foutput;
public:
	listA();
	~listA();
	void insertFirst(associate*);
	bool find(string id);
	associate* searchAndGet(string);
	bool eliminateAssociate(string);
	string toString();
	void save(string);
	bool load(listA*, string );
};

#endif // !LISTA_H
