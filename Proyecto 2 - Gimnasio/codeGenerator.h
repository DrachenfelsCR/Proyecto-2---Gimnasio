#ifndef CODEGENERATOR_H
#define CODEGENERATOR_H
#include <iostream>
#include <sstream>
using namespace std;

class codeGen
{
private:
	int last;
public:
	codeGen();
	~codeGen();
	string genCode();
	int genCodeNum();
	int getLast();
};
#endif // !CODEGENERATOR_H