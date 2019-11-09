#ifndef ANALIZADORT_H
#define ANALIZADORT_H
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "listI.h"
#include "listA.h"
#include "listG.h"
#include "instructor.h"
using namespace std;

class analizadorT {

private:



public:
	 void cargarListaI(listI*,string);
	 void cargarListaA(listA*, string,int,associate*);
	 void cargarGrupo(listG*,string,associate*,instructor*);
	 instructor* cargarInstructor(string, int);
	 associate* cargarSocio(string, int);

};































#endif