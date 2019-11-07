#ifndef LISTE_H
#define LISTE_H
#include "nodeE.h"


class listE
{
private:
	nodeE* first;
	nodeE* current;

public:
	listE();
	~listE();
	void insertFirst(exercise*);
	bool find(string);
	string toString(string);
	exercise* getExercise(string);
};

#endif // !LISTE_H