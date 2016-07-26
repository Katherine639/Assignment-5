#include <iostream> 
using namespace std; 

int toCelsius(int fahr); 

int main() 
{ 
cout << "Farenheit\tCelsius\n"; 
for(int i = 0; i <= 20; i++) 
{ 
cout << i << "\t\t" << toCelsius(i) << endl; // use (i) to call the function with the i as an argument 
} 
return 0; // 'cause main returns an int 
} 

int toCelsius(int fahr) 
{ 
return(int) ((fahr - 32.0) * (5.0/9.0)); // return the value not the function name 
}