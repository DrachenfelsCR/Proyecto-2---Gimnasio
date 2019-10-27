#include"gym.h"

gym::gym()
{
	l1 = new listA();
	l2 = new listI();
	opc = 0;
}



void gym::inicio() {
	limpiaPantalla();
	imprimirCadena(menuInicio());
	imprimirCadena("\t Seleccione una opcion [1-9]: ");
	opc = leerSeleccion(9);
}
void gym::adMenu()
{
	limpiaPantalla();
	opc = 0;
	do {
		imprimirCadena(menuInicio());
		imprimirCadena("\t Seleccione una opcion [1-5]: ");
		opc = leerSeleccion(5);
		switch (opc)
		{
		case 1:
			menuPrincipal();
			break;
		case 2:

			break;
		case 3:
			break;
		case 4:

		case 5:
			exit(0);
			break;
		}
	} while (true);
}



	void gym::controlSistema() {
		opc = 0;
		int cont = 1;
		inicio();
		switch (opc)
		{
		case 1:
			menuPrincipal();
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			break;
		case 5:
			exit(0);
			break;
		}


	}

void gym::menuPrincipal() {
	{
		limpiaPantalla();
		int x = 0;
		string id;
		int cont = 1;
		opc = 0;
		do {
			associate* a = new associate();
			instructor* t = new instructor();
			imprimirCadena(menuPrimario());
			imprimirCadena("\t Seleccione una opcion [1-9]");
			opc = leerSeleccion(9);
			switch (opc)
			{
			case 1:
				

				limpiaPantalla();
				imprimirCadena("\t Bienvenido Al Sistema De ingreso de Socios \n");
				imprimirCadena("\t Digite el NombreCompleto De la persona");
				a->setFullName(leerCadena());
				imprimirCadena("\t Digite el Numero de ID");
				a->setId(leerCadena());
				imprimirCadena("\t Digite el CorreoElectronico");
				a->setEmail(leerCadena());
				imprimirCadena("\t Digite el numero telefonico");
				a->setPhone(leerEntero());
				imprimirCadena("\t Digite la Fecha de Inscripcion");
				a->setRegistrationDate(leerCadena());
				limpiaPantalla();
				imprimirCadena("\t Digite la cedula del instructor \n");
				imprimirCadena(l2->toString());
				id = leerCadena();
				if (l2->findInstructor(id)==true) {
					l1->insertFirst(a);
					a->setAssigned(l2->searchAndGet(id));
					l2->searchAndGet((id))->getLista()->insertFirst(a);
					imprimirCadena("\t Se ha inscrito el socio de manera correcta en el sistema");
				
				}
				else
				{
					imprimirCadena("\t La cedula ingresada ha sido escrita de manera incorrecta o el instructor no se encuentra en el sistema");
					imprimirCadena("\t No se ha podido inscribir el socio de manera correcta en el sistema");
				}
				break;
			case 2:
				limpiaPantalla();
				imprimirCadena("\t Bienvenido Al Sistema De ingreso de instructores \n");
				imprimirCadena("\t Digite el Nombre Completo De la persona");
				t->setFullName(leerCadena());
				imprimirCadena("\t Digite el ID de la persona");
				t->setId(leerCadena());
				l2->insertLast(t);
				imprimirCadena("Se ha ingresado el instructor al sistema de manera correcta");
				
				break;
			case 3:
				limpiaPantalla();
				imprimirCadena("\t Lista General de socios \n");
				imprimirCadena(l1->toString());
				break;

			case 4:
				limpiaPantalla();
				imprimirCadena("\t Lista General de instructores \n");
				imprimirCadena(l2->toString());
			
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
				exit(9);
				break;
			}
			imprimirCadena("\t Digite 1 para seguir o 2 para volver a menu principal");
			cont = leerSeleccion(2);
			limpiaPantalla();
			if (cont == 2) { adMenu(); }
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
		if (cont == 2) { adMenu(); }
	} while (cont == 1);
}



void gym::manejoInstructores()
{
	limpiaPantalla();
	int x = 0;
	string id;
	string ID;
	int cont = 1;
	opc = 0;
	do {
		measurements* m = new measurements();
		associate* a = new associate();
		instructor* t = new instructor();
		imprimirCadena(menuInstructor());
		imprimirCadena("\t Seleccione una opcion [1-9]");
		opc = leerSeleccion(9);
		switch (opc)
		{
		case 1:
			limpiaPantalla();
			imprimirCadena(l2->toString());
			imprimirCadena("\t Digite el Numero de ID del instructor");
			id = leerCadena();
			while (l2->findInstructor(id)== true) {
					imprimirCadena("Lista de Socios");
					imprimirCadena(l2->searchAndGet(id)->getLista()->toString());
					break;
			}
			imprimirCadena("\t La cedula ingresada ha sido escrita de manera incorrecta o el instructor no se encuentra en el sistema");
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
			limpiaPantalla();
			imprimirCadena(l1->toString());
			imprimirCadena("\t Digite el numero ID del Socio para registrar Sus Mediciones");
			ID = leerCadena();
			if (l1->find(ID) == true) {
				imprimirCadena(l1->searchAndGet(ID)->toString());
				imprimirCadena("\t Digite el Peso del Socio en Kilos");
				m->setWeight(leerDecimal());
				l1->searchAndGet(ID)->setMeasures(m);
				imprimirCadena("\t Digite el Altura del Socio en Kilos");
				m->setHeight(leerDecimal());
				l1->searchAndGet(ID)->setMeasures(m);
				imprimirCadena("\t Digite el La grasa del Socio");
				m->setBodyFat(leerDecimal());
				l1->searchAndGet(ID)->setMeasures(m);
				limpiaPantalla();
				imprimirCadena(l1->searchAndGet(ID)->getMeasures()->toString());
				
				break;
			}
			else {
				imprimirCadena("\t La cedula ingresada ha sido escrita de manera incorrecta o el socio no se encuentra en el sistema");
				break;
			}
		case 7:
			break;
		case 8:
			controlSistema();
			break;
		case 9:
			inicio();
			break;

		}
		imprimirCadena("\t Digite 1 para seguir en el manejo de instructores o 2 para volver atras: ");
		cont = leerSeleccion(2);
		limpiaPantalla();
		if (cont == 2) { adMenu(); }
	} while (cont == 1);
}

gym::~gym()
{
}
