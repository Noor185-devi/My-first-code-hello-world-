#include <iostream>
using namespace std;

class girl {
public:
    
    girl() {
        // Constructor body can be left empty or initialize n here if needed
    }

    void fun() {
        cout << "it is constructor" << endl;
    }
    
    ~girl(){
    
    cout<<"it is deconstructor"<<endl;
    
    
    }
    
    
    
    
};


int main() {
    girl oba;
    
    oba.fun();
    return 0;
}