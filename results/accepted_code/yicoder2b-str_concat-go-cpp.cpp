#include <iostream>
using namespace std;
int main() {
  // assign any text value to a string variable
  string s = "hello";

  cout << s << endl; // output the content of the string variable

  s += " literal"; // concatenate variable and literal
                   // assign result to another string variable
  string s2 = s;

  // output second string variable
  cout << s2 << endl;

  return 0;
}