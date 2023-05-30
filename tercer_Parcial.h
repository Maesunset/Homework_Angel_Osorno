#pragma once
#include <iostream>
using namespace std;

void Menu3P();
void tikTakToe();
void showBoard(char board[][3], int ROWS, int COLUMS);
void victory(int empate, bool &endgame, char board[][3], int ROWS, int COLUMS);
void Menu3P()
{
	int menu3p;
	system("cls");
	cout << "Bienvenido a la secccion de actividades del tercer parcial" << endl;
	cout << " a que actividad dessea ingresar " << endl;
	cout << "---------- menu ----------" << endl;
	cout << "1) tik-tak-toe" << endl;
	cin >> menu3p;

	switch (menu3p)
	{
	case 1:
		tikTakToe();
		break;
	default:
		cout << " Eleccion no valida intente de nuevo" << endl;
		break;
	}
}
void tikTakToe()
{
	const int ROWS = 3;
	const int COLUMS = 3;
	char board[ROWS][COLUMS] = { {'0','1','2'},
								 {'3','4','5'},
								 {'6','7','8'} };
	cout << "welcome to TikTakToe" << endl;
	do
	{
		bool exit = true, endgame = true;
		int menu, player,empate=0;
		cout << "1) jugar" << endl;
		cout << "2) salir" << endl;
		cin >> menu;
		if (menu == 1)
		{
			do
			{
				//player 1 juega
				showBoard(board, ROWS, COLUMS);
				cout << "donde desea agregar una x" << endl;
				cin >> player;
				switch (player)
				{
				case 0:
					if (board[0][0] == 'x')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					} 
					else
					{
						board[0][0] = 'X';
					}
					break;
				case 1:
					if (board[0][1] == 'x')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[0][1] = 'X';
					}
					break;
				case 2:
					if (board[0][2] == 'x')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[0][2] = 'X';
					}
					break;
				case 3:
					if (board[1][0] == 'x')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[1][0] = 'X';
					}
					break;
				case 4:
					if (board[1][1] == 'x')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[1][1] = 'X';
					}
					break;
				case 5:
					if (board[1][2] == 'x')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[1][2] = 'X';
					}
					break;
				case 6:
					if (board[2][0] == 'x')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[2][0] = 'X';
					}
					break;
				case 7:
					if (board[2][1] == 'x')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[2][1] = 'X';
					}
					break;
				case 8:
					if (board[2][2] == 'x')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[2][2] = 'X';
					}
					break;
				default:
					cout << "opcion invalida, se le saltara el turno por gracioso" << endl;
					break;
				}
				empate++;
				if (endgame==false)
				{
					break;
				}
				victory(empate, endgame, board, ROWS, COLUMS);
				//player 2 juega
				showBoard(board, ROWS, COLUMS);
				cout << "donde desea agregar una O" << endl;
				cin >> player;
				switch (player)
				{
				case 0:
					if (board[0][0] == 'o')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[0][0] = 'o';
					}
					break;
				case 1:
					if (board[0][1] == 'o')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[0][1] = 'o';
					}
					break;
				case 2:
					if (board[0][2] == 'o')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[0][2] = 'o';
					}
					break;
				case 3:
					if (board[1][0] == 'o')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[1][0] = 'o';
					}
					break;
				case 4:
					if (board[1][1] == 'o')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[1][1] = 'o';
					}
					break;
				case 5:
					if (board[1][2] == 'o')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[1][2] = 'o';
					}
					break;
				case 6:
					if (board[2][0] == 'o')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[2][0] = 'o';
					}
					break;
				case 7:
					if (board[2][1] == 'o')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[2][1] = 'o';
					}
					break;
				case 8:
					if (board[2][2] == 'o')
					{
						cout << "el espacio ya esta ocupado, intente con uno nuevo" << endl;
					}
					else
					{
						board[2][2] = '0';
					}
					break;
				default:
					cout << "opcion invalida, se le saltara el turno por gracioso" << endl;
					break;
				}
				empate++;
				victory(empate, endgame, board, ROWS, COLUMS);
			} while (endgame);
		}
		else
		{
			cout << "usted quiso salir, ayos" << endl;
		}
	} while (exit);
}

void showBoard(char board[][3], int ROWS, int COLUMS)
{
	cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
	cout << "-----" << endl;
	cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
	cout << "-----" << endl;
	cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}
void victory(int empate, bool &endgame, char board[][3], int ROWS, int COLUMS)
{
	//condicion de empate
	if (empate == 8)
	{
		cout << "ho no esto fue un enmpate" << endl;
		endgame = false;
	}

	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
	{
		cout << "Gano el player 1" << endl;
			endgame = false;
	}
	if (board[0][0] == 'o' && board[0][1] == 'o' && board[0][2] == 'o')
	{
		cout << "Gano el player 2" << endl;
		endgame = false;
	}

}