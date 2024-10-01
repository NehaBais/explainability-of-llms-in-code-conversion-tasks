#include <iostream>
#include <string>

void string_match(std::string str1, std::string str2) {
  // Determining if the first string starts with second string
  if (str1.find(str2) == 0) {
    std::cout << "String 1 starts with String 2\n";
  } else {
    std::cout << "String 1 does not start with String 2\n";
  }

  // Determining if the first string contains the second string at any location
  if (str1.find(str2) != std::string::npos) {
    std::cout << "String 1 contains String 2\n";
  } else {
    std::cout << "String 1 does not contain String 2\n";
  }

  // Determining if the first string ends with the second string
  if (str1.rfind(str2) == str1.size() - str2.size()) {
    std::cout << "String 1 ends with String 2\n";
  } else {
    std::cout << "String 1 does not end with String 2\n";
  }
}

int main() {
  string_match("abcd", "ab"); // returns True
  string_match("abcd", "zn"); // returns False
  string_match("bb", "abab"); // returns False
  string_match("ab", "abab"); // returns True

  return 0;
}