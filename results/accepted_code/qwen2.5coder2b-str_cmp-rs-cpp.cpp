#include <iostream>
#include <string>

int main() {
  std::string a("abc");
  std::string b("Bac");

  if (a == b) {
    std::cout << "The strings are equal\n";
  } else {
    std::cout << "The strings are not equal\n";
  }

  if (a != b) {
    std::cout << "The strings are not equal\n";
  } else {
    std::cout << "The strings are equal\n";
  }

  if (a > b) {
    std::cout << "The first string is lexically after the second\n";
  } else {
    std::cout << "The first string is not lexically after the second\n";
  }

  if (a < b) {
    std::cout << "The first string is lexically before the second\n";
  } else {
    std::cout << "The first string is not lexically before the second\n";
  }

  if (a >= b) {
    std::cout << "The first string is not lexically before the second\n";
  } else {
    std::cout << "The first string is not lexically after the second\n";
  }

  if (a <= b) {
    std::cout << "The first string is not lexically after the second\n";
  } else {
    std::cout << "The first string is not lexically before the second\n";
  }

  // case-insensitives

  // equality
  if (a == b) {
    std::cout << "Both strings are equal when ignoring case\n";
  }

  // everything else, create owned Strings, then compare as above
  std::string a2 = "ABC";
  std::string b2 = "bac";

  if (a2 == b2) {
    std::cout << "Both strings are equal when ignoring case\n";
  } else {
    std::cout << "The strings are not equal\n";
  }

  return 0;
}