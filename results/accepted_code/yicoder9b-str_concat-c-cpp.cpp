#include <iostream>
#include <string>
using namespace std;

int main() {
  // Create a string variable equal to any text value.
  string s = "hello";
  cout << s << endl;

  // Create another string variable whose value is the original variable
  // concatenated with another string literal.
  string s2 = s + " literal";
  cout << s2 << endl;
}