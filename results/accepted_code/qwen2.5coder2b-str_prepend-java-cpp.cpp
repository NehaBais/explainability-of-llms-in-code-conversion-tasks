#include <iostream>
using namespace std;

int main() {
  // Declare and initialize a string variable with some text value
  string string = "def";

  // Prepend another string literal to the existing string using '+' operator
  string = "abc" + string;

  cout << "Modified string: " << string << endl;
  return 0;
}