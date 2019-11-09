#ifndef TOOLS_H
#define TOOLS_H

#include<iostream>
#include<string>
#include<sstream>
#include <wchar.h>
#include <locale.h>
#include "time.h"
using namespace std;

void imprimirCadena(string);
void limpiaPantalla();
int leerEntero();
double leerDecimal();
int leerSeleccion(int);
int letraCodigo(string);
void limpiaPantalla();
string leerCadena();
char leerCaracter();
string menuInicio();
string menuPrimario();
string menuClaseGrupales();
string menuInstructor();
bool validarDia(int);
bool validarHora(string);
char convertirChar(string);
int convertirInt(string);
double convertirDouble(string);
bool validarDia(int);
bool validarMes(int);
bool validarAnio(int);
bool verificarAnioRutina(int, timeG);
bool verificarMesRutina(int, timeG);
string convertirString(int);
string validarPartCuerpo(int);
int convertDayToInt(string);
string doubleToString(double);
#endif 


