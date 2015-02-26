//Stephanie Lab Group #2 
//Tic-Tac-Toe Design
#include <iostream>
#include <iomanip>
using namespace std;

bool areValuesEqual(char, char, char);
bool isGameOver(char player[][3]);
int main()
{
	char player[3][3];
	char choice;
	int r, c, moves = 1;
	char again, current;

	do
	{

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				player[i][j] = ' ';
			}
		}
		cout << setw(3) << "0" << setw(4) << "1" << setw(4) << "2" << endl;
		cout << setw(5) << "|" << setw(4) << "|" << endl;
		cout << "0" << setw(2) << player[0][0] << setw(2) << "|" << setw(2) << player[0][1] << setw(2) << "|" << setw(2) << player[0][2] << setw(2) << endl;;
		cout << setw(11) << " ___|___|___" << endl;
		cout << setw(5) << "|" << setw(4) << "|" << endl;
		cout << "1" << setw(2) << player[1][0] << setw(2) << "|" << setw(2) << player[1][1] << setw(2) << "|" << setw(2) << player[1][2] << setw(2) << endl;
		cout << setw(11) << " ___|___|___" << endl;
		cout << setw(5) << "|" << setw(4) << "|" << endl;
		cout << "2" << setw(2) << player[2][0] << setw(2) << "|" << setw(2) << player[2][1] << setw(2) << "|" << setw(2) << player[2][2] << setw(2) << endl;
		cout << setw(5) << "|" << setw(4) << "|" << endl;

		cout << "\nWho's going first? [X/O]: ";
		cin >> choice;

		while (choice != 'o' && choice != 'O' && choice != 'X' && choice != 'x')
		{
			cout << "This choice is not valid! Please try again: ";
			cin >> choice;
		}

		current = choice;
		cout << endl;

		while (moves <= 9)
		{
			moves = 1;
			do
			{
				cout << "\nPlayer " << current << " enter row: ";
				cin >> r;

				while (r < 0 || r > 2)
				{
					cout << "ERROR! INVALID ROW! Try again: ";
					cin >> r;
				}

				cout << "Player " << current << " enter column: ";
				cin >> c;

				while (c < 0 || c > 2)
				{
					cout << "ERROR! INVALID COLUMN! Try again: ";
					cin >> c;
				}

				if (player[r][c] != ' ')
				{
					cout << "CHEATER!! Cheating is eelegal. Try again... " << endl;
				}
			} while (player[r][c] != ' ');

			player[r][c] = current;

			cout << endl << setw(3) << "0" << setw(4) << "1" << setw(4) << "2" << endl;
			cout << setw(5) << "|" << setw(4) << "|" << endl;
			cout << "0" << setw(2) << player[0][0] << setw(2) << "|" << setw(2) << player[0][1] << setw(2) << "|" << setw(2) << player[0][2] << setw(2) << endl;;
			cout << setw(11) << " ___|___|___" << endl;
			cout << setw(5) << "|" << setw(4) << "|" << endl;
			cout << "1" << setw(2) << player[1][0] << setw(2) << "|" << setw(2) << player[1][1] << setw(2) << "|" << setw(2) << player[1][2] << setw(2) << endl;
			cout << setw(11) << " ___|___|___" << endl;
			cout << setw(5) << "|" << setw(4) << "|" << endl;
			cout << "2" << setw(2) << player[2][0] << setw(2) << "|" << setw(2) << player[2][1] << setw(2) << "|" << setw(2) << player[2][2] << setw(2) << endl;
			cout << setw(5) << "|" << setw(4) << "|" << endl;

			if (isGameOver(player))
			{
				cout << "Congratulations! Player " << current << " has won!" << endl;
				cout << "Play Again? [y/n]: ";
				cin >> again;
				system("cls");
				break;
			}

			if (current == 'x' || current == 'X')
			{
				current = 'o';
			}

			else if (current == 'o' || current == 'O')
			{
				current = 'x';
			}


			moves++;
		}
		
		if (moves == 9)
		{
			cout << "This game ends in a tie!" << endl;
			cout << "Play Again? [y/n]: ";
			cin >> again;
			system("cls");
		}

	} while (again == 'Y' || again == 'y');

	return 0;
}

bool areValuesEqual(char a, char b, char c)
{
	if (a != ' ' && b != ' ' && c != ' ')
	{
		//cout << "I AM HERE1" << endl;
		if (a == b && b == c)
		{
			//cout << "EQUALS" << endl;
			return true;
		}

		else
		{
			//cout << "EQUALS2" << endl;
			return false;
		}
	}

	else
	{
		return false;
	}
}

bool isGameOver(char player[][3])
{
	//cout << "I AM HERE2" << endl;
	//get rows
	for (int i = 0; i < 3; i++)
	{
		if (areValuesEqual(player[i][0], player[i][1], player[i][2]))
		{
			//cout << "ROWS " << i <<  endl;
			return true;
		}
	}

	//get columns
	for (int count = 0; count < 3; count++)
	{
		//cout << "COLUMNS1" << endl;
		if (areValuesEqual(player[0][count], player[1][count], player[2][count]))
		{
			//cout << "COLUMNS " << count << endl;
			return true;
		}
	}

	//get diagonals
	if (areValuesEqual(player[0][0], player[1][1], player[2][2]))
	{
		//cout << "DIAGONALS" << endl;
		return true;
	}

	if (areValuesEqual(player[0][2], player[1][1], player[2][0]))
	{
		//cout << "DIAGONALS2" << endl;
		return true;
	}

	return false;
}
