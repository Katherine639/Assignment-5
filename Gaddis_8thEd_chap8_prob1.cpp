#include <iostream>
int countPerfect(int *arr);
using namespace std;
int main(){
int arr[20];
cout<<"Enter 20 numbers from 1 to 100"<<endl;;
for(int i=0;i<20;i++){
   cin>>arr[i];
   }
   cout<<"Total Perfect Numbers are="<<countPerfect(arr);

return 0;

}

int countPerfect(int *arr){
   int perfect=0;
   for(int i=0;i<20;i++){
       if(arr[i]==100){
           perfect++;
       }
   }
   return perfect;
}

