#include"gym.h"

gym::gym()
{
	l1 = new listA();
	opc = 0;
}



void gym::inicio() {
	limpiaPantalla();
	imprimirCadena(menuInicio());
	imprimirCadena("\t Seleccione una opcion [1-9]: ");
	opc = leerSeleccion(9);
}
void gym::controlSistema() {
	{
		associate* a = new associate();
		limpiaPantalla();
		int x = 0;
		int cont = 1;
		opc = 0;
		do {
			imprimirCadena(menuInicio());
			imprimirCadena("\t Seleccione una opcion [1-9]");
			opc = leerSeleccion(9);
			switch (opc)
			{
			case 1:
				

				limpiaPantalla();
				imprimirCadena("\t Bienvenido Al Sistema De Socios");
				imprimirCadena("\t Digite el NombreCompleto De la persona");
				a->setFullName(leerCadena());
				l1->insertFirst(a);
				

		
				break;
			case 2:
				break;
			case 3:
				imprimirCadena(l1->toString());
				break;

			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				manejoInstructores();
				break;
			case 8:
				manejoClasesGrupales();
				break;
			case 9:
				break;
			}
			imprimirCadena("\t Digite 1 para seguir");
			cont = leerSeleccion(2);
			limpiaPantalla();
			if (cont == 2) {}
		} while (cont == 1);
	}
}

void gym::manejoClasesGrupales()
{
	limpiaPantalla();
	int x = 0;
	int cont = 1;
	opc = 0;
	do {
		imprimirCadena(menuClaseGrupales());
		imprimirCadena("\t Seleccione una opcion [1-4]");
		opc = leerSeleccion(4);
		switch (opc)
		{
		case 1:

			break;

		case 2:

			break;
		case 3:

			break;

		case 4:
			controlSistema();
			break;
		}
		imprimirCadena("\t Digite 1 para seguir en manejo de clases grupales o 2 para volver atras: ");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { controlSistema(); }
	} while (cont == 1);
}

void gym::manejoInstructores()
{
	limpiaPantalla();
	int x = 0;
	int cont = 1;
	opc = 0;
	do {
		imprimirCadena(menuInstructor());
		imprimirCadena("\t Seleccione una opcion [1-8]");
		opc = leerSeleccion(8);
		switch (opc)
		{
		case 1:

			break;

		case 2:

			break;
		case 3:

			break;

		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			controlSistema();
			break;

		}
		imprimirCadena("\t Digite 1 para seguir en el manejo de instructores o 2 para volver atras: ");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { controlSistema(); }
	} while (cont == 1);
}

gym::~gym()
{
}
