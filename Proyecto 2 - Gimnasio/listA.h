#ifndef LISTA_H
#define LISTA_H
#include "nodeA.h"
#include "associate.h"

class associate;
class nodeI;
class nodeA;
class routine;


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
	routine* searchR(int);
	bool eliminateAssociate(string);
	string toStringVencidas();
	string toString();
	bool checkVen();
	void save(string);
	bool load(listA*, string, int);
};

#endif // !LISTA_H
