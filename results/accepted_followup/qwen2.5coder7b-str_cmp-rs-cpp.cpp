#include <algorithm>
#include <cctype> // For std::toupper and std::tolower
#include <iostream>
#include <string>

// Function to check if two strings are equal
bool isEqual(const std::string &a, const std::string &b) { return a == b; }

// Function to check if two strings are not equal
bool isNotEqual(const std::string &a, const std::string &b) {
  return !isEqual(a, b);
}

// Function to check if one string comes after another (lexicographically)
bool isAfter(const std::string &a, const std::string &b) { return a > b; }

// Function to check if one string comes before another (lexicographically)
bool isBefore(const std::string &a, const std::string &b) {
  return !isAfter(a, b);
}

// Function for case-insensitive comparison
bool isEqualIgnoreCase(const std::string &a, const std::string &b) {
  auto areEqual = [](unsigned char a, unsigned char b) -> bool {
    return std::tolower(static_cast<unsigned char>(a)) ==
           std::tolower(static_cast<unsigned char>(b));
  };
  return std::equal(a.begin(), a.end(), b.begin(), b.end(), areEqual);
}

int main() {
  // Only same types can be compared
  std::string a = "abc";
  std::string b = "Bac";

  if (isEqual(a, b)) {
    std::cout << "The strings are equal" << std::endl;
  }
  if (isNotEqual(a, b)) {
    std::cout << "The strings are not equal" << std::endl;
  }
  if (isAfter(a, b)) {
    std::cout << "The first string is lexically after the second" << std::endl;
  }
  if (isBefore(a, b)) {
    std::cout << "The first string is lexically before the second" << std::endl;
  }

  // Case-insensitive comparison
  if (isEqualIgnoreCase(a, b)) {
    std::cout << "Both strings are equal when ignoring case" << std::endl;
  }

  return 0;
}