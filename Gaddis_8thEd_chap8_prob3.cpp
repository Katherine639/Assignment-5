#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int jars = 5;
	string salsa[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	int sales[jars];

	// Prompt user to enter the number of jars sold of each type
	cout << "Enter the number of jars sold for each type of salsa.\n";
	for (int i = 0; i < jars; i++)
	{
		int num;
		do
		{
			cout << salsa[i] << ": "; 
			cin  >> num;

			if (num < 0)
				cout << "Error! Jars sold must be greater then 0.\n";

		} while (num < 0);
		sales[i] = num; 
	}

	// Produce and display report
	int high, low, tot = 0;
	high = low = sales[0];

	cout << "\n     Sala Sales Report\n"
	     << "---------------------------\n"
	     << fixed << showpoint << setprecision(2);

	for (int i = 0; i < jars; i++)
	{
		cout << salsa[i] << ": " << sales[i] << " jars" << endl;
		tot += sales[i];

		if(sales[i] > high)
		{
			high = sales[i];
		}
		else if (sales[i] < low)
		{
			low = sales[i]; 
		}
	}

	cout << "Total sales: " << tot << " jars" << endl;
	cout << "Highest selling products: ";

	for (int i = 0; i < jars; i++)
	{
		if (sales[i] == high)
			cout << salsa[i] << " ";
	}

	cout << endl;
	cout << "Lowest selling products:  ";

	for (int i = 0; i < jars; i++)
	{
		if (sales[i] == low)
			cout << salsa[i] << " ";
	}

	cout << endl;

	return 0;
}