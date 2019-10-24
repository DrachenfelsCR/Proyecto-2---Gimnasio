#ifndef GYM_H
#define GYM_H
#include <iostream>
#include "tools.h"
#include "listA.h"
#include "listI.h"
class gym {
private:
	int opc;
	listA* l1;
	listI* l2;


public:
	gym();
	void inicio();
	void adMenu();
	void controlSistema();
	void manejoClasesGrupales();
	void menuPrincipal();
	void manejoInstructores();
	~gym();






};








#endif