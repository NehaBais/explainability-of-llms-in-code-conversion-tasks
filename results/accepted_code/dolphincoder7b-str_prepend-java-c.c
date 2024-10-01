#include <iostream>
using namespace std;
int main() {
  // Initialize the string variable
  string str = "def";

  // Prepend the string with another string literal
  str = "abc" + str;

  // Output the result
  cout << "Result: " << str << endl;

  return 0;
}