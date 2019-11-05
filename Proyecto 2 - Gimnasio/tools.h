#ifndef TOOLS_H
#define TOOLS_H

#include<iostream>
#include<string>
#include<sstream>
#include <wchar.h>
#include <locale.h>
using namespace std;

void imprimirCadena(string);
void limpiaPantalla();
int leerEntero();
double leerDecimal();
int leerSeleccion(int);
int letraCodigo(string);
void limpiaPantalla();
string leerCadena();
string dibujarHospital();
char leerCaracter();
string menuInicio();
string menuPrimario();
string menuClaseGrupales();
string menuInstructor();
bool validarDia(int);
bool validarHora(string);
int convertirInt(string);
double convertirDouble(string);





#endif 


