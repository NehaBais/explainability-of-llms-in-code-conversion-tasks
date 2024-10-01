#include <iostream>
#include <string>
using namespace std;
int main() {
  string str1 = "abcd", str2 = "dcba";
  cout << (str1 == str2) << endl;  // false
  cout << !(str1 == str2) << endl; // true
  cout << (str1 != str2) << endl;  // true
  cout << (str1 < str2)
       << endl; // false, lexicographically ordered before "dcba"
  cout << (str1 > str2) << endl; // true, lexicographically ordered after "dcba"
  cout << str1.ignorecase() == str2.ignorecase()
                                   << endl; // true, case-insensitive comparison
}