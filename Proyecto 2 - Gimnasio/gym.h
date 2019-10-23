#ifndef GYM_H
#define GYM_H
#include <iostream>
#include "tools.h"
#include "listA.h"
class gym {
private:
	int opc;
	listA* l1;


public:
	gym();
	void inicio();
	void adMenu();
	void controlSistema();
	void manejoClasesGrupales();
	void manejoInstructores();
	~gym();






};








#endif