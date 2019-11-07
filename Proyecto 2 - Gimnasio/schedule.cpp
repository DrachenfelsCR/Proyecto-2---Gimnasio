#include "schedule.h"

schedule::schedule()
{
	for (int i = 1; i < 15; i++)
		for (int j = 0; j < 7; j++)
			this->the_schedule[i][j] = "";
	this->the_schedule[0][0] = "      ";
	this->the_schedule[0][1] = "  Lunes(1) |\t";
	this->the_schedule[0][2] = " Martes(2) |";
	this->the_schedule[0][3] = " Miercoles(3) |";
	this->the_schedule[0][4] = "  Jueves(4) |";
	this->the_schedule[0][5] = " Viernes(5) |\t";
	this->the_schedule[0][6] = " Sabado(6) |";
	//----------------------------------
	this->the_schedule[1][0] = "6:00 | ";
	this->the_schedule[2][0] = "7:00 | ";
	this->the_schedule[3][0] = "8:00 | ";
	this->the_schedule[4][0] = "9:00 | ";
	this->the_schedule[5][0] = "10:00| ";
	this->the_schedule[6][0] = "11:00| ";
	this->the_schedule[7][0] = "12:00| ";
	this->the_schedule[8][0] = "13:00| ";
	this->the_schedule[9][0] = "14:00| ";
	this->the_schedule[10][0] = "15:00| ";
	this->the_schedule[11][0] = "16:00| ";
	this->the_schedule[12][0] = "17:00| ";
	this->the_schedule[13][0] = "18:00| ";
	this->the_schedule[14][0] = "19:00| ";
}

string schedule::toString() {
	stringstream s;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 7; j++)
			if (i == 0) {
				s << setw(10) << this->the_schedule[i][j];
			}
			else if (j == 0)
			{
				s << this->the_schedule[i][j];
			}
			else {
				s << setw(14) << this->the_schedule[i][j];
			}
		s << endl;
	}
	s << endl;
	return s.str();
}

string schedule::getElement(int i, int j) {
	return this->the_schedule[i][j];
}

void schedule::setPosition(int i, int j, string element) {
	this->the_schedule[i][j] = element;
}

