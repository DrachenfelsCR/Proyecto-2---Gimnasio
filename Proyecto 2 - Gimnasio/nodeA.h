#ifndef NODEA_H
#define NODEA_H
#include "associate.h"
using namespace std;
class associate;

class nodeA
{
private:
	associate* member;
	nodeA* next;
public:
	nodeA(associate*, nodeA*);
	void setMember(associate*);
	associate* getMember();
	void setNext(nodeA*);
	nodeA* getNext();
	string toString();
	string toStringPerson();
	string toStringVe();
	~nodeA();


};
#endif // !NODEA_H
