// Programa compilatorio de tareas del alumno Angel Jared Osorno Lares
#include <iostream>
#include "Lib_Homework.h"
using namespace std;
int main()
{
	int menu;
	bool salir = true;
	do
	{
		system("cls");
		cout << "-----------Menu----------" << endl;
		cout << "1) Tarea 1" << endl;
		cout << "2) Para salir" << endl;
			cin >> menu;
		switch (menu)
		{
			//case guess my number
			case 1:
				Tarea_1();
				break;
			case 2:
				break;
			case 3:
				cout << " gracias vuelva pronto" << endl;
				salir = false;
				break;
			default:
				cout << "Opcion no valida regresando al menu inicial" << endl;
				system("pause");
				break;
		}
	} while (salir);
}