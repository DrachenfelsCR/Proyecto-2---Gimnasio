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
	string toStringSmall();
	string toStringFat();
	bool checkVen();
	void save(string);
	bool load(listA*, string, int);
	void swap(nodeA*, nodeA*);
	void bubbleSort();
	double fatLossTotal();
	associate* searchByRoutine(int ccode);
	int countNodes();
};

#endif // !LISTA_H
