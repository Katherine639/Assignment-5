#include <iostream>
#include <string>
using namespace std;
string months[] = {"January","February ","March","April","May","June","July","August","September","October","November","December"};
int days_in_months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
class Date //Sample Class for the C++ Tutorial
{
private:
int month; //Data member
int day; // Data member
int year;
public:
Date(int m, int d, int y)
{
if(m<1 || m >12)
month = 1;
else
month = m;
if(d<1 || d >days_in_months[month-1])
day = 1;
else
day = d;
if(y<2001)
year = 2001;
else
year = y;
}
~Date()
{
}
void printDate1()
{
cout << this->month << "/" << this->day << "/" << this->year << "\n";
}
void printDate2()
{
cout << months[month-1] << " " << day << ", " << year << endl;
}
void printDate3()
{
cout <<day <<" " <<months[month-1] << " "<< year << endl;
}
};
int main(void)
{
int tempMonth = 0 ;
int tempDay = 0;
int tempYear = 0;
while(tempMonth > 12 || tempMonth < 1)
{
cout << "Input a month 1 through 12 and press enter: \n";
cin >> tempMonth;
}
while(tempDay > days_in_months[tempMonth-1] || tempDay < 1)
{
cout << "Input a Day 1 through "<< days_in_months[tempMonth-1] << " and press enter: \n";
cin >> tempDay;
}
while(tempYear < 1)
{
cout << "Input a Year (assuming we do not count leap year): \n";
cin >> tempYear;
}
Date *d = new Date(tempMonth,tempDay,tempYear);
d->printDate1();
d->printDate2();
d->printDate3();
return 0;
}