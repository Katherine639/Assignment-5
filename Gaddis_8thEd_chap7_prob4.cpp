#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

class Car
{
private:
int YearModel;
int Speed;
string Make;
public:
Car(int, string, int);
string getMake();
int getModel();
int getSpeed();
void Accelerate();
void Brake();
};

Car::Car(int YearofModel, string Makeby, int Spd)
{
YearModel = YearofModel;
Make = Makeby;
Speed = Spd;
}
//To get who makes the car.
string Car::getMake()
{
return Make;
}
//To get the year of the car.
int Car::getModel()
{
return YearModel;
}
//To holds the car actual speed.
int Car::getSpeed()
{
return Speed;
}
//To increase speed by 5.
void Car::Accelerate()
{
Speed = Speed +5;
}
//To drop the speed of the car by 5.
void Car::Brake()
{
Speed = Speed -5;
}



int main()
{
int Speed = 0; //Start Cars speed at zero.
int index;
int total=0;
cout<<"Your G-6 is speed is: "<<Speed<<endl;
Car first( 2008, "Pontiac", Speed);
total+=Speed;
//Display the menu and get a valid selection

for(index=0;index<6;index++)
{
first.Accelerate();
cout<<"The car is accelerating at "<<first.getSpeed()<<" mph."<<endl;

// here u have to change Speed to //first.getSpeed()                                                                                                         
}
cout<<"The car's speed current speed is "<<first.getSpeed()<<" mph."<<endl;
for(index=0;index<6;index++)
{
first.Brake();
cout<<"The car is breaking. The speed is now "<<first.getSpeed()<<" mph."<<endl;

// here u have to change Speed to //first.getSpeed()                                                                                                         

}
cout<<"The car's speed is now "<<first.getSpeed()<<" mph."<<endl;
return 0;
}

// now compile and run CHeers.