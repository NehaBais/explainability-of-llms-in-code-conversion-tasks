
In JavaScript, strings can be compared using the following operators:

* `==`: Equal to (checks if two strings are equal in value and type)
* `===`: Strictly equal to (checks if two strings are equal in value, type, and identity)
* `!=`: Not equal to (checks if two strings are not equal in value or type)
* `!==`: Strictly not equal to (checks if two strings are not equal in value, type, or identity)
* `<`: Lexically ordered before (checks if one string is ordered before another string in a dictionary-like order)
* `>`: Lexically ordered after (checks if one string is ordered after another string in a dictionary-like order)

In C++, strings can be compared using the following functions:

* `std::string`: A class template for manipulating and comparing strings. It provides a variety of methods for comparing strings, such as `operator==` (equal to), `operator!=` (not equal to), `<` (lexically ordered before), and `>` (lexically ordered after).
* `std::tolower()`: A function that converts an uppercase character to its lowercase equivalent. It can be used to perform case-insensitive comparisons.

Here is an example of how the above code could be converted to C++ using these functions:
```
#include <iostream>
#include <string>

int main() {
  std::string str1 = "abcd";
  std::string str2 = "abcd";

  // Exact equality
  if (str1 == str2) {
    std::cout << "Strings are equal" << std::endl;
  } else {
    std::cout << "Strings are not equal" << std::endl;
  }

  // Case-sensitive equality
  if (str1 != str2) {
    std::cout << "Strings are not equal" << std::endl;
  } else {
    std::cout << "Strings are equal" << std::endl;
  }

  // Lexical ordering
  if (str1 < str2) {
    std::cout << "String 1 is ordered before String 2" << std::endl;
  } else if (str1 > str2) {
    std::cout << "String 1 is ordered after String 2" << std::endl;
  } else {
    std::cout << "Strings are equal" << std::endl;
  }

  // Case-insensitive comparison
  if (std::tolower(str1) == std::tolower(str2)) {
    std::cout << "Strings are equal, ignoring case" << std::endl;
  } else {
    std::cout << "Strings are not equal, ignoring case" << std::endl;
  }

  return 0;
}
```
In this example, we declare two `std::string` variables `str1` and `str2` and assign them the values "abcd" and "abcd", respectively. We then use these strings to perform various comparisons using the `==`, `!=`, `<`, and `>` operators and the `std::tolower()` function. The output of this code will be similar to the original JavaScript code, but with some minor differences due to the different syntax and semantics of C++.
