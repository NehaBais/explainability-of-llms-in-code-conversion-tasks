#include <iostream>
#include <string>
using namespace std;

int main() {
  // Creating a string variable equal to any text value.
  string s = ", World";

  // Prepending the string with another string literal.
  string prependString = "Hello";
  s = prependString + s;

  cout << s;

  return 0;
}