#include <iostream>
using namespace std;

int main() {
  int month;
  cout<<"Enter month"<<endl;
  cin>>month;
  switch (month) {
  case 1:
    cout << "January";
    break;
  case 2:
    cout << "February";
    break;
  case 3:
    cout << "March";
    break;
  case 4:
    cout << "April";
    break;
  case 5:
    cout << "May";
    break;
  case 6:
    cout << "June";
    break;
  case 7:
    cout << "july";
    break; 
    case 8:
    cout << "august";
    break;
   case 9:
    cout << "September";
    break;
   case 10:
    cout << "October";
    break;
   case 11:
    cout << "November";
    break;
   case 12:
    cout << "December";
    break;
   default:
    cout << "The end";
    break;
    }
    }