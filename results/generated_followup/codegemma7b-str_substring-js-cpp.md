**Error:** The `substring` method is not available in C++. Only the `substr` method is available for extracting substrings.

**Fix:** Replace `substring` with `substr` in the lines where it is used.

**Corrected Code:**

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
  string str = "abcdefgh";
  int n = 2;
  int m = 3;

  // starting from n characters in and of m length;
  cout << str.substr(n, m) << endl; // => "cde"

  // starting from n characters in, up to the end of the string;
  cout << str.substr(n) << endl;    // => "cdefgh"

  // whole string minus last character;
  cout << str.substr(0, str.length() - 1) << endl; // => "abcdefg"

  // starting from a known character within the string and of m length;
  cout << str.substr(str.find('b'), m) << endl; // => "bcd"

  // starting from a known substring within the string and of m length.
  cout << str.substr(str.find("bc"), m) << endl; // => "bcd"

  return 0;
}
```
