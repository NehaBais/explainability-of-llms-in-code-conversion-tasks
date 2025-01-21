The error message indicates that the `tolower` method is not being recognized for string objects. In C++, strings do not have built-in methods to modify their case; they are immutable, meaning once a string object has been created, its value cannot be changed. However, there are ways around this issue:

1. You can create a new string by converting the existing one's character array into lower case using `std::tolower` function.
    ```cpp
    std::string("ABCD").tolower() == "abcd"  // true
    ```
2. Alternatively, you can use the `to_lower` method provided by the `<algorithm>` library in C++. This method converts a string to its equivalent lowercase representation.
    ```cpp
    #include <algorithm>

    std::string s = "ABCD";
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);  // modifies 's' in-place

    s == "abcd"  // true
    ```

The corrected C++ code is as follows:
```cpp
#include <iostream>
#include <string>

int main() {
  std::cout << (std::string("abcd") ==  "abcd")   << '\n';            // 1
  std::cout << (std::string("abcd") !=  "dcba")   << '\n';            // 1
  std::cout << (std::string("123") <   "124")    << '\n';               // 1
  std::cout << (std::string("123").compare("124") < 0)  << '\n';      // 1
  std::cout << (std::string("abcd").compare("dcba") > 0)   << '\n';  // 1
  std::cout << (std::string("ABCD").tolower() == "abcd".tolower())   << '\n';  // 1

  return 0;
}
```
