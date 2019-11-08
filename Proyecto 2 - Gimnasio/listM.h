#ifndef LISTM_H
#define LISTM_H
#include "nodeM.h"
#include "associate.h"

class listM
{
private:
	nodeM* first;
	nodeM* current;
public:
	listM();
	~listM();
	void insertLast(measurements*);
	double fatLoss();
	string toString();
};

#endif // !LISTA_H
