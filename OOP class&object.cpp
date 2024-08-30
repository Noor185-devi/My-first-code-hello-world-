#include <iostream>
using namespace std;

class girl {

public:
string name ;
int age ;
void intro(){

cout<<"my name is "<<name<<"and I am "<<age<<"years old"<<endl;


}

};
int main(){

girl g1;
g1.name="Amber";
g1.age= 21;
g1.intro();
return 0;





}