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

  // Lexicographical comparison
  if (str1 < str2) {
    std::cout << "str1 is less than str2" << std::endl;
  } else if (str1 > str2) {
    std::cout << "str1 is greater than str2" << std::endl;
  } else {
    std::cout << "str1 and str2 are equal" << std::endl;
  }

  // Substring search
  if (str1.find(str2) != std::string::npos) {
    std::cout << "str1 contains str2" << std::endl;
  } else {
    std::cout << "str1 does not contain str2" << std::endl;
  }

  return 0;
}