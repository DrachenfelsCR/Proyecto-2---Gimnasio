#include "tools.h"
#include <string>

char leerCaracter() {
	string line;
	char x;
	while (getline(cin, line) && (line.length() == 0 || line.length() > 1))
		cout << "\t Ingrese solo un caracter..." << endl;
	x = line[0];

	while ((isalpha(x) == 0)) {
		cout << "Dato invalido" << endl;
		while (getline(cin, line) && (line.length() == 0 || line.length() > 1))
			cout << "Ingrese solo un caracter..." << endl;
		x = line[0];
	}
	return x;
}

void imprimirCadena(string cadena) {
	cout << cadena << endl;
}
void imprimirCaracter(char cadena) {
	cout << cadena << endl;
}

string leerCadena() {
	string x;
	cout << "\t";
	getline(cin, x);
	while (x == "")
	{
		cout << "No inserte espacios en blanco" << endl;
		getline(cin, x);
	}
	return x;
}

int leerEntero() {
	int n;
	while (true) {
		cout << "\t";
		if (cin >> n) {
			cin.clear();
			cin.ignore(1024, '\n');
			return n;
		}
		else {
			cerr << "\t Valor incorrecto.. " << endl;
			cin.clear();
			cin.ignore(1024, '\n');
		}
	}

}
double leerDecimal() {
	double n;
	while (true) {
		cout << "\t";
		if (cin >> n) {
			cin.clear();
			cin.ignore(1024, '\n');
			return n;
		}
		else {
			cerr << "\t Valor incorrecto.. " << endl;
			cin.clear();
			cin.ignore(1024, '\n');
		}
	}

}
int leerSeleccion(int mayor) {
	int entrada = 0;
	while (true) {
		cout << "\t";
		if (cin >> entrada) {

			if (entrada <= mayor && entrada != 0) {
				cin.clear();
				cin.ignore(1024, '\n');
				return entrada;
			}
			else {
				cerr << "\t Valor incorrecto.. digite un numero entre 1 y " << mayor << endl;
				cin.clear();
				cin.ignore(1024, '\n');
			}
		}
		else {
			cerr << "\t Valor incorrecto.. digite un numero entre 1 y " << mayor << endl;
			cin.clear();
			cin.ignore(1024, '\n');
		}
	}
}


bool validarHora(string hora)
{
	if ((hora == "6:00") || (hora == "7:00") || (hora == "8:00") || (hora == "9:00") || (hora == "10:00") || (hora == "11:00") || (hora == "12:00") || (hora == "13:00") || (hora == "14:00") || (hora == "15:00") || (hora == "16:00") || (hora == "17:00") || (hora == "18:00") || (hora == "19:00"))
		return true;
	else
		return false;
	
}

int numeroCodigo(string codigo) {
	string numero = "";
	int n = 0;
	int i;
	char caracter = ' ';
	int limite = (codigo.length());
	for (i = 2; i < limite; i++) {
		caracter = codigo[i];
		numero = numero + caracter;
		caracter = ' ';

	}

	n = stoi(numero);
	return n;
}
void limpiaPantalla() {
	system("cls");
}
string menuPrimario() {
	stringstream s;
	s << endl;
	s << "\t ______________________________________________________________" << endl;
	s << "\t|                      Menu Principal                          |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	s << "\t|[1].Ingresar un nuevo Socio                                   |" << endl;
	s << "\t|[2].Ingresar un nuevo instructor                              |" << endl;
	s << "\t|[3].Lista General de socios                                   |" << endl;
	s << "\t|[4].lista General de  instructores                            |" << endl;
	s << "\t|[5].Mejores resultados en perdida de grasa                    |" << endl;
	s << "\t|[6].Instructor con mejores resultados en perdida de grasa     |" << endl;
	s << "\t|[7].Menu instructor                                           |" << endl;
	s << "\t|[8].Menu clases grupales                                      |" << endl;
	s << "\t|[9].Guardar y Salir                                           |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	return s.str();
}
string menuInstructor() {
	stringstream s;
	s << "\t ______________________________________________________________" << endl;
	s << "\t|                    Menu Instructor                           |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	s << "\t|[1].Socios por instructor                                     |" << endl;
	s << "\t|[2].Asignar rutina a socio                                    |" << endl;
	s << "\t|[3].Detalle socio                                             |" << endl;
	s << "\t|[4].Rutinas vencidas por instructor                           |" << endl;
	s << "\t|[5].Detalle rutina especifica                                 |" << endl;
	s << "\t|[6].Registrar nueva medicion socio                            |" << endl;
	s << "\t|[7].Mostrar mediciones de socio                               |" << endl;
	s << "\t|[8].Regresar al menu principal                                |" << endl;
	s << "\t|[9].Regresar al menu de Fecha                                 |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	return s.str();
}


string menuClaseGrupales() {
	stringstream s;
	s << "\t ______________________________________________________________" << endl;
	s << "\t|                  Menu De Clases Grupales                     |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	s << "\t|[1].Creacion de clase grupal                                  |" << endl;
	s << "\t|[2].Visualizacion clase grupal                                |" << endl;
	s << "\t|[3].Matricular socio                                          |" << endl;
	s << "\t|[4].Cargar clases grupales                                    |" << endl;
	s << "\t|[5].Regresar al Menu principal                                |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	return s.str();

}
string menuInicio() {
	stringstream s;
	s << "\t ______________________________________________________________" << endl;
	s << "\t|                Menu de Fecha  (Gimnasio Vital Salud)         |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	s << "\t|[1].Ingrese la fecha actual                                   |" << endl;
	s << "\t|[2].Ingresar al sistema                                       |" << endl;
	s << "\t|[3].Incrementar mes en 1                                      |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	return s.str();
}

int convertirInt(std::string s) {
	std::stringstream r(s);
	int v;
	r >> v;
	return v;
}

double convertirDouble(std::string s) {
	std::stringstream r(s);
	double v;
	r >> v;
	return v;
}
char convertirChar(std::string s) {
	std::stringstream r(s);
	char v;
	r >> v;
	return v;
}

string convertirString(int i) {
	stringstream r(i);
	string v;
	r >> v;
	return v.c_str();
}

string doubleToString(double i) {
	stringstream r;
	r << i;
	return r.str();
}

string validarPartCuerpo(int p)
{
	switch (p)
	{
	case 1:
		return "Pierna";
	case 2:
		return "Pecho";
	case 3:
		return "Espalda";
	case 4:
		return "Hombro";
	case 5:
		return "Triceps";
	case 6:
		return "Biceps";
	case 7:
		return "Trapecio";
	case 8:
		return "Antebrazo";
	default:
		break;
	}
}

bool validarDia(int dia) {
	if (dia < 1 || dia > 31)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool validarMes(int mes) {
	if (mes < 1 || mes > 12)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool validarAnio(int anio) {
	if (anio < 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool verificarAnioRutina(int anioIng, timeG rutina)
{
	if (anioIng < rutina.getYear())
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool verificarMesRutina(int mesIng, timeG rutina)
{
	if (mesIng > rutina.getMonth())
	{
		return false;
	}
	else
	{
		return true;
	}
}

int convertDayToInt(string day)
{
	if (day == "Lunes")
	{
		return 1;
	}
	else if (day == "Martes")
	{
		return 2;
	}
	else if (day == "Miercoles")
	{
		return 3;
	}
	else if (day == "Jueves")
	{
		return 4;
	}
	else if (day == "Viernes")
	{
		return 5;
	}
	else if (day == "Sabado")
	{
		return 6;
	}
}
