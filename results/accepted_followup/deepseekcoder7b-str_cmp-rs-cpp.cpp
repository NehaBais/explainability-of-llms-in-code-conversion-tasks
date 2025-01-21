#include <iostream>
#include <string>

int main() {
  std::string a = "abc";
  std::string b("Bac");

  // Comparing two strings for exact equality
  if (a == b) {
    std::cout << "The strings are equal" << std::endl;
  }
  if (a != b) {
    std::cout << "The strings are not equal" << std::endl;
  }

  // Comparing two strings to see if one is lexically ordered before than the
  // other
  if (b > a) {
    std::cout << "The first string is lexically after the second" << std::endl;
  }

  return 0;
}