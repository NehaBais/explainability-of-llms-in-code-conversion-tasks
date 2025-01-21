#include <algorithm> // for std::transform
#include <iostream>
#include <string>

int main() {
  std::string a = "abc";
  std::string b = "Bac";

  // Exact equality and inequality
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

  // Lexical comparison
  if (a > b) {
    std::cout << "The first string is lexically after the second" << std::endl;
  } else if (a < b) {
    std::cout << "The first string is lexically before the second" << std::endl;
  } else {
    std::cout << "The strings are lexicographically equal" << std::endl;
  }

  // Case-insensitive comparison using std::equal with a custom comparator
  auto to_lower = [](char c) -> char { return std::tolower(c); };
  std::string a_lowercase, b_lowercase;
  std::transform(a.begin(), a.end(), std::back_inserter(a_lowercase), to_lower);
  std::transform(b.begin(), b.end(), std::back_inserter(b_lowercase), to_lower);

  if (a_lowercase == b_lowercase) {
    std::cout << "Both strings are equal when ignoring case" << std::endl;
  }

  // Numerical string comparison (not lexically, but strictly as strings)
  std::string num1 = "123";
  std::string num2 = "456";

  if (num1 < num2) {
    std::cout << "The first numerical string is less than the second"
              << std::endl;
  } else if (num1 > num2) {
    std::cout << "The first numerical string is greater than the second"
              << std::endl;
  } else {
    std::cout << "The two numerical strings are equal" << std::endl;
  }

  return 0;
}