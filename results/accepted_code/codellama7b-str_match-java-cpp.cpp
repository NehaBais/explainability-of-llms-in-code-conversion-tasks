#include <iostream>
#include <string>

int main() {
  std::string str1 = "abcd";
  std::string str2 = "ab";

  // Determine if the first string starts with the second string
  if (str1.find(str2) == 0) {
    std::cout << "The first string starts with the second string" << std::endl;
  } else {
    std::cout << "The first string does not start with the second string"
              << std::endl;
  }

  // Determine if the first string contains the second string at any location
  if (str1.find(str2) != std::string::npos) {
    std::cout << "The first string contains the second string at position: "
              << str1.find(str2) << std::endl;
  } else {
    std::cout << "The first string does not contain the second string"
              << std::endl;
  }

  // Determine if the first string ends with the second string
  if (str1.rfind(str2) == str1.size() - str2.size()) {
    std::cout << "The first string ends with the second string" << std::endl;
  } else {
    std::cout << "The first string does not end with the second string"
              << std::endl;
  }

  return 0;
}