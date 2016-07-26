#include <iomanip> 
#include <cstring> 
using namespace std; 
double getSales(double sales, char division); 
void findHighest(double salesNE, double SE, double salesNW, double salesSW); 
int main(){ 
double salesNE=0; 
double salesSE=0; 
double salesNW=0; 
double salesSW=0; 
salesNE= getSales("NE"); 
salesSE= getSales("SE); 
salesNW= getSales("NW); 
salesSW= getSales("SW"); 
findHighest(salesNE,salesSE,salesNE,… 
system("Pause"); 
return 0; 
} 
double getSales (double sales, char *division){ 
double sales; 
cout<<"Enter sales of "<< division<<"Division"<<endl; 
do{ 
cout<<"Enter the quaterly sales"<<endl; 
cin>>sales; 
}while (sales<=0.00) 
return sales; 
} 
void findHighest(double salesNE, double salesSE, double salesNW, double salesSW){ 
if ( (salesNE> salesSE) && (salesNE>salesNW)&& (salesNE>salesSW)){ 
cout<<" the North East division has the greatest sales"<<endl; 
cout<<"with an amount of:"<<endl; 
cout<<salesNE; 
} 
if ( (salesSE> salesNE) && (salesSE>salesNW)&& (salesSE>salesSW)){ 
cout<<" the South East division has the greatest sales"<<endl; 
cout<<"with an amount of:"<<endl; 
cout<<salesNE; 
} 
if ( (salesNW> salesNE) && (salesNW>salesSE)&& (salesNW>salesSW)){ 
cout<<" the North West division has the greatest sales"<<endl; 
cout<<"with an amount of:"<<endl; 
cout<<salesNE; 
} 
if ( (salesSW> salesNE) && (salesSW>salesNW)&& (salesSW>salesSW)){ 
cout<<" the South West division has the greatest sales"<<endl; 
cout<<"with an amount of:"<<endl; 
cout<<salesNE; 
} 
}