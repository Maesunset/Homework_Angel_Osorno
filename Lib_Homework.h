#pragma once
#include <iostream>
using namespace std;

int Comprobar(int tries,int low, int high)
{
	int answer;
	bool check = false;
	do
	{
		cout << "ingrese un numero entre "<< low<<" y "<< high<<", es su " << tries << " intento" << endl;
		cin >> answer;
		if (answer <= high && answer >= low)
		{
			check = false;
		}
		else
		{
			cout << "el numero ingresado esta fuera del rango requerido" << endl;
			check = true;
		}
	} while (check);
	return answer;
}

void Guess_My_Number() 
{
	const int range = 5;
	int low = 5, high =200;
		srand(static_cast<unsigned int>(time(NULL)));
		unsigned int random = rand() % 101;
		unsigned int answer, tries = 1, Mrange, mrange;
		Mrange = random + range;
		mrange = random - range;
		bool exit = true, check = true;
		do
		{
			answer = Comprobar(tries, low, high);
			if (random == answer)
			{
				cout << "GENIAL ADIVINO EN " << tries << " intentos" << endl;
				exit = false;
			}

			else
			{
				if (random > answer)
				{
					cout << "respuesta equivocada intente mas arriba" << endl;
					tries++;
					for (int i = mrange; i <= answer; i++)
					{
						if (answer == i)
						{
							cout << "estas cercas, ya casi" << endl;
						}
					}
				}
				else {
					if (random < answer)
					{
						cout << "respuesta equivocada intente mas abajo" << endl;
						tries++;
						for (int i = Mrange; i >= answer; i--)
						{
							if (answer == i)
							{
								cout << "estas cercas, ya casi" << endl;
							}
						}
					}
				}
			}
		} while (exit);
		system("pause");
}

int Suma(int a, int b) 
{
	return a + b;
}

int Resta(int a, int b) 
{
	return a - b;
}

int Multiplicacion(int a, int b) 
{
	return a * b;
}

void calculadora() {
	int a, b;
	int suma, resta, multiplicacion;

	cout << "ingrese su numero a" << endl;
	cin >> a;
	cout << "ingrese su numero b" << endl;
	cin >> b;
	suma = Suma(a, b);
	cout << "La suma de los numeros es: " << suma << endl;
	resta = Resta(a, b);
	cout << "La resta de los numeros es: " << resta << endl;
	multiplicacion = Multiplicacion(a, b);
	cout << "La multiplicacion de los numeros es: " << multiplicacion << endl;
	system("pause");
}
