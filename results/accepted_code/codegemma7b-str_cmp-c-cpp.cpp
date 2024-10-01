#include <iostream>
#include <string>

using namespace std;

int main() {
  string a, b;

  cout << "Comparing two strings:" << endl;

  // Exact equality comparison
  a = "ball";
  b = "ball";
  cout << "a == b: " << (a == b) << endl;

  // Inequality comparison
  a = "ball";
  b = "bell";
  cout << "a != b: " << (a != b) << endl;

  // Lexicographical comparison
  a = "ball";
  b = "bell";
  cout << "a < b: " << (a < b) << endl;
  cout << "a <= b: " << (a <= b) << endl;

  // Case-sensitive comparison
  a = "ball";
  b = "BALL";
  cout << "a == b (case sensitive): " << (a == b) << endl;

  // Case-insensitive comparison
  a = "ball";
  b = "BALL";
  cout << "a == b (case insensitive): "
       << (a.compare(b, string::insensitive) == 0) << endl;

  // Numeric string comparison (treated lexically)
  a = "123";
  b = "456";
  cout << "a < b: " << (a < b) << endl;

  return 0;
}