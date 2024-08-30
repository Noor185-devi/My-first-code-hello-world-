#include <iostream>
using namespace std;

class girl {

public:
string name ;
int age ;

void intro(){
cout<<"enter name\n";
cin>>name;
cout<<"enter age \n";
cin>>age;
cout<<"my name is "<<name<<" and I am "<<age<<" years old."<<endl;


}

};
int main(){

girl g1;
g1.name;
g1.age;
g1.intro();
return 0;





}