#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std; 

const double grav=9.8; 
double fallingDistance(); 

int main() 
{ 
double distance=0; 
for (int time=0; time<10; time++) 
{ 
distance =fallingDistance(); 
cout<<distance<<endl; 
} 
return 0; 
} 

double fallingDistance () 
{ 
double distance=0; 
double time=4; 
cout<<"please enter the time it took the object to fall:"<<endl; 
cout<<"Time"<<endl; 
cin>>time; 
distance=((.5)*grav)*(pow(time,2)); 
cout<<"the distance is "; 
return distance; 
}