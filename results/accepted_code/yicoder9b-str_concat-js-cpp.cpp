#include <iostream>
#include <string>
using namespace std;

int main() {
  // Create a string variable equal to any text value.
  string s = "hello";

  // Create another string variable whose value is the original variable
  // concatenated with another string literal.
  string t = s + " there!";

  // Print the content of the variables
  cout << "s: " << s << endl;
  cout << "t: " << t << endl;

  return 0;
}