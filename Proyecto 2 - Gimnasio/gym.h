#ifndef GYM_H
#define GYM_H
#include <iostream>
#include "tools.h"
#include "listA.h"
#include "listI.h"
#include "analizadorT.h"
#include "listG.h"
#include "listR.h"
#include "roomArray.h"
#include "time.h"
#include "listE.h"
#include "listM.h"
#include "codeGenerator.h"
class gym {
private:
	int opc;
	analizadorT* lt;
	listA* l1;
	listI* l2;
	listR* l3;
	listE* l4;
	listG* l5;
	listM* l6;
	routine* ro1;
	roomArray* r1;
	timeG* t1;
	exercise* e1;
	codeGen* c1;
	codeGen* c2;
public:
	gym();
	void inicio();
	void adMenu();
	void timeSetUp();
	void controlSistema();
	void manejoClasesGrupales();
	void menuPrincipal();
	void manejoInstructores();
	void increaseMonth();
	~gym();






};








#endif