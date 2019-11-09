#include"gym.h"


gym::gym()
{
	l1 = new listA();
	l2 = new listI();
	l3 = new listR();
	l4 = new listE();
	r1 = new roomArray();
	lt = new analizadorT();
	l5 = new listG();
	l6 = new listM();
	ro1 = new routine();
	opc = 0;
	t1 = new timeG();
	e1 = NULL;
	c1 = new codeGen();
	c2 = new codeGen();
}

void gym::timeSetUp() {
	int dia, mes, anio;
	if (t1->getDay() != 0)
	{
		imprimirCadena("Ya ha sido ingresado una fecha");
		system("pause");
		controlSistema();
	}
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
	imprimirCadena("Fecha: " + t1->toString());
	imprimirCadena(menuInicio());
	imprimirCadena("\t Seleccione una opcion [1-3]: ");
	opAux = leerEntero();
	if (opAux > 3 || opAux < 1)
	{
		imprimirCadena("Digite solo 1 o 3, presione <enter> para intentar de nuevo..");
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
		imprimirCadena("\t Seleccione una opcion [1-3]: ");
		opc = leerSeleccion(5);
		switch (opc)
		{
		case 1:
			
			break;
		case 2:
			menuPrincipal();
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

void gym::increaseMonth()
{
	char opinc;
	imprimirCadena("Desea continuar (S/N)");
	opinc = leerCaracter();
	 if ((opinc == 'S' || opinc == 's'))
	{

		t1->increaseMonth();
		imprimirCadena("Fecha actualizada: " + t1->toString());
		imprimirCadena("Presione <enter>");
		system("pause");
		controlSistema();
	}
	else if((opinc == 'N' || opinc == 'n'))
	{
		controlSistema();
	}
	else
	 {
		 imprimirCadena("Digito algo distinto de S o N");
		 system("pause");
		 controlSistema();
	 }
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
			increaseMonth();
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
		string opAux;
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
				if (l2->getFirst() == NULL) {
					imprimirCadena("Aun no ha ingresado socios al sistema..");
					break;
				}
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
				imprimirCadena("\t Digite la cedula del instructor que le asignara al socio \n");
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
				imprimirCadena("\t Desea ingresar un nuevo instructor? (S/N)");
				opAux = leerCadena();
				while ((opAux != "S" && opAux != "s") && (opAux != "N" && opAux != "n"))
				{
					imprimirCadena("Digite S o N..");
					opAux = leerCadena();
				}
				if ((opAux == "N") || (opAux == "n"))
				{
					break;
				}
				imprimirCadena("\t Digite el Nombre Completo De la persona");
				t->setFullName(leerCadena());
				imprimirCadena("\t Digite el ID de la persona");
				t->setId(leerCadena());
				t->setCodeI(0);
				l2->insertLast(t);
				imprimirCadena("Se ha ingresado el instructor al sistema de manera correcta");
				
				break;
			case 3:
				limpiaPantalla();
				imprimirCadena("\t [ Lista General de socios ] \n");
				
				imprimirCadena(l1->toString());
				break;

			case 4:
				limpiaPantalla();			
				imprimirCadena("\t[ Lista General de instructores ] \n");
				imprimirCadena(l2->toString());
				break;
			case 5:
				limpiaPantalla();
				imprimirCadena("\t[ Mejores Resultados Perdida de Grasa ]\n");
				l1->bubbleSort();
				imprimirCadena(l1->toStringFat());
				break;
			case 6:
				limpiaPantalla();
				imprimirCadena("\t[ Instructor con mejores resultados ]\n");
				l2->bubbleSort();
				imprimirCadena(l2->getFirst()->getTutor()->getFullName());
				imprimirCadena(doubleToString(l2->getFirst()->getTutor()->getLista()->fatLossTotal()) + "% de perdida de grasa promedio en sus socios");
				break;
			case 7:
				manejoInstructores();
				break;
			case 8:
				manejoClasesGrupales();
				break;
			case 9:
				l1->save("Socios.txt");
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
	associate* a = new associate();
	instructor* t = new instructor();
	limpiaPantalla();
	int x = 0;
	int day = 0;
	string act,act2;
	int auxCode;
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
		opc = leerSeleccion(5);
		switch (opc)
		{
		case 1:
			imprimirCadena("Digite el salon deseado (A,B,C,D o E)");
			rn = leerCaracter();
			if (r1->searchRoom(rn) == false)
			{
				imprimirCadena("El salon ingresado no existe o fue ingresado incorrectamente..");
				break;
			}
			imprimirCadena(r1->getRoom(rn)->getSchedule()->toString());
			imprimirCadena("\nDesea crear una clase(s/n): ");
				op_aux = leerCaracter();
				if ((op_aux == 's')  || (op_aux == 'S'))
				{
					limpiaPantalla();
					imprimirCadena(l2->toString());
					imprimirCadena("-----------------------------------------------------");
					imprimirCadena("Digite el ID del instructor que asignara a la clase:");
					id = leerCadena();
					if (l2->findInstructor(id) != true) {
						imprimirCadena("No se encuentra al instructor o digito incorrectamentel el ID..");
						break;
					}
					else if (l2->searchAndGet(id)->getCodeI() != 0) {
						imprimirCadena("El instructor ya tiene una clase asignada..");
						break;
					}
					limpiaPantalla();
					imprimirCadena(r1->getRoom(rn)->getSchedule()->toString());
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
					act2 = leerCadena();
					act = act2 + c1->genCode();
					if (r1->getRoom(rn)->getSchedule()->insertElement(day, hour,act) == false)
					{
						imprimirCadena("Horario no  disponible");
					}
					else
					{
						imprimirCadena("Esta seguro de ingresar esta clase? (no podra ser removida una vez ingresada):");
						imprimirCadena("Digite 's' para confirmar o cualquier otro caracter para salir..");
						op_aux = leerCaracter();
						if ((op_aux == 's') || (op_aux == 'S'))
						{	
							r1->getRoom(rn)->getSchedule()->insertElement(day, hour, act);
							l2->searchAndGet(id)->setCodeI(c1->getLast());
							groupClass* group = new groupClass(act2,l2->searchAndGet(id), c1->getLast(), rn, 20, hour, day);
							l5->insertFirst(group);
							r1->getRoom(rn)->getList()->insertFirst(group);
							t->setCodeI(666);
							imprimirCadena("Clase agregada exitosamente..\n");
							imprimirCadena(r1->getRoom(rn)->getSchedule()->toString());
							l5->save("Grupos.txt");
						}
						else
						{
							break;
						}
					}
				}
			break;

		case 2:
			imprimirCadena("Digite el ID de la clase: ");
			auxCode = leerEntero();
			if (l5->searchAndGet(auxCode) == NULL)
			{
				imprimirCadena("El ID de la clase ingresada no se encuentra o fue ingresado incorrectamente..");
				break;
			}
			limpiaPantalla();
			imprimirCadena(l5->searchAndGet(auxCode)->toString());
			imprimirCadena("\nSocios matriculados: ");
			imprimirCadena(l5->searchAndGet(auxCode)->getListA()->toStringSmall());
			break;
		case 3:
			imprimirCadena("Digite el ID de la clase: ");
			auxCode = leerEntero();
			if (l5->searchAndGet(auxCode) == NULL)
			{
				imprimirCadena("El ID de la clase ingresada no se encuentra o fue ingresado incorrectamente..");
				break;
			}
			limpiaPantalla();
			if (l5->searchAndGet(auxCode)->getListA()->countNodes() >= 20)
			{
				imprimirCadena("La clase se encuentra llena..");
				break;
			}
			imprimirCadena(l5->searchAndGet(auxCode)->toString());
			imprimirCadena("-------------------------------------");
			imprimirCadena(l1->toString());
			imprimirCadena("-------------------------------------");
			imprimirCadena("\nDigite el ID del socio: ");
			id = leerCadena();
			if (l1->find(id) != true) {
				imprimirCadena("\t (!) La cedula ingresada ha sido escrita de manera incorrecta o el instructor no se encuentra en el sistema\n");
				break;
			}
			else if(l1->searchAndGet(id)->getClassCode() != 0)
			{
				imprimirCadena("El socio ya fue matriculado en otra clase..");
				break;
			}
			else
			{		
				l1->searchAndGet(id)->setClassCode(auxCode);
				l5->searchAndGet(auxCode)->getListA()->insertFirst(l1->searchAndGet(id));
				imprimirCadena("Socio matriculado exitosamente");
				break;
			}
		case 4:
			if (l5->countNodes() != 0)
			{
				imprimirCadena("Parece que la lista ya fue cargada o ha ingresado clases antes de cargar la lista de clases..");
				break;
			}
			else
			{
				lt->cargarGrupo(l5, "Grupos.txt", a, t);
				imprimirCadena("Clases cargadas exitosamente!");
				break;
			}		
		case 5:
			menuPrincipal();
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
	double me1, me2, me3;
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
				limpiaPantalla();
				imprimirCadena("Lista de Socios:\n");
				imprimirCadena(l2->searchAndGet(id)->getLista()->toString());
				break;
			}
			

		case 2:
			limpiaPantalla();
			imprimirCadena("\t Lista De socios");
			imprimirCadena(l1->toString());
			imprimirCadena("\t Digita el Numero de ID del Socio");
			c = leerCadena();
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
				r->setCode(c2->genCodeNum());
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
			l2->searchAndGet(c)->getLista();
			limpiaPantalla();
			imprimirCadena("Nombre del instructor: " + l2->searchAndGet(c)->getFullName());
			cout << "\n";
			imprimirCadena("Rutinas vencidas:\n");
			imprimirCadena("Nombre Socio\t ID Rutina\t Fecha Vencimiento\n");
			if (l2->searchAndGet(c)->getLista()->checkVen())
			{
				imprimirCadena(l2->searchAndGet(c)->getLista()->toStringVencidas());
				break;
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
				//-----------------------------------------------------
				imprimirCadena("\t Digite el Peso del Socio en Kilos");
				me1 = leerDecimal();
				while (me1 <= 0 )
				{
					imprimirCadena("El peso debe ser un valor mayor a 0..");
					me1 = leerDecimal();
				}
				m->setWeight(me1);
				//-----------------------------------------------------
				imprimirCadena("\t Digite la Altura del Socio en metros y centimetros");
				me2 = leerDecimal();
				while (me2 <= 0)
				{
					imprimirCadena("La altura debe ser un valor mayor a 0..");
					me2 = leerDecimal();
				}
				m->setHeight(me2);
				//-----------------------------------------------------
				imprimirCadena("\t Digite La grasa del Socio");
				me3 = leerDecimal();
				while (me3 <= 0)
				{
					imprimirCadena("La grasa debe ser porcentaje mayor a 0..");
					me3 = leerDecimal();
				}
				m->setBodyFat(me3);
				//-----------------------------------------------------
				limpiaPantalla();
				m->setMDate(t1->toString());
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
				break;
			}
			else
			{
				imprimirCadena("\t La cedula ingresada ha sido escrita de manera incorrecta o el socio no se encuentra en el sistema");
				break;
			}
		case 8:
			menuPrincipal();
			break;
		case 9:
			controlSistema();
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
