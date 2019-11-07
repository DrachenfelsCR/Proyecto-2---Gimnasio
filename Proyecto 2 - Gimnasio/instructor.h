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
	int codeI;
public:
	instructor(string,string, listA*,int);
	int getCodeI();
	void setCodeI(int);
	instructor();
	~instructor();
	string toString();
	listA* getLista();
	instructor* recuperar(ifstream&);
	void guardar(ofstream&);
	

};





#endif // !INSTRUCTOR_H
