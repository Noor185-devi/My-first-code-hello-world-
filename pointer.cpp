#include <iostream>
using namespace std;
int main() {
    int a,b,z;
    int* x=&a;
    int *y=&b;
    cout<< "enter num"<<endl;
    cin>>a>>b;
    cout<<"before\n"<<a<<endl<<b<<endl;
    z=*x;
    *x=*y;
    *y=z;
    cout<<"after\n"<<a<<endl<<b;
    return 0;
}