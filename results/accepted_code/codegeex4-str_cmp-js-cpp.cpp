#include <algorithm> // For std::tolower
#include <iostream>

int main() {
  std::string s1 = "abcd", s2 = "abcd";
  int num1 = 123, num2 = 123;

  std::cout << (s1 == s2) << std::endl; // true
  std::cout << (s1 != s2) << std::endl; // false

  std::string numStr1 = "123", numStr2 = "123";

  if (num1 == std::stoi(numStr1)) {
    std::cout << "Equal" << std::endl;
  } else {
    std::cout << "Not Equal" << std::endl;
  }

  if (num1 != std::stoi(numStr2)) {
    std::cout << "Not Equal" << std::endl;
  } else {
    std::cout << "Equal" << std::endl;
  }

  if (s1 < s2) {
    std::cout << "s1 is lexicographically smaller than s2" << std::endl;
  } else {
    std::cout << "s1 is not lexicographically smaller than s2" << std::endl;
  }

  std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

  if (s1 == s2) {
    std::cout << "s1 and s2 are equal when case is ignored" << std::endl;
  } else {
    std::cout << "s1 and s2 are not equal when case is ignored" << std::endl;
  }

  return 0;
}