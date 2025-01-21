 The error occurred because C++ does not support comparison of numeric values with `std::string` directly, unlike JavaScript which can implicitly convert the numbers to strings for comparison if needed. 

To fix this issue, you would need to either convert your integer value (123) to a string before comparing or cast it to a character type like char. Here is an example using C++ cast:

```cpp
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string a = "abcd";
  string b1 = "abcd";
  string b2 = "dcba";
  char d1 = '1'; // Note: This is not recommended, this should ideally be an integer
  string d2 = "23";

  cout << (a == b1) << "\n"; // true
  cout << (a != b1) << "\n"; // false
  
  cout << ((char)d1 != d2[0]) << "\n"; // Will print '1' for equal and '0' for unequal. Because '1' is not equal to the first character of "23" which is '2'.

  return 0;
}
```

This code converts the integer 'd1' to a char before doing the comparison, making it equivalent to comparing two chars directly. This approach assumes that you are certain that your numbers will fit within a char data type. If you need to compare larger integers or negative numbers with strings, consider using stringstream for conversion of integer to string, and then compare. 

This issue arises because the '==' operator in C++ is not implicitly converting types like JavaScript does.
