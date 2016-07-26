#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int winningDigits[5];
	int player[5];
	int digit, match = 0;

	srand(time(NULL));					// Give the random generator
										// a seed to start with

	// Get 5 random digits and store them in winningDigits
	for (int i = 0; i < 5; i++)
	{
	 	winningDigits[i] = 0 + rand() % 9;
	} 

	// Ask user to enter 5 digits and store them in player
	cout << "Enter your 5 lottery picks in the range of 0 to 9,\n"
		 << "one number at a time.\n";
	for (int i = 0; i < 5; i++)
	{
		do
		{
			cout << "Number " << (i + 1) << ": ";
			cin  >> digit;

			// Input validation:
			// Do not accept player inputs less than 0 or greater than 9.
			if (digit < 0 || digit > 9)
			{
				cout << "Invaild number!\n"
					 << "Pick a number in the range of 0 to 9.\n";
			}
		} while (digit < 0 || digit > 9);
		
		player[i] = digit;
	}

	// Compare the corresponding elements in teh two arrays and
	// count how many digits match.
	for (int i = 0; i < 5; i++)
	{
		if (winningDigits[i] == player[i])
			match++;
	}

	// Display winning digits
	cout << "Winning digits : ";
	for (int i = 0; i < 5; i++)
	{
		cout << winningDigits[i] << " ";
	}
	cout << endl;

	// Display player's digits
	cout << "player digits  : ";
	for (int i = 0; i < 5; i++)
	{
		cout << player[i] << " ";
	}
	cout << endl;

	// Display number of matching digits
	cout << "Matching digits: " << match << endl;

	return 0;
}