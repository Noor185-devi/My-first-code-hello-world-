#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    int x;
    cout<< "enter num"<<endl;
    cin>>a>>b;
    cout<<"before\n"<<a<<endl<<b<<endl;
    x=a;
    a=b;
    b=x;
    cout<<"after\n"<<a<<endl<<b<<endl;
    return 0;
}