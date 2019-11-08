#include"gym.h"


gym::gym()
{
	l1 = new listA();
	l2 = new listI();
	l3 = new listR();
	l4 = new listE();
	r1 = new roomArray();
	lt = new analizadorT();
	ro1 = new routine();
	opc = 0;
	t1 = new timeG();
	e1 = NULL;

}

void gym::timeSetUp() {
	int dia, mes, anio;
	limpiaPantalla();
	imprimirCadena("Digite el dia (ejemplo: 1,2,3,.30)");
	dia = leerEntero(); 
	while (dia < 1 || dia > 31)
	{
		imprimirCadena("(!)El dia debe ser mayor de 0 y menor a 31, intente de nuevo..");
		dia = leerEntero();
	}
	imprimirCadena("Digite el mes (ejemplo: 1,2,..12)");
	mes = leerEntero(); 
	while (mes < 1 || mes > 12)
	{
		imprimirCadena("(!)El mes debe mayor a 0 y menor a 12, intente de nuevo..");
		mes = leerEntero();
	}
	imprimirCadena("Digite el anio (ejemplo: 2019)");
	anio = leerEntero();
	while (anio < 1)
	{
		imprimirCadena("(!)El anio debe ser distinto de 0, intente de nuevo..");
		anio = leerEntero();
	}
	t1->setDay(dia);
	t1->setMonth(mes);
	t1->setYear(anio);
	imprimirCadena("\nFecha ingresada: ");
	imprimirCadena(t1->toString());
	imprimirCadena("Presione <enter> para continuar");
	cin.get();
	controlSistema();
}

