#include<iostream>
using namespace std;

int main()
{ 
int marks;
cout<<"enter marks"<<endl;
cin>>marks;
if(marks >= 80){
cout<<"your grade is A+"<<endl;
}
else if   (marks >= 71){
cout<<"your grade is B"<<endl;
}
else {
cout<<"fail"<<endl;
}

    return 0;
    }