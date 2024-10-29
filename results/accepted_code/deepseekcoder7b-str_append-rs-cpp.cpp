#include <iostream>
#include <string>
using namespace std;

int main() {
  string hello = "Hello world";

  // Append a string literal with += operator.
  hello += "!!!";
  cout << hello << endl;

  return 0;
}