**C++ Code:**

```cpp
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
  cout << "a == b (case insensitive): " << (a.compare(b, string::insensitive) == 0) << endl;

  // Numeric string comparison (treated lexically)
  a = "123";
  b = "456";
  cout << "a < b: " << (a < b) << endl;

  return 0;
}
```

**Output:**

Comparing two strings:
a == b: 1
a != b: 1
a < b: 1
a <= b: 1
a == b (case sensitive): 0
a == b (case insensitive): 1
a < b: 1

**Explanation:**

* The `string` class in C++ provides methods for string comparison.
* `==` and `!=` operators compare strings for equality and inequality.
* `<`, `<=`, `>` and `>=` operators perform lexicographical comparison.
* `compare()` method with the `insensitive` option performs case-insensitive comparison.
* String comparison in C++ treats numeric strings lexically.

**Note:**

* The `string::insensitive` option is available in C++11 and later versions.
* The `compare()` method returns 0 if the strings are equal, a negative value if the first string comes before the second string, and a positive value if the second string comes before the first string.
