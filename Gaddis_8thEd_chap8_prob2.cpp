#include <iostream>
#include <string>
using namespace std;

int main()
{
	string roman[21] ={ " ", "I",   "II",   "III",  "IV",  "V",
					   	    "VI",  "VII",  "VIII",  "IX",  "X",
					   	    "XI",  "XII",  "XIII", "XIV", "XV",
					   	   "XVI", "XVII", "XVIII", "XIX", "XX"};
	int num;

	do
	{
		do 
		{	
			cout << "Enter a number and between 1 and 20\n"
				 << "to see its roman numeral equivalent.\n"
				 << "Enter '0' to exit program: ";
			cin  >> num;

			if (num < 0 || num > 20)
				cout << "Error! Number was not in range.\n";

		} while (num < 0 || num > 20);

		cout << roman[num] << endl;

	} while (num != 0);
	cout << endl;
	return 0;
}

int getTotal(int array[], int numElts)
{
int total = 0;

for (int pos = 0; pos < numElts; pos++)
total += array[pos];

return total;
}


int posOfLargest(int array[], int numElts)
{
int indexOfLargest = 0;

for (int pos = 1; pos < numElts; pos++)
{
if (array[pos] > array[indexOfLargest])
indexOfLargest = pos;
}
return indexOfLargest;
}


int posOfSmallest(int array[], int numElts)
{
int indexOfSmallest = 0;

for (int pos = 1; pos < numElts; pos++)
{
if (array[pos] < array[indexOfSmallest])
indexOfSmallest = pos;
}
return indexOfSmallest;
}