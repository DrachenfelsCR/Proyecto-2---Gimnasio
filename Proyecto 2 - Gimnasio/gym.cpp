#include"gym.h"

gym::gym()
{
	l1 = new listA();
	l2 = new listI();
	l3 = new listR();
	r1 = new roomArray();
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
				imprimirCadena("\t Digite el Correo Electronico");
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
				l2->save("instructor_prueba.txt");
				imprimirCadena("Se ha ingresado el instructor al sistema de manera correcta");
				
				break;
			case 3:
				limpiaPantalla();
				imprimirCadena("\t Lista General de socios \n");
				imprimirCadena(l1->toString());
				break;

			case 4:
				limpiaPantalla();
				l2->recover("instructor_prueba.txt");
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
			if (cont == 2) { menuPrincipal(); }
		} while (cont == 1);
	}
}

void gym::manejoClasesGrupales()
{
	limpiaPantalla();
	int x = 0;
	int day = 0;
	string act;
	string hour;
	string id;
	char rn;
	bool centinel = false;
	char op_aux = ' ';
	int cont = 1;
	opc = 0;
	do {
		imprimirCadena(menuClaseGrupales());
		imprimirCadena("\t Seleccione una opcion [1-4]");
		opc = leerSeleccion(4);
		switch (opc)
		{
		case 1:
			imprimirCadena("Digite el salon deseado (A,B,C,D o E)");
			rn = leerCaracter();
			while (r1->searchRoom(rn) == false)
			{
				imprimirCadena("El salon ingresado no existe o fue ingresado incorrectamente..");
				imprimirCadena("Intente de nuevo o digite x para salir");
				op_aux = leerCaracter();
				if ((op_aux == 'x') || (op_aux == 'X')) {
					break;
				}
			}
			if ((op_aux == 'x') || (op_aux == 'X')) {
				break;
			}
			imprimirCadena(r1->getRoom(rn)->getSchedule()->toString());
			imprimirCadena("\nDesea crear una clase(s/n): ");
				op_aux = leerCaracter();
				if ((op_aux == 's')  || (op_aux == 'S'))
				{
					imprimirCadena("Digite el dia deseado (1 a 6): ");
					day = leerEntero();
					while (validarDia(day) == false)
					{
						imprimirCadena("Ingreso un numero fuera del rango..\n");
						imprimirCadena("Intente de nuevo: ");
						day = leerEntero();
					}
					imprimirCadena("Digite la hora deseada(6:00/19:00):");
					hour = leerCadena();
					while (validarHora(hour) == false)
					{
						imprimirCadena("Ingreso una hora incorrecta..\n");
							imprimirCadena("Intente de nuevo: ");
						hour = leerCadena();
					}
					imprimirCadena("Digite el nombre de la clase");
					act = leerCadena() + "(xxx)";
					if (r1->getRoom(rn)->getSchedule()->insertElement(day, hour,act) == false)
					{
						imprimirCadena("Horario no  disponible");
					}
					else
					{
						limpiaPantalla();
						imprimirCadena("Digita el ID del instructor:");
						id = leerCadena();
						while ( (l2->findInstructor(id) != true) || (id == "salir") ) {
							imprimirCadena("No se encuentra al instructor o digito incorrectamentel el ID..");
							imprimirCadena("Digite el id de nuevo o digite salir si desea volver al menu principal..");
							id = leerCadena();
						}
						imprimirCadena("Esta seguro de ingresar esta clase? (no podra ser removida una vez ingresada):");
						imprimirCadena("Digite 's' para confirmar o cualquier otro caracter para salir..");
						op_aux = leerCaracter();
						if ((op_aux == 's') || (op_aux == 'S'))
						{	
							r1->getRoom(rn)->getSchedule()->insertElement(day, hour, act);
							groupClass* group = new groupClass(act,l2->searchAndGet(id), 666, rn, 20, hour, day);
							r1->getRoom(rn)->getGroupList().insertFirst(group);
							imprimirCadena("Clase agregada exitosamente..\n");
							imprimirCadena(r1->getRoom(rn)->getSchedule()->toString());
						}
						else
						{
							break;
						}
					}
				}
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
		if (cont == 2) { menuPrincipal(); }
	} while (cont == 1);
}



void gym::manejoInstructores()
{
	limpiaPantalla();
	int x = 0;
	string id;
	string ID;
	string c;
	string f;
	int cont = 1;
	opc = 0;
	do {
		measurements* m = new measurements();
		associate* a = new associate();
		instructor* t = new instructor();
		routine* r = new routine();
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
			limpiaPantalla();
			imprimirCadena("\t Lista De socios");
			imprimirCadena(l1->toString());
			c = leerCadena();
			imprimirCadena("\t Digita el Numero de ID del Socio");
			if (l1->find(c) == true)
			{
				limpiaPantalla();
				imprimirCadena(l1->searchAndGet(c)->toString());
				imprimirCadena("\t Digite la fecha para iniciar la Rutina");
				r->setCreationDate(leerCadena());
				imprimirCadena("\t Digite la fecha donde termina la rutina");
				r->setEndingDate(leerCadena());
				imprimirCadena("\t Digite el numero de rutina");
				r->setCode(leerEntero());
				imprimirCadena("\t Digite El objetivo para el Socio");
				r->setObjetive(leerCadena());
				imprimirCadena("\t Digite el nombre del ejercicio ");
				r->setExerciseName(leerCadena());
				l3->insertFirst(r);
				l1->searchAndGet(c)->getListaR()->insertFirst(r);
			}
			else
			{
				imprimirCadena("\t La cedula ingresada ha sido escrita de manera incorrecta o el socio no se encuentra en el sistema");
			}

			break;
		case 3:
			limpiaPantalla();
			imprimirCadena(l1->toString());
			imprimirCadena("\t Digite el ID del socio para ver los Detalles del socio ");
			c = leerCadena();
			imprimirCadena("\t Historial de rutinas");
			imprimirCadena(l1->searchAndGet(c)->getListaR()->toString());
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
				imprimirCadena("\t Digite la Altura del Socio en metros y centimetros");
				m->setHeight(leerDecimal());
				l1->searchAndGet(ID)->setMeasures(m);
				imprimirCadena("\t Digite La grasa del Socio");
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
		if (cont == 2) { menuPrincipal(); }
	} while (cont == 1);
}

gym::~gym()
{
}
