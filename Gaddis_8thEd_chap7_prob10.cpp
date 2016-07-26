#include <iostream>
using namespace std;

struct CorpData {
CorpData(const char *n, double f, double s, double t, double fo)
:name(n),first(f),second(s),third(t),fourth(fo){}
const char *name;
double first;
double second;
double third;
double fourth;
};

void function(const struct CorpData &item) {
double total;
double average;
total=item.first+item.second+item.third+item.fourth;
average=total/4;
cout<<"Name: "<<item.name<<"\t Average: "
<<average<<"\t Total: "<<total<<endl;
}

int main() {
struct CorpData East("East",100,200,150,300);
struct CorpData West("West",200,130,180,400);
struct CorpData South("South",80,100,500,200);
struct CorpData North("North",400,100,30,900);

function(East);
function(West);
function(South);
function(North);

return 0;

}