bool schedule::insertElement(int day, string time, string element) {
	string aux;
	if ((day > 6) || (day < 1))
	{
		return false;
	}
	else
	{
		switch (day)
		{
		case 1:
			if (time == "6:00") {
				if (this->the_schedule[1][day] != "") {
					return false;
				}
				else
				{
					this->the_schedule[1][day] = element;
					return true;
				}
			}
			else if (time == "7:00")
			{
				if (this->the_schedule[2][day] != "") {
					return false;
				}
				else
					this->the_schedule[2][day] = element;
				return true;
			}
			else if (time == "8:00")
			{
				if (this->the_schedule[3][day] != "") {
					return false;
				}
				else
					this->the_schedule[3][day] = element;
				return true;
			}
			else if (time == "9:00")
			{
				if (this->the_schedule[4][day] != "") {
					return false;
				}
				else
					this->the_schedule[4][day] = element;
				return true;
			}
			else if (time == "10:00")
			{
				if (this->the_schedule[5][day] != "") {
					return false;
				}
				else
					this->the_schedule[5][day] = element;
				return true;
			}
			else if (time == "11:00")
			{
				if (this->the_schedule[6][day] != "") {
					return false;
				}
				else
					this->the_schedule[6][day] = element;
				return true;
			}
			else if (time == "12:00")
			{
				if (this->the_schedule[7][day] != "") {
					return false;
				}
				else
					this->the_schedule[7][day] = element;
				return true;
			}
			else if (time == "13:00")
			{
				if (this->the_schedule[8][day] != "") {
					return false;
				}
				else
					this->the_schedule[8][day] = element;
				return true;
			}
			else if (time == "14:00")
			{
				if (this->the_schedule[9][day] != "") {
					return false;
				}
				else
					this->the_schedule[9][day] = element;
				return true;
			}
			else if (time == "15:00")
			{
				if (this->the_schedule[10][day] != "") {
					return false;
				}
				else
					this->the_schedule[10][day] = element;
				return true;
			}
			else if (time == "16:00")
			{
				if (this->the_schedule[11][day] != "") {
					return false;
				}
				else
					this->the_schedule[11][day] = element;
				return true;
			}
			else if (time == "17:00")
			{
				if (this->the_schedule[12][day] != "") {
					return false;
				}
				else
					this->the_schedule[12][day] = element;
				return true;
			}
			else if (time == "18:00")
			{
				if (this->the_schedule[13][day] != "") {
					return false;
				}
				else
					this->the_schedule[13][day] = element;
				return true;
			}
			else if (time == "19:00")
			{
				if (this->the_schedule[14][day] != "") {
					return false;
				}
				else
					this->the_schedule[14][day] = element;
				return true;
			}
			else
			{
				return true;
			}
		case 2:
			if (time == "6:00") {
				if (this->the_schedule[1][day] != "") {
					return false;
				}
				else
				{
					this->the_schedule[1][day] = element;
					return true;
				}
			}
			else if (time == "7:00")
			{
				if (this->the_schedule[2][day] != "") {
					return false;
				}
				else
					this->the_schedule[2][day] = element;
				return true;
			}
			else if (time == "8:00")
			{
				if (this->the_schedule[3][day] != "") {
					return false;
				}
				else
					this->the_schedule[3][day] = element;
				return true;
			}
			else if (time == "9:00")
			{
				if (this->the_schedule[4][day] != "") {
					return false;
				}
				else
					this->the_schedule[4][day] = element;
				return true;
			}
			else if (time == "10:00")
			{
				if (this->the_schedule[5][day] != "") {
					return false;
				}
				else
					this->the_schedule[5][day] = element;
				return true;
			}
			else if (time == "11:00")
			{
				if (this->the_schedule[6][day] != "") {
					return false;
				}
				else
					this->the_schedule[6][day] = element;
				return true;
			}
			else if (time == "12:00")
			{
				if (this->the_schedule[7][day] != "") {
					return false;
				}
				else
					this->the_schedule[7][day] = element;
				return true;
			}
			else if (time == "13:00")
			{
				if (this->the_schedule[8][day] != "") {
					return false;
				}
				else
					this->the_schedule[8][day] = element;
				return true;
			}
			else if (time == "14:00")
			{
				if (this->the_schedule[9][day] != "") {
					return false;
				}
				else
					this->the_schedule[9][day] = element;
				return true;
			}
			else if (time == "15:00")
			{
				if (this->the_schedule[10][day] != "") {
					return false;
				}
				else
					this->the_schedule[10][day] = element;
				return true;
			}
			else if (time == "16:00")
			{
				if (this->the_schedule[11][day] != "") {
					return false;
				}
				else
					this->the_schedule[11][day] = element;
				return true;
			}
			else if (time == "17:00")
			{
				if (this->the_schedule[12][day] != "") {
					return false;
				}
				else
					this->the_schedule[12][day] = element;
				return true;
			}
			else if (time == "18:00")
			{
				if (this->the_schedule[13][day] != "") {
					return false;
				}
				else
					this->the_schedule[13][day] = element;
				return true;
			}
			else if (time == "19:00")
			{
				if (this->the_schedule[14][day] != "") {
					return false;
				}
				else
					this->the_schedule[14][day] = element;
				return true;
			}
			else
			{
				return true;
			}
		case 3:
			if (time == "6:00") {
				if (this->the_schedule[1][day] != "") {
					return false;
				}
				else
				{
					this->the_schedule[1][day] = element;
					return true;
				}
			}
			else if (time == "7:00")
			{
				if (this->the_schedule[2][day] != "") {
					return false;
				}
				else
					this->the_schedule[2][day] = element;
				return true;
			}
			else if (time == "8:00")
			{
				if (this->the_schedule[3][day] != "") {
					return false;
				}
				else
					this->the_schedule[3][day] = element;
				return true;
			}
			else if (time == "9:00")
			{
				if (this->the_schedule[4][day] != "") {
					return false;
				}
				else
					this->the_schedule[4][day] = element;
				return true;
			}
			else if (time == "10:00")
			{
				if (this->the_schedule[5][day] != "") {
					return false;
				}
				else
					this->the_schedule[5][day] = element;
				return true;
			}
			else if (time == "11:00")
			{
				if (this->the_schedule[6][day] != "") {
					return false;
				}
				else
					this->the_schedule[6][day] = element;
				return true;
			}
			else if (time == "12:00")
			{
				if (this->the_schedule[7][day] != "") {
					return false;
				}
				else
					this->the_schedule[7][day] = element;
				return true;
			}
			else if (time == "13:00")
			{
				if (this->the_schedule[8][day] != "") {
					return false;
				}
				else
					this->the_schedule[8][day] = element;
				return true;
			}
			else if (time == "14:00")
			{
				if (this->the_schedule[9][day] != "") {
					return false;
				}
				else
					this->the_schedule[9][day] = element;
				return true;
			}
			else if (time == "15:00")
			{
				if (this->the_schedule[10][day] != "") {
					return false;
				}
				else
					this->the_schedule[10][day] = element;
				return true;
			}
			else if (time == "16:00")
			{
				if (this->the_schedule[11][day] != "") {
					return false;
				}
				else
					this->the_schedule[11][day] = element;
				return true;
			}
			else if (time == "17:00")
			{
				if (this->the_schedule[12][day] != "") {
					return false;
				}
				else
					this->the_schedule[12][day] = element;
				return true;
			}
			else if (time == "18:00")
			{
				if (this->the_schedule[13][day] != "") {
					return false;
				}
				else
					this->the_schedule[13][day] = element;
				return true;
			}
			else if (time == "19:00")
			{
				if (this->the_schedule[14][day] != "") {
					return false;
				}
				else
					this->the_schedule[14][day] = element;
				return true;
			}
			else
			{
				return true;
			}
		case 4:
			if (time == "6:00") {
				if (this->the_schedule[1][day] != "") {
					return false;
				}
				else
				{
					this->the_schedule[1][day] = element;
					return true;
				}
			}
			else if (time == "7:00")
			{
				if (this->the_schedule[2][day] != "") {
					return false;
				}
				else
					this->the_schedule[2][day] = element;
				return true;
			}
			else if (time == "8:00")
			{
				if (this->the_schedule[3][day] != "") {
					return false;
				}
				else
					this->the_schedule[3][day] = element;
				return true;
			}
			else if (time == "9:00")
			{
				if (this->the_schedule[4][day] != "") {
					return false;
				}
				else
					this->the_schedule[4][day] = element;
				return true;
			}
			else if (time == "10:00")
			{
				if (this->the_schedule[5][day] != "") {
					return false;
				}
				else
					this->the_schedule[5][day] = element;
				return true;
			}
			else if (time == "11:00")
			{
				if (this->the_schedule[6][day] != "") {
					return false;
				}
				else
					this->the_schedule[6][day] = element;
				return true;
			}
			else if (time == "12:00")
			{
				if (this->the_schedule[7][day] != "") {
					return false;
				}
				else
					this->the_schedule[7][day] = element;
				return true;
			}
			else if (time == "13:00")
			{
				if (this->the_schedule[8][day] != "") {
					return false;
				}
				else
					this->the_schedule[8][day] = element;
				return true;
			}
			else if (time == "14:00")
			{
				if (this->the_schedule[9][day] != "") {
					return false;
				}
				else
					this->the_schedule[9][day] = element;
				return true;
			}
			else if (time == "15:00")
			{
				if (this->the_schedule[10][day] != "") {
					return false;
				}
				else
					this->the_schedule[10][day] = element;
				return true;
			}
			else if (time == "16:00")
			{
				if (this->the_schedule[11][day] != "") {
					return false;
				}
				else
					this->the_schedule[11][day] = element;
				return true;
			}
			else if (time == "17:00")
			{
				if (this->the_schedule[12][day] != "") {
					return false;
				}
				else
					this->the_schedule[12][day] = element;
				return true;
			}
			else if (time == "18:00")
			{
				if (this->the_schedule[13][day] != "") {
					return false;
				}
				else
					this->the_schedule[13][day] = element;
				return true;
			}
			else if (time == "19:00")
			{
				if (this->the_schedule[14][day] != "") {
					return false;
				}
				else
					this->the_schedule[14][day] = element;
				return true;
			}
			else
			{
				return true;
			}
		case 5:
			if (time == "6:00") {
				if (this->the_schedule[1][day] != "") {
					return false;
				}
				else
				{
					this->the_schedule[1][day] = element;
					return true;
				}
			}
			else if (time == "7:00")
			{
				if (this->the_schedule[2][day] != "") {
					return false;
				}
				else
					this->the_schedule[2][day] = element;
				return true;
			}
			else if (time == "8:00")
			{
				if (this->the_schedule[3][day] != "") {
					return false;
				}
				else
					this->the_schedule[3][day] = element;
				return true;
			}
			else if (time == "9:00")
			{
				if (this->the_schedule[4][day] != "") {
					return false;
				}
				else
					this->the_schedule[4][day] = element;
				return true;
			}
			else if (time == "10:00")
			{
				if (this->the_schedule[5][day] != "") {
					return false;
				}
				else
					this->the_schedule[5][day] = element;
				return true;
			}
			else if (time == "11:00")
			{
				if (this->the_schedule[6][day] != "") {
					return false;
				}
				else
					this->the_schedule[6][day] = element;
				return true;
			}
			else if (time == "12:00")
			{
				if (this->the_schedule[7][day] != "") {
					return false;
				}
				else
					this->the_schedule[7][day] = element;
				return true;
			}
			else if (time == "13:00")
			{
				if (this->the_schedule[8][day] != "") {
					return false;
				}
				else
					this->the_schedule[8][day] = element;
				return true;
			}
			else if (time == "14:00")
			{
				if (this->the_schedule[9][day] != "") {
					return false;
				}
				else
					this->the_schedule[9][day] = element;
				return true;
			}
			else if (time == "15:00")
			{
				if (this->the_schedule[10][day] != "") {
					return false;
				}
				else
					this->the_schedule[10][day] = element;
				return true;
			}
			else if (time == "16:00")
			{
				if (this->the_schedule[11][day] != "") {
					return false;
				}
				else
					this->the_schedule[11][day] = element;
				return true;
			}
			else if (time == "17:00")
			{
				if (this->the_schedule[12][day] != "") {
					return false;
				}
				else
					this->the_schedule[12][day] = element;
				return true;
			}
			else if (time == "18:00")
			{
				if (this->the_schedule[13][day] != "") {
					return false;
				}
				else
					this->the_schedule[13][day] = element;
				return true;
			}
			else if (time == "19:00")
			{
				if (this->the_schedule[14][day] != "") {
					return false;
				}
				else
					this->the_schedule[14][day] = element;
				return true;
			}
			else
			{
				return true;
			}
		case 6:
			if (time == "6:00") {
				if (this->the_schedule[1][day] != "") {
					return false;
				}
				else
				{
					this->the_schedule[1][day] = element;
					return true;
				}
			}
			else if (time == "7:00")
			{
				if (this->the_schedule[2][day] != "") {
					return false;
				}
				else
					this->the_schedule[2][day] = element;
				return true;
			}
			else if (time == "8:00")
			{
				if (this->the_schedule[3][day] != "") {
					return false;
				}
				else
					this->the_schedule[3][day] = element;
				return true;
			}
			else if (time == "9:00")
			{
				if (this->the_schedule[4][day] != "") {
					return false;
				}
				else
					this->the_schedule[4][day] = element;
				return true;
			}
			else if (time == "10:00")
			{
				if (this->the_schedule[5][day] != "") {
					return false;
				}
				else
					this->the_schedule[5][day] = element;
				return true;
			}
			else if (time == "11:00")
			{
				if (this->the_schedule[6][day] != "") {
					return false;
				}
				else
					this->the_schedule[6][day] = element;
				return true;
			}
			else if (time == "12:00")
			{
				if (this->the_schedule[7][day] != "") {
					return false;
				}
				else
					this->the_schedule[7][day] = element;
				return true;
			}
			else if (time == "13:00")
			{
				if (this->the_schedule[8][day] != "") {
					return false;
				}
				else
					this->the_schedule[8][day] = element;
				return true;
			}
			else if (time == "14:00")
			{
				if (this->the_schedule[9][day] != "") {
					return false;
				}
				else
					this->the_schedule[9][day] = element;
				return true;
			}
			else if (time == "15:00")
			{
				if (this->the_schedule[10][day] != "") {
					return false;
				}
				else
					this->the_schedule[10][day] = element;
				return true;
			}
			else if (time == "16:00")
			{
				if (this->the_schedule[11][day] != "") {
					return false;
				}
				else
					this->the_schedule[11][day] = element;
				return true;
			}
			else if (time == "17:00")
			{
				if (this->the_schedule[12][day] != "") {
					return false;
				}
				else
					this->the_schedule[12][day] = element;
				return true;
			}
			else if (time == "18:00")
			{
				if (this->the_schedule[13][day] != "") {
					return false;
				}
				else
					this->the_schedule[13][day] = element;
				return true;
			}
			else if (time == "19:00")
			{
				if (this->the_schedule[14][day] != "") {
					return false;
				}
				else
					this->the_schedule[14][day] = element;
				return true;
			}
			else
			{
				return true;
			}

		default:
			return false;
			break;
		}
	}
}

bool schedule::save()
{
	ofstream f2;
	f2.open("horario_clases.txt", ios::out | ios::app);
	if (f2.fail())
	{
		cout << "Error abriendo archivo" << endl;
		return false;
	}
	else
	{
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
			{
				f2 << this->the_schedule[i][j] << '\t';
			}
	}
	return true;
	
}

bool schedule::load() 
{
	ifstream f1;
	f1.open("horario_clases.txt", ios::in);
	if (f1.fail())
	{
		cout << "Error abriendo archivo" << endl;
		return false;
	}
	else
	{
		while (!f1.eof())
		{
			for (int i = 0; i < 3; i++)
				for (int j = 0; j < 3; j++)
					f1 >> this->the_schedule[i][j];
		}
		return true;
	}
}

schedule::~schedule()
{

}

