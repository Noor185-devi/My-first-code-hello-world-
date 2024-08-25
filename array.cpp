
#include <iostream>
using namespace std;

int main() {
    string ary[5];

    // Taking user input for each element of the array
    cout << "Enter 5 strings for the array:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> ary[i];
    }

    // Printing the 2nd element of the array (index 1)
    cout << "The second element of the array is: " << ary[1] << endl;

    return 0;
}