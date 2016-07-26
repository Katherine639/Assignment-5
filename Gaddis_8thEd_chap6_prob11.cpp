#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double stockProfitLoss(int, double, double, double, double);

int main()
{
	int   NumOfShares;
	double ProfitLoss,
		   PurchPrice,
		   PurchComm,
		   SalePrice,
		   SaleComm;

	cout << "\nCaculate the profit (or loss) from the sale of stock.\n"
		 << "What is the number of shares? ";
	cin  >> NumOfShares;
	cout << "What is the purchase price per share? ";
	cin  >> PurchPrice;
	cout << "What is the purchase commission paid? ";
	cin  >> PurchComm;
	cout << "What is the sale price per share? ";
	cin  >> SalePrice;
	cout << "What is the sale commission paid? ";
	cin  >> SaleComm;

	ProfitLoss = stockProfitLoss(NumOfShares, PurchPrice, PurchComm, SalePrice,
								 SaleComm);

	cout << "The profit / loss from the sale of stock is $";
	cout << fixed << showpoint << setprecision(2);
	cout << ProfitLoss << endl << endl;

	return 0;
}

double stockProfitLoss(int NumOfShares, double PurchPrice, double PurchComm,
	                   double SalePrice, double SaleComm)
{
	return ((NumOfShares * SalePrice) - SaleComm) - ((NumOfShares * PurchPrice)
		    + PurchComm);
}