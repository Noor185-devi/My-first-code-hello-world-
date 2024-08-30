
#include <iostream>
#include <string>
using namespace std;

void swapnum(int &a,int &b ){
int z=a;
a=b;
b=z;


}
int main(){
int firstnum= 5;
int secondnum=6;
cout<<"before swap\n"<<firstnum<<secondnum<<"\n";
swapnum(firstnum,secondnum);
cout<<"after swap\n"<<firstnum<<secondnum;
return 0;

}