#include "tools.h"
#include <string>

string dibujarHospital()
{
	stringstream s;

	return s.str();

}

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
	cout << cadena << endl;;
}
void imprimirCaracter(char cadena) {
	cout << cadena << endl;;
}

string leerCadena() {
	string x;
	cout << "\t";
	getline(cin, x);
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

bool validarDia(int dia) 
{
	if ((dia <= 0) || (dia > 6))
		return false;
		return true;
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
	s << "\t|              Bienvenido al sistema Del Gimnasio              |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	s << "\t|1.Ingresar un nuevo Socio                                     |" << endl;
	s << "\t|2.Ingresar un nuevo instructor                                |" << endl;
	s << "\t|3.Lista General de socios                                     |" << endl;
	s << "\t|4.lista General de  instructores                              |" << endl;
	s << "\t|5.Mejores resultados en perdida de grasa                      |" << endl;
	s << "\t|6.Instructor con mejores resultados en perdida de grasa       |" << endl;
	s << "\t|7.Menu instructor                                             |" << endl;
	s << "\t|8.Menu clases grupales                                        |" << endl;
	s << "\t|9.Salir                                                       |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	return s.str();
}
string menuInstructor() {
	stringstream s;
	s << "\t ______________________________________________________________" << endl;
	s << "\t|                    Menu Instructor                           |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	s << "\t|1.Socios por instructor                                       |" << endl;
	s << "\t|2.Asignar rutina a socio                                      |" << endl;
	s << "\t|3.detalle socio                                               |" << endl;
	s << "\t|4.Rutinas vencidas por instructor                             |" << endl;
	s << "\t|5.Detalle rutina especifica                                   |" << endl;
	s << "\t|6.Registrar nueva medicion socio                              |" << endl;
	s << "\t|7.Mostrar mediciones de socio                                 |" << endl;
	s << "\t|8.Regresar al menu principal                                  |" << endl;
	s << "\t|9.Regresar al menu de Fecha                                   |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	return s.str();
}


string menuClaseGrupales() {
	stringstream s;
	s << "\t ______________________________________________________________" << endl;
	s << "\t|                  Menu De Clases Grupales                     |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	s << "\t|1.Creacion de clase grupal                                    |" << endl;
	s << "\t|2.Visualizacion clase grupal                                  |" << endl;
	s << "\t|3.Matricular socio                                            |" << endl;
	s << "\t|4.Regresar al Menu principal                                  |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	return s.str();

}
string menuInicio() {
	stringstream s;
	s << "\t ______________________________________________________________" << endl;
	s << "\t|             Bienvenido al Gimnasio Vital Salud               |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	s << "\t|1.Ingrese la fecha actual                                     |" << endl;
	s << "\t|______________________________________________________________|" << endl;
	return s.str();
}
