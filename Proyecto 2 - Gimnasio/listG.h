#ifndef LISTA_G
#define LISTA_G
#include "nodeG.h"
#include "groupClass.h"

class listG
{
private:
	nodeG* first;
	nodeG* current;
	ifstream input;
	ofstream output;
public:
	listG();
	~listG();
	void save(string);
	void insertFirst(groupClass*);
	groupClass* searchAndGet(int);
	string toString();
	int countNodes();
};

#endif // !LISTA_G