void gym::inicio() {
	int opAux = 0;
	limpiaPantalla();
	imprimirCadena(menuInicio());
	imprimirCadena("\t Seleccione una opcion [1-2]: ");
	opAux = leerEntero();
	if (opAux > 2 || opAux < 1)
	{
		imprimirCadena("Digite solo 1 o 2, presione <enter> para intentar de nuevo..");
		cin.get();
		inicio();
	}
	else
	{
		if (t1->getDay() == 0 &&  opAux == 2)
		{
			imprimirCadena("\t(!)Para ingresar al sistema debe existir una fecha ingresada, presione <enter> para reintentar..");
			cin.get();
			inicio();
		}
		else
		{
			opc = opAux;
		}
	}
	
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
			timeSetUp();
			break;
		case 2:
			menuPrincipal();
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
		string fileName = "instructor_prueba.txt";
		int cont = 1;
		opc = 0;
		do {
			associate* a = new associate();
			instructor* t = new instructor();
			imprimirCadena("Fecha: " + t1->toString());
			imprimirCadena(menuPrimario());
			imprimirCadena("\t Seleccione una opcion [1-9]");
			opc = leerSeleccion(9);
			switch (opc)
			{
			case 1:
				

				limpiaPantalla();
				imprimirCadena("\t Bienvenido Al Sistema De ingreso de Socios \n");
				imprimirCadena("\t Digite el Nombre Completo De la persona");
				a->setFullName(leerCadena());
				imprimirCadena("\t Digite el Numero de ID");
				a->setId(leerCadena());
				imprimirCadena("\t Digite el Correo Electronico");
				a->setEmail(leerCadena());
				imprimirCadena("\t Digite el numero telefonico");
				a->setPhone(leerEntero());
				//---
				a->setRegistrationDate(t1->toString());
				imprimirCadena("\tFecha de Inscripcion: " + a->getRegistrationDate());
				cout << "\n";
				//--
				imprimirCadena(l2->toString());
				imprimirCadena("\t Digite la cedula del instructor \n");
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
				lt->cargarListaI(l2,"instructor_prueba.txt");
				imprimirCadena(l2->toString());

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
				l2->save("instructor_prueba.txt");
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
							r1->getRoom(rn)->getGroupList()->insertFirst(group);
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
	int rep, ser;
	string name;
	int x = 0;
	string id;
	string ID;
	string c;
	string f;
	timeG creation;
	timeG end;
	int cont = 1;
	int day, month, year;
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
			if (l2->findInstructor(id) != true) {
				imprimirCadena("\t (!) La cedula ingresada ha sido escrita de manera incorrecta o el instructor no se encuentra en el sistema\n");
				break;
			}
			else
			{
				imprimirCadena("Lista de Socios:\n");
				imprimirCadena(l2->searchAndGet(id)->getLista()->toString());
				break;
			}
			

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
				imprimirCadena("Fecha actual: ");
				imprimirCadena(t1->toString());
				imprimirCadena("\t Digite el anio para iniciar la Rutina:");
				year = leerEntero();
				while (validarAnio(year) == false)
				{
					imprimirCadena("(!)El anio debe ser mayor a 0, intente de nuevo..");
					year = leerEntero();
				}
				while (year < t1->getYear())
				{
					imprimirCadena("(!)El anio ingresado es menor al actual, intente de nuevo..");
					year = leerEntero();
				}
				imprimirCadena("\t Digite el mes para iniciar la rutina:");
				month = leerEntero();
				while (validarMes(month) == false)
				{
					imprimirCadena("(!)El mes debe ser mayor a 0 y menor a 12, intente de nuevo..");
					month = leerEntero();
				}
				while (year == t1->getYear() && month < t1->getMonth())
				{
					imprimirCadena("(!)No se puede ingresar un mes menor en el mismo anio..");
					imprimirCadena("\nIntente de nuevo..");
					month = leerEntero();
					while (validarMes(month) == false)
					{
						imprimirCadena("(!)El mes debe ser mayor a 0 y menor a 12, intente de nuevo..");
						month = leerEntero();
					}
				}
				imprimirCadena("\t Digite el dia para iniciar la rutina:");
				day = leerEntero();
				while (validarDia(day) == false)
				{
					imprimirCadena("(!)El dia debe ser mayor a 0 y menor a 31, intente de nuevo..");
					month = leerEntero();
				}
				while (month == t1->getMonth() && day < t1->getDay())
				{
					imprimirCadena("(!)El dia no puede ser menor que la fecha actual, intente de nuevo..");
					day = leerEntero();
					while (validarDia(day) == false)
					{
						imprimirCadena("(!)El dia debe ser mayor a 0 y menor a 31, intente de nuevo..");
						month = leerEntero();
					}
				}
				creation.setYear(year);
				creation.setMonth(month);
				creation.setDay(day);
				r->setCreationDate(creation);
				imprimirCadena("Fecha ingresada: ");
				imprimirCadena(creation.toString());
				imprimirCadena("\t Digite el anio donde termina la rutina");
				year = leerEntero();
				while (validarAnio(year) == false)
				{
					imprimirCadena("(!)El anio debe ser mayor a 0, intente de nuevo..");
					year = leerEntero();
				}
				while (year < t1->getYear())
				{
					imprimirCadena("(!)El anio ingresado es menor al actual, intente de nuevo..");
					year = leerEntero();
				}
				imprimirCadena("\t Digite el mes donde termina la rutina:");
				month = leerEntero();
				while (validarMes(month) == false)
				{
					imprimirCadena("(!)El mes debe ser mayor a 0 y menor a 12, intente de nuevo..");
					month = leerEntero();
				}
				while (year == t1->getYear() && month < t1->getMonth())
				{
					imprimirCadena("(!)No se puede ingresar un mes menor en el mismo anio..");
					imprimirCadena("\nIntente de nuevo..");
					month = leerEntero();
					while (validarMes(month) == false)
					{
						imprimirCadena("(!)El mes debe ser mayor a 0 y menor a 12, intente de nuevo..");
						month = leerEntero();
					}
				}
				imprimirCadena("\t Digite el dia para finalizar la rutina:");
				day = leerEntero();
				while (validarDia(day) == false)
				{
					imprimirCadena("(!)El dia debe ser mayor a 0 y menor a 31, intente de nuevo..");
					month = leerEntero();
				}
				while (month == t1->getMonth() && day < t1->getDay() && year <= t1->getYear())
				{
					imprimirCadena("(!)El dia no puede ser menor que la fecha actual, intente de nuevo..");
					day = leerEntero();
					while (validarDia(day) == false)
					{
						imprimirCadena("(!)El dia debe ser mayor a 0 y menor a 31, intente de nuevo..");
						month = leerEntero();
					}
				}
				end.setYear(year);
				end.setMonth(month);
				end.setDay(day);
				r->setEndingDate(end);
				imprimirCadena("\t Digite el numero de rutina");
				r->setCode(leerEntero());
				imprimirCadena("\t Digite El objetivo para el Socio");
				r->setObjetive(leerCadena());
				imprimirCadena("\t Parte del cuerpo((1-pierna, 2-pecho, 3-espalda, 4-hombro, 5-triceps, 6-biceps, 7-trapecio, 8-antebrazo): ");
				x = leerEntero();
				while (x > 8 || x < 1)
				{
					imprimirCadena("Debe digitar un numero del 1 al 8, intente de nuevo..");
					x = leerEntero();
				}
				imprimirCadena("\t Digite el nombre del ejercicio ");
				name = leerCadena();
				imprimirCadena("\t Digite el numero de series deseadas");
				ser = leerEntero();
				imprimirCadena("\t Digite el numero de repeticiones deseadas");
				rep = leerEntero();
				e1 = new exercise(validarPartCuerpo(x), ser, rep, name);
				r->getListE()->insertFirst(e1);
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
			if (l1->searchAndGet(c) == NULL)
			{
				imprimirCadena("La lista se encuentra vacia o digito incorrectamente la cedula, no es posible obtener las rutinas..\n");
				break;
			}
			limpiaPantalla();
			imprimirCadena(l1->searchAndGet(c)->toString());
			imprimirCadena("--------------------");
			imprimirCadena("Historial de rutinas");
			imprimirCadena("--------------------");
			l1->searchAndGet(c)->getListaR()->updateRoutines(t1);
			imprimirCadena(l1->searchAndGet(c)->getListaR()->toString());
			
			break;


		case 4:
			limpiaPantalla();
			imprimirCadena(l2->toString());
			imprimirCadena("\t Digite el ID del instructor: ");
			c = leerCadena();
			if (l2->searchAndGet(c) == NULL)
			{
				imprimirCadena("La lista se encuentra vacia o digito incorrectamente la cedula..");
				break;
			}
			imprimirCadena("Nombre del instructor: " + l2->searchAndGet(c)->getFullName());
			cout << "\n";
			imprimirCadena("Rutinas vencidas:\n");
			imprimirCadena("Nombre Socio\tID Rutina\t Fecha Vencimiento\n");
			if (l2->searchAndGet(c)->getLista()->checkVen())
			{
				imprimirCadena(l2->searchAndGet(c)->getLista()->toStringVencidas());
			}
			
			break;
		case 5:
			imprimirCadena("Digita ID rutina:");
			x = leerEntero();
			if (l1->searchR(x) == NULL)
			{
				imprimirCadena("Esta rutina no ha sido encontrada o no existe..");
				break;
			}
			limpiaPantalla();
			imprimirCadena(l1->searchByRoutine(x)->toStringR());
			imprimirCadena(l1->searchR(x)->toStringEsp());
			cout << "Objetivo: ";	
			imprimirCadena(l1->searchR(x)->getObjective());
			imprimirCadena(l1->searchR(x)->toStringFull());
			
			break;
		case 6:
			limpiaPantalla();
			imprimirCadena(l1->toString());
			imprimirCadena("\t Digite el numero ID del Socio para registrar Sus Mediciones");
			ID = leerCadena();
			if (l1->find(ID) == true) {
				limpiaPantalla();
				imprimirCadena(l1->searchAndGet(ID)->toString());
				imprimirCadena("\t Digite el Peso del Socio en Kilos");
				m->setWeight(leerDecimal());
				//l1->searchAndGet(ID)->setMeasures(m);
				imprimirCadena("\t Digite la Altura del Socio en metros y centimetros");
				m->setHeight(leerDecimal());
				//l1->searchAndGet(ID)->setMeasures(m);
				imprimirCadena("\t Digite La grasa del Socio");
				m->setBodyFat(leerDecimal());
				//l1->searchAndGet(ID)->setMeasures(m);
				limpiaPantalla();
				m->setDate(t1);
				l1->searchAndGet(ID)->getListaM()->insertLast(m);
				imprimirCadena(l1->searchAndGet(ID)->getListaM()->toString());			
				break;
			}
			else {
				imprimirCadena("\t La cedula ingresada ha sido escrita de manera incorrecta o el socio no se encuentra en el sistema");
				break;
			}
		case 7:
			limpiaPantalla();
			imprimirCadena(l1->toString());
			imprimirCadena("\t Digite el numero ID del Socio: ");
			ID = leerCadena();
			if (l1->find(ID) == true) 
			{
				limpiaPantalla();
				cout << "\tNombre del socio: ";
				imprimirCadena(l1->searchAndGet(ID)->getFullName());
				imprimirCadena(l1->searchAndGet(ID)->getListaM()->toString());
			}
			else
			{
				imprimirCadena("\t La cedula ingresada ha sido escrita de manera incorrecta o el socio no se encuentra en el sistema");
				break;
			}
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
