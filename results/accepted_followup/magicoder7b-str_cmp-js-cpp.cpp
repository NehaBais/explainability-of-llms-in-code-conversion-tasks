#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string a = "abcd";
  string b1 = "abcd";
  string b2 = "dcba";
  char d1 =
      '1'; // Note: This is not recommended, this should ideally be an integer
  string d2 = "23";

  cout << (a == b1) << "\n"; // true
  cout << (a != b1) << "\n"; // false

  cout << ((char)d1 != d2[0])
       << "\n"; // Will print '1' for equal and '0' for unequal. Because '1' is
                // not equal to the first character of "23" which is '2'.

  return 0;
}