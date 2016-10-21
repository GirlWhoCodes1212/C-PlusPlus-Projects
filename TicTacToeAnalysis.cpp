//Stephanie Lab Group #2
//TicTacToe Analysis
#include <iostream>
using namespace std;

int main()
{
	int input;
	char ticTacToe[3][3];
	bool xTic = true, oTic = true;

	cin >> input;
	
	for (int count = 1; count <= input; count++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int i = 0; i < 3; i++)
			{
				cin >> ticTacToe[j][i];
			}
		}

		for (int a = 0; a < 3; a++)
		{
			if (((ticTacToe[a][0] == ticTacToe[a][1]) && (ticTacToe[a][1] == ticTacToe[a][2])))
			{
				cout << ticTacToe[a][0] << endl;
				break;
			}

			else if ((ticTacToe[0][0] == ticTacToe[1][1]) && (ticTacToe[1][1] == ticTacToe[2][2]))
			{
				cout << ticTacToe[0][0] << endl;
				break;
			}

			else
			{
				xTic = false;
				break;
			}
		}

		for (int a = 0; a < 3; a++)
		{
			if (((ticTacToe[0][a] == ticTacToe[1][a]) && (ticTacToe[1][a] == ticTacToe[2][a])))
			{
				cout << ticTacToe[a][0] << endl;
				break;
			}

			if ((ticTacToe[0][2] == ticTacToe[1][1]) && (ticTacToe[1][1] == ticTacToe[2][0]))
			{
				cout << ticTacToe[0][0] << endl;
				break;
			}

			else
			{
				oTic = false;
				break;
			}
		}

		if (oTic == false && xTic == false)
			cout << "-" << endl;
		

	}

	return 0;
}
