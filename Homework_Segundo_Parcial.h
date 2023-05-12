#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
// tarea ahorcado
void ahorcado();
void vidas(int tries);
void ahorcado() 
{
	const int LIFE = 6;
	vector<string> word;
	word.push_back("GATO");
	word.push_back("PERRO");
	word.push_back("DELFIN");
	word.push_back("AVESTRUZ");
	word.push_back("CAPIBARA");
	vector<string> numbers;
	numbers.push_back("0");
	numbers.push_back("1");
	numbers.push_back("2");
	numbers.push_back("3");
	numbers.push_back("4");
	numbers.push_back("5");
	numbers.push_back("6");
	numbers.push_back("7");
	numbers.push_back("8");
	numbers.push_back("9");
	int tries = 0, random, seleccion = 0;
	char letter;
	srand(static_cast<unsigned int>(time(0)));
	random = (rand() % word.size());
	const string CHOICEWORD = word[random];
	string ggsWords;
	string soFar(CHOICEWORD.size(), '_');
	bool win = false;
	do
	{
		vidas(tries);
		cout << endl << soFar << endl;
		cout << " llevas " << tries << " intentos" << endl;
		do
		{
			seleccion = 0;
			cout << "ingrese una letra" << endl;
			cin >> letter;
			string validation;
			validation = letter;
			if (validation.length()==1) 
			{
				for (int i = 0; i < numbers.size(); i++)
				{
					if (validation != numbers[i]) 
					{
					}
					else 
					{
						cout << "intente de nuevo" << endl;
						seleccion++;
					}
				}
			}
			else
			{
				cout << "intente de nuevo" << endl;
			}
		} while (seleccion!=0);
		letter = toupper(letter);
		if (CHOICEWORD.find(letter)!= string ::npos)
		{
			for (int i = 0; i < CHOICEWORD.length(); i++) 
			{
				if (CHOICEWORD[i]== letter)
				{
					soFar[i] = letter;
				}
			}
		}
		else
		{
			cout << "letra incorrecta, si lo vas a hacer hazlo bien" << endl;
			tries++;
		}
		if (soFar==CHOICEWORD)
		{
			win = true;
			break;
		}
	} while (tries != LIFE);
	if (win)
	{
		cout << " felicidades shinji" << endl;
	}
	else 
	{
		cout << " la palabra correcta es:" << endl;
		cout << CHOICEWORD << endl;
	}
	system("pause");
}
void vidas(int tries)
{
	switch (tries)
	{
	case 0:
		cout << "__________\n|         |\n|\n|\n|\n|\n|";
			break;
	case 1:
		cout << "__________\n|         |\n|         0\n|\n|\n|\n|";
		break;
	case 2:
		cout << "__________\n|         |\n|         0\n|         |\n|\n|\n|";
		break;
	case 3:
		cout << "__________\n|         |\n|         0\n|        /|\n|\n|\n|";
		break;
	case 4:
		cout << "__________\n|         |\n|         0\n|        /|\\\n|\n|\n|";
		break;
	case 5:
		cout << "__________\n|         |\n|         0\n|        /|\\\n|        /\n|\n|";
		break;
	case 6:
		cout << " _________\n|         |\n|         0\n|        /|\\\n|        / \\\n|\n|\n";
		break;
	default:
		break;
	}
}