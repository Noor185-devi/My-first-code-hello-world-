
#include <iostream>
using namespace std;

int main() {
    int ary[5][4];  // 2D array with 5 rows and 4 columns

    // Taking user input for each element of the 2D array
    cout << "Enter 20 strings for the array (5 rows, 4 columns):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Enter element for ary[" << i << "][" << j << "]: ";
            cin >> ary[i][j];
        }
    }

    // Printing the 2nd element of the first row (index [0][1])
    cout << "The second element of the first row is: " << ary[0][1] << endl;

    return 0;
}