#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int mth = 3,					// Number of months
	    day = 30;					// Number of days in a month
	char weather[mth][day];			// Create 3 X 30 array of characters

	int Sun,						// Holds the number of sunny days per month
		Rain,						// Holds the number of rainy days per month
		Cloudy,						// Holds the number of cloudy days per month
		totSun = 0,					// Accumulate total sunny days in 3-months
		totRain = 0,				// Accumulate total rainy days in 3-months
		totCloudy = 0,				// Accumulate total cloudy days in 3-months
		lrgstRain = 0;				// Holds largest number of rainy days in 3-months
		
	ifstream Read;					// Create object
	Read.open("RainOrShine.dat");	// Open file
	if (!Read)
		cout << "Error opening data file.";
	else
	{	// Read weather data in from file
		for (int row = 0; row < mth; row++)
		{
			for (int col = 0; col < day; col++)
			{
				Read >> weather[row][col];
			}
		}
	}
	Read.close();					// Close file

	// Create and display report
	cout << "\n           Three-month weather report\n"
		 << "--------------------------------------------------\n";
	for (int row = 0; row < mth; row++)
	{
		Sun = Rain = Cloudy = 0;
		for (int col = 0; col < day; col++)
		{	// Calculate monthly numbers
			switch (weather[row][col])
			{
				case 'S' : Sun++;
							break;
				case 'R' : Rain++;
							break;
				case 'C' : Cloudy++;
							break;
			}
		}

		// Dislplay monthly numbers
		cout << "\nFor the month of ";
		if (row == 0)
			cout << "June.\n";
		else if (row == 1)
			cout << "July.\n";
		else if (row == 2)
			cout << "August.\n";

		cout << "Rainy : " << Rain << endl
			 << "Sunny : " << Sun  << endl
			 << "Cloudy: " << Cloudy << endl;

		// Calculate 3-month totals
		totSun += Sun;
		totRain += Rain;
		totCloudy += Cloudy;

		// Calculate month with most rainy days
		if(lrgstRain > Rain)
			lrgstRain = row;
	}

	// Dislplay monthly totals
	cout << "\nFor the whole three-month period\n"
		 << "Rainy : " << totRain << endl
		 << "Sunny : " << totSun  << endl
		 << "Cloudy: " << totCloudy << endl;

	// Display month with the largest number of rainy days
	cout << "\nMonth with the largest number of rainy days: ";
		if (lrgstRain == 0)
			cout << "June.\n\n";
		else if (lrgstRain == 1)
			cout << "July.\n\n";
		else if (lrgstRain == 2)
			cout << "August.\n\n";

	return 0;
}
