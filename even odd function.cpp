#include<iostream>
using namespace std;

void evennum(int a){
if (a%2==0){
cout<<"it is even\n";}
else {
cout<<"it is odd\n";       }
}
int main()
{ 
int num;
cout<<"enter num"<<endl;
cin>>num;
evennum(num);

    return 0;
}