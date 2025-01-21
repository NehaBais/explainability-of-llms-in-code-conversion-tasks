Error: The errors are due to the fact that `std::string` does not have member functions named `substring` or `indexOf`, which are used in the original JavaScript code.
Fix: Replace `substring` with `substr` and replace `indexOf` with `find`. These member functions are available on `std::string` and will fix the errors.
Corrected code:
```cpp
#include <iostream>
#include <string>

int main() {
  std::string str = "abcdefgh";

  // Extract a substring starting from n characters in and of m length.
  int n = 2;
  int m = 3;
  std::cout << str.substr(n, m) << std::endl; // Output: "cde"

  // Extract a substring starting from n characters in, up to the end of the
  // string.
  std::cout << str.substr(n) << std::endl; // Output: "cdefgh"

  // Extract the whole string minus the last character.
  std::cout << str.substr(0, str.length() - 1)
            << std::endl; // Output: "abcdefg"

  // Extract a substring starting from a known character within the string and
  // of m length.
  char known_char = 'b';
  std::cout << str.substr(str.find(known_char), m)
            << std::endl; // Output: "bcd"

  // Extract a substring starting from a known substring within the string and
  // of m length.
  std::string known_substring = "bc";
  std::cout << str.substr(str.find(known_substring), m)
            << std::endl; // Output: "bcd"

  return 0;
}
```
