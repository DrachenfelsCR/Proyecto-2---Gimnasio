#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "person.h"
#include "listA.h"
#include <iostream>
using namespace std;
class listA;
class instructor : public person
{
private:
	listA* lista;
public:
	instructor(string,string, listA*);
	instructor();
	~instructor();
	string toString();
	listA* getLista();
	instructor* recuperar(ifstream&);
	void guardar(ofstream&);
	

};





#endif // !INSTRUCTOR_H
