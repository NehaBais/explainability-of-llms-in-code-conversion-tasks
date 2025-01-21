Error: The code contains several syntax errors, including using `char` as both a variable name and a type name, using `chars` as both an array and a variable name, and not using parentheses for function-style casts or type construction.

Fix: The errors can be fixed by using different variable names for the characters and arrays, and by adding parentheses for function-style casts or type construction.

Corrected code:
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "abcdefgh";
  int n, m, indx;
  char c;
  char chars[2];

  // Display a substring starting from n characters in and of m length.
  cin >> n >> m;
  cout << s.substr(n - 1, n + m - 1) << endl;

  // Display a substring starting from n characters in, up to the end of the
  // string.
  cin >> n;
  cout << s.substr(n - 1) << endl;

  // Display whole string minus last character.
  cout << s.substr(0, s.length() - 1) << endl;

  // Display a substring starting from a known character within the string and
  // of m length.
  cin >> c;
  indx = s.find(c);
  if (indx != string::npos) {
    cout << s.substr(indx, m) << endl;
  } else {
    cout << "Character not found." << endl;
  }

  // Display a substring starting from a known substring within the string and
  // of m length.
  cin >> chars;
  indx = s.find(chars);
  if (indx != string::npos) {
    cout << s.substr(indx, m) << endl;
  } else {
    cout << "String not found." << endl;
  }

  return 0;
}
```
