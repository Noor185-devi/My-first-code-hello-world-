
#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("Pakistan");
  myFunction();
  myFunction("USA");
  return 0;
}
