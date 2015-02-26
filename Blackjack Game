//Stephanie Lab Group #2
//Blackjack Program
#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main()
{
	char again = 'y', cardChoice;
	int dealerSum = 0, playerSum = 0, dealer, player, seedPlayer, seedDealer;

	while (again == 'Y' || again == 'y')
	{
		cout << "Welcome to BlackJack! Please wait while the random numbers are\nbeing generated...\n" << endl;
		Sleep(3000);

		seedPlayer = (time(NULL));
		seedDealer = 2 * (time(NULL));

		srand(seedPlayer);
		playerSum = (2 + rand() % 20);

		srand(seedDealer);
		dealerSum = (2 + rand() % 20);

		cout << "Your sum is: " << playerSum << endl;

		cout << "\nWould you like another card? [y/n]: ";
		cin >> cardChoice;

		if (cardChoice == 'Y' || cardChoice == 'y')
		{
			srand(seedPlayer);
			player = (1 + rand() % 10);

			playerSum += player;

			cout << "\nYour new sum is: " << playerSum << endl;

			if (playerSum < 21)
			{
				cout << "\nWould you like another card? [y/n]: ";
				cin >> cardChoice;
			}

			if (playerSum > 21)
			{
				cout << "\nSorry friend, but you cannot beat me! You have lost the game..." << endl;
				cout << "Play again? [y/n]: ";
				cin >> again;

				system("cls");
			}

			if (playerSum == 21)
			{
				cout << "\nCongratulations friend!\nYou have beat the supercomputer!" << endl;
				cout << "Play again? [y/n]: ";
				cin >> again;

				system("cls");
			}

			else
			{
				;
			}
		}

		while (cardChoice == 'Y' || cardChoice == 'y')
		{
			player = (1 + rand() % 10);

			playerSum += player;

			cout << "\nYour new sum is: " << playerSum << endl;

			if (playerSum < 21)
			{
				cout << "\nWould you like another card? [y/n]: ";
				cin >> cardChoice;
			}

			if (playerSum > 21)
			{
				cout << "\nSorry friend, but you cannot beat me! You have lost the game..." << endl;
				cout << "Play again? [y/n]: ";
				cin >> again;

				system("cls");
			}

			if (playerSum == 21)
			{
				cout << "\nCongratulations friend!\nYou have beat the supercomputer!" << endl;
				cout << "Play again? [y/n]: ";
				cin >> again;

				system("cls");
			}
		}

		cout << "\nMy sum is: " << dealerSum << endl;

		if (playerSum < dealerSum)
		{
			cout << "\nSorry friend, but you cannot beat me! You have lost the game..." << endl;
			cout << "Play again? [y/n]: ";
			cin >> again;

			system("cls");
		}

		else if (playerSum == dealerSum)
		{
			cout << "\nSorry friend, but you cannot beat me! You have lost the game..." << endl;
			cout << "Play again? [y/n]: ";
			cin >> again;

			system("cls");
		}

		if (playerSum > dealerSum)
		{
			cout << "\nCongratulations friend!\nYou have beat the supercomputer!" << endl;
			cout << "Play again? [y/n]: ";
			cin >> again;

			system("cls");
		}

	}

	if (again != 'Y' && again != 'y')
	{
		return 0;
	}

	return 0;
}
