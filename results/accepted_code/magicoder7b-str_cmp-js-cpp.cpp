#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string a = "abcd";
  string b1 = "abcd";
  string b2 = "dcba";
  string c1 = "ABCD";
  string c2 = "abcd";
  int d1 = 123;
  string d2 = "123";

  // Comparing two strings for exact equality
  cout << (a == b1) << "\n"; // true
  cout << (a != b1) << "\n"; // false

  // Comparing two strings to see if one is lexically ordered before than the
  // other
  cout << (a < b2) << "\n"; // true
  cout << (a > b2) << "\n"; // false

  // Comparing two strings for inequality
  cout << (d1 != d2) << "\n"; // true

  // Comparing two strings to see if one is lexically ordered after than the
  // other
  cout << (a > b1) << "\n"; // false
  cout << (a < b1) << "\n"; // false

  // Demonstrating case sensitive and insensitive comparison.
  cout << (c1 == c2) << "\n";                         // false
  cout << (tolower(c1[0]) == tolower(c2[0])) << "\n"; // true

  return 0;
}