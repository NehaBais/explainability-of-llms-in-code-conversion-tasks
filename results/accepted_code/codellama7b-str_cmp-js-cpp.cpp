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