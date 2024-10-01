#include <iostream>
#include <string>

int main() {
  using namespace std;

  // Comparing two strings for exact equality and inequality (lexically)
  cout << boolalpha; // To output boolean values as true or false instead of
                     // true or false.
  string s1 = "abcd", s2 = "dcba", s3 = "ABCD", s4 = "abcd";
  cout << (s1 == s2) << endl; // Output: 0 (false)
  cout << (s1 == = s2)
       << endl; // Output: 0 (false because they're not of the same type)
  cout << (s3 != s4) << endl; // Output: 1 (true)
  cout << (s3 == = s4)
       << endl; // Output: 0 (false because they're not of the same type)
  cout << (s1 < s2) << endl; // Output: 0 (false)
  cout << (s1 > s2) << endl; // Output: 1 (true)

  // Comparing two strings to see if one is lexically ordered before than the
  // other (case sensitive)
  cout << ((s3 < s4) ? "True" : "False") << endl; // Output: True

  // Comparing two strings to see if one is lexically ordered after than the
  // other (case insensitive)
  cout << ((s1.toupper() < s2.toupper()) ? "True" : "False")
       << endl; // Output: False
}