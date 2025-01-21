#include <iostream>
#include <sstream>
using namespace std;

int main() {
  // Create a string variable equal to any text value
  string s1 = "hello";

  // Concatenate with another string literal
  cout << s1 + " world" << endl;

  s1 += " world";
  cout << s1 << endl;

  // Join strings using stringstream
  stringstream ss;
  ss << s1 << ", " << "world" << ", " << "mom";

  // And print the resultant string
  cout << ss.str() << endl;

  return 0;
}