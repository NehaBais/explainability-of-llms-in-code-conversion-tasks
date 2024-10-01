#include
#include
using namespace std;
int main() {
  string s1 = "abcd";
  string s2 = "dcba";
  // Compare two strings for exact equality
  cout << (s1 == s2) << endl; // Output: true

  // Compare two strings for inequality
  cout << (s1 != s2) << endl; // Output: false

  // Compare two strings to see if one is lexically ordered before than the
  // other
  cout << (s1 < s2) << endl; // Output: true

  // Compare two strings to see if one is lexically ordered after than the other
  cout << (s1 > s2) << endl; // Output: false

  // Case sensitive comparison
  cout << (s1 == s2) << endl; // Output: true

  // Case insensitive comparison
  cout << (s1.compare(s2) == 0) << endl; // Output: true

  // Compare numeric strings using lexical order
  double d1 = 123.456;
  double d2 = 123.457;
  cout << (d1 < d2) << endl; // Output: true
  cout << (d2 > d1) << endl; // Output: false

  return 0;
}