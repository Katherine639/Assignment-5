#include <iostream>

using namespace std;

class Widget

{

     private://member variables

          double now;

          double nod;

     public:

          //Mutator function for widgets

          void setWidgets(double w)

          {

              if(w>0)

              {

                   now=w;

                   nod=now/160;

              }

              else

              cout<<"Invalid number of widgets"<<endl;

          }

          //Accessor function for widgets

          double getWidgets()

           {

                   return nod;

          }

};

int main()

{

     Widget w;

    

     double d;

     cout<<"Enter the number of widgets"<<endl;

     cin>>d;

     w.setWidgets(d);

     /*Calculating the number of days it takes

          for given widgets number*/

     cout<<"The number of days it take to produce "

             <<d<<" widgets is:"<<w.getWidgets()<<endl;

     system("pause");

     return 0;

}