#ifndef NODEM_H
#define NODEM_H
#include "measurements.h"
using namespace std;
class associate;

class nodeM{
private:
	measurements* measures;
	nodeM* next;
public:
	nodeM(measurements*, nodeM*);
	void setMeasures(measurements*);
	measurements* getMeasures();
	void setNext(nodeM*);
	nodeM* getNext();
	string toString();
	~nodeM();

};
#endif // !NODEM_H
