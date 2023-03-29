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
void EsPar()
{
	int n, k;
	cout << "ingrese un numero de o mas cifras" << endl;
	cin >> n;
	while (n > 0)
	{
		k = n % 10;
		if (k % 2 == 0) 
		{
			cout << "el numero: " << k << "es par" << endl;
		}
		n = n / 10;
	}
	system("pause");
}
void Mayor() 
{
	int k, mayor=0;
	cout << "cuantos numeros dessea agregar?" << endl;
	cin >> k;
	int* n;
	n = new int[k];
	for (int i = 0; i < k; i++)
	{
		cout << " ingrese un digito" << endl;
		cin >> n[i];
		if (n[i] > n[i - 1])
		{
			mayor = n[i];
		}
	}
	cout << " el numero mayor es:" << mayor << endl;
	system("pause");
}
void imprimir() 
{
	int menor, mayor;
	cout << " ingrese el rango menor" << endl;
	cin >> menor;
	cout << " ingres el rango mayor" << endl;
	cin >> mayor;

	for (int i = menor; i <= mayor; i++)
	{
		cout << i << endl;
	}
	system("pause");
}
void Tarea_1()
{
	int Menu_tarea1 = 0;
	cout << "	----------A que ejercicio dessea ingresar----------" << endl;
	cout << "1) Evaluar si un numero es Positivo o Negativo" << endl;
	cout << "2) Separar 2 o mas numeros y despues sumarlos " << endl;
	cout << "3) separar numeros y determinar si sus componentes son par" << endl;
	cout << "4) determinar que numero es mas alto" << endl;
	cout << "5) imprimir todos los numeros dentro de un rango exacto" << endl;
	cin >> Menu_tarea1;
	switch (Menu_tarea1)
	{
	case 1:
		PoN();
		break;
	case 2:
		SyS();
		break;
	case 3:
		EsPar();
		break;
	case 4:
		Mayor();
		break;
	case 5:
		imprimir();
		break;
	default:
		break;
	}
}