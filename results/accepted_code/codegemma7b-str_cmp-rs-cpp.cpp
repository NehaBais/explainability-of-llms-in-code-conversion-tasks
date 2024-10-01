#include <iostream>
#include <locale>
#include <string>

int main() {
  // Strings are compared using the '<' operator for lexical comparison
  std::string a = "abc";
  std::string b = "Bac";

  if (a == b) {
    std::cout << "The strings are equal" << std::endl;
  } else {
    std::cout << "The strings are not equal" << std::endl;
  }

  if (a != b) {
    std::cout << "The strings are not equal" << std::endl;
  } else {
    std::cout << "The strings are equal" << std::endl;
  }

  if (a > b) {
    std::cout << "The first string is lexically after the second" << std::endl;
  } else {
    std::cout << "The first string is not lexically after the second"
              << std::endl;
  }

  if (a < b) {
    std::cout << "The first string is lexically before the second" << std::endl;
  } else {
    std::cout << "The first string is not lexically before the second"
              << std::endl;
  }

  // Case-sensitive comparison
  if (a >= b) {
    std::cout << "The first string is not lexically before the second"
              << std::endl;
  } else {
    std::cout << "The first string is lexically before the second" << std::endl;
  }

  if (a <= b) {
    std::cout << "The first string is not lexically after the second"
              << std::endl;
  } else {
    std::cout << "The first string is lexically after the second" << std::endl;
  }

  // Case-insensitive comparison
  std::string a_upper = a;
  std::string b_upper = b;

  a_upper.transform(std::begin(a_upper), std::end(a_upper),
                    [](char c) { return std::toupper(c, std::locale()); });
  b_upper.transform(std::begin(b_upper), std::end(b_upper),
                    [](char c) { return std::toupper(c, std::locale()); });

  if (a_upper == b_upper) {
    std::cout << "Both strings are equal when ignoring case" << std::endl;
  } else {
    std::cout << "Both strings are not equal when ignoring case" << std::endl;
  }

  return 0;
}