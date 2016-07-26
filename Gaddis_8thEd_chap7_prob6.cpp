#include<iostream>
#include <string>

using namespace std;

class Tips
{
private :
double tRate;

public:
Tips()
{
tRate = .065;
cout << "Default tax rate of the restaurant is "<<tRate<<endl;
}

Tips(double tax)
{
tRate = tax;
cout << "Tax rate given for the restaurant is"<<tRate<<endl;
}

double computeTip(double billAmount,double tipRate)
{
double tax,TAmount;
tax= billAmount*(tRate);
               double mealCost = billAmount -tax;
               TAmount= mealCost+tipRate;
cout << "Meal cost without tax is "<<mealCost<<endl;
return TAmount ;
}
};

int main()
{
   float p,q,r;
   cout<<"The total bill amount is";
   cin>>p;
   cout<<"Tip rate is";
   cin>>q;
Tips tip ;
r=tip.computeTip(p,q);
cout << "Meal cost including tip rate with no tax is "<<r<<endl;

return 0;
}