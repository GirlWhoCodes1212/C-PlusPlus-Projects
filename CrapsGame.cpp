//Stephanie Lab Group #2
//Craps Game
#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
	int num1, num2, seed, seed2, points, sum;
	char choice;

	cout << "Welcome to the Craps game! Let's begin!!\n" << endl;
	Sleep(2000);

	do
	{
		
		system("cls");

		points = 0;
		sum = 0;
		num1 = 0;
		num2 = 0;
		seed = 0;
		seed2 = 0;

		seed = (time(NULL));

		srand(seed);

		num1 = (1 + rand() % 6);

		seed2 = 2 * (time(NULL));

		srand(seed2);

		num2 = (1 + rand() % 6);

		sum = num1 + num2;

		cout << "Your numbers are " << num1 << " & " << num2 << endl;
		cout << "Your sum is " << sum << endl;

		if (sum == 7 || sum == 12)
		{

				cout << "Congratulations! You've won the game!\n" << endl;
				cout << "Your numbers were " << num1 << " & " << num2 << endl;
				cout << "Play again? [y/n]: ";
				cin >> choice;
				system("cls");
				points = 0;
				sum = 0;
				num1 = 0;
				num2 = 0;
				seed = 0;
				seed2 = 0;
				//break;
		}

		else if (sum == 2 || sum == 3 || sum == 12 || sum == 7)
		{

			cout << "Sorry! You've lost the game...\n" << endl;
			cout << "Your numbers were " << num1 << " & " << num2 << endl;
			cout << "Your current points are: " << points << endl;
			cout << "Play again? [y/n]: ";
			cin >> choice;
			system("cls");
			points = 0;
			sum = 0;
			num1 = 0;
			num2 = 0;
			seed = 0;
			seed2 = 0;
			//break;
		}

		do
		{
			for (int count = 0, i = 5;; count++, i++)
			{
				seed = (count);

				srand(seed);

				num1 = (1 + rand() % 6);

				seed2 = 2 * (i);

				srand(seed2);

				num2 = (1 + rand() % 6);

				points = num1 + num2;

				cout << "\nYour first number is: " << num1 << endl;
				cout << "Your second number is: " << num2 << endl;
				cout << "Your current points are: " << points << endl;
				cout << "Your sum was: " << sum << endl;

				if (points == sum)
				{
					break;
				}

				else if (points != sum)
				{
					points += num1 + num2;
					cout << "\nPress 'Enter' to continue" << endl;
					cin.ignore();
				}

			}
		} while (points != sum);

		if (points == sum)
		{
			cout << "Congratlations! You've won the game!\n" << endl;
			cout << "Your numbers were " << num1 << " & " << num2 << endl;
			cout << "Your current points are: " << points << endl;
			cout << "Play again? [y/n]: ";
			cin >> choice;
			system("cls");
			points = 0;
			sum = 0;
			num1 = 0;
			num2 = 0;
			seed = 0;
			seed2 = 0;
			//break;
		}

	} while (choice == 'Y' || choice == 'y');

		

	

	return 0;
}
