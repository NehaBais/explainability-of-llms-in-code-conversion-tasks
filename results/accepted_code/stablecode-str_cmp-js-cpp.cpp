#include <iostream>
#include <string>

int main() {
  std::string str1 = "abcd";
  std::string str2 = "dcba";

  // Equality
  if (str1 == str2)) {
      std::cout << "\"" << str1 << "\" == \"" << str2 << "\"\n"; // true
    }

  // Identical equality and type
  if (str1 == = str2)) {
      std::cout << "(\"" << str1 << "\" === \"" << str2 << "\"))\n"; // true
    }

  // Inequality
  if (!(str1 == str2))) {
      std::cout << "(\"" << str1 << "\" == \"" << str2
                << "\")) == false\n"; // false
    }

  // Not equal value or not equal type
  if (str1 != str2)) {
      std::cout << "(\"" << str1 << "\" != \"" << str2 << "\"))\n"; // true
    }

  // Lexical comparison: is str1 lexically ordered before str2?
  if (str1 < str2)) {
      std::cout << "(\"" << str1 << "\" < \"" << str2 << "\"))\n"; // true
    }

  // Lexical comparison: is str1 lexically ordered after str2?
  if (str1 > str2)) {
      std::cout << "(\"" << str1 << "\" > \"" << str2 << "\"))\n"; // false
    }

  // Case-insensitive comparisons
  std::string str3 = "ABCD";
  std::string str4 = "abcd";

  if (str3.toLowerCase() == str4.toLowerCase())) {
      std::cout << "\"" << str3 << "\".toLowerCase() == \"" << str4
                << "\".toLowerCase()\n"; // true
    }

  return 0;
}