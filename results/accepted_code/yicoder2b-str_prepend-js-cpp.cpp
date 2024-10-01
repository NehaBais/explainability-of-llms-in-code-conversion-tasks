#include <iostream>
#include <string> // Needed for std::string
using namespace std;
int main() {
  // Define a string variable s and assign it to "Hello"
  string s = "Hello";

  // Prepend the string with another string literal
  s = ", World" + s;

  // Print the updated string
  cout << s << endl;
  return 0;
}