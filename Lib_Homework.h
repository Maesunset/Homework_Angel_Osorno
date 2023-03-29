#pragma once
#include <iostream>
#include <string>
using namespace std;
// Tarea 1
void PoN() 
{
	int n;
	bool salir = true;
	do
	{
		cout << "ingrese que numero dessea evaluar" << endl;
		cin >> n;
		if (n==0)
		{
			cout << "intente de nuevo" << endl;
		}
		else if (n>0)
		{
			cout << "El numero es positivo" << endl;
		}
		else 
		{
			cout << "El numero es negativo" << endl;
		}
	} while (salir);
}
void SyS() 
{
	int n = 0, suma = 0,k;
	cout << "ingrese un numero de o mas cifras" << endl;
	cin >> n;
	k = n;
	while (n>0)
	{
		suma += n % 10;
		n = n / 10;
	}
	cout << " La suma del numero " << k << " es: " << suma << endl;
	system("pause");
}
void Tarea_1()
{
	int Menu_tarea1 = 0;
	cout << "	----------A que ejercicio dessea ingresar----------" << endl;
	cout << "1) Evaluar si un numero es Positivo o Negativo" << endl;
	cout << "2) " << endl;
	cin >> Menu_tarea1;
	switch (Menu_tarea1)
	{
	case 1:
		PoN();
		break;
	case 2:
		SyS();
		break;
	default:
		break;
	}
}