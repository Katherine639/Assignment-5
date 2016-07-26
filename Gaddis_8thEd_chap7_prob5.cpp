#include <iostream>

#include <iomanip>

using namespace std;

class Pop            //decllare a class

{

                private:

int population;         //member variables

 int births;
 int deaths;

   public:  void setPopulation(int);    //function prototypes

void setBirths(int);

void setDeaths(int);

int getPopulation();

double getBirthRate();

double getDeathRate();

Pop():

population(0),

births(0),

deaths(0) {

}                          
};

void Pop::setPopulation(int p) {population = p;

}

void Pop::setBirths(int b)  {births = b;}

void Pop::setDeaths(int d) {deaths = d;

}

int Pop::getPopulation(){return population;

}

                               
  double Pop:: getBirthRate()

 {return births/static_cast <double>(population);

  }

  double Pop::getDeathRate()

{

         return deaths/static_cast <double>(population);
    }
                    

  int main()

 {

  Pop myTown;
 int numPeople;
 int numBirths;
 int numDeaths;

                                               

                                               
 cout<<"Enter the total population\n\n";
  cin>>numPeople;
while(numPeople < 1)
 {
cout<<"value must be greater than 0, please re-enter\n\n";
cin>>numPeople;
      }                                         

 myTown.setPopulation(numPeople);
  cout<<"Enter annual number of births\n\n";
cin>>numBirths;

                                               

        while(numBirths < 0)

      {

cout<<"value cannot be negative, please re-enter \n\n";
     cin>>numBirths;

 }

                                               

myTown.setBirths(numBirths);

cout<<"Enter annual number of deaths\n\n";
    cin>>numDeaths;

                                               
  while(numDeaths < 0)

    {
  cout<<"value cannot be negative, please re-enter\n\n";

   cin>>numDeaths;
   }

myTown.setDeaths(numDeaths);

                                               

         cout<<"population statistics ";

       cout<<fixed<<showpoint<<setprecision(3);

                                               
cout<<"\n\tPopulation: " <<setw(7)<<myTown.getPopulation();

                                               

cout<<"\n\tBirth rate: "<<setw(7)<<myTown.getBirthRate();
 cout<<"\n\tDeath Rate:  "<<setw(7)<<myTown.getDeathRate()<<endl;

 return 0;
 }