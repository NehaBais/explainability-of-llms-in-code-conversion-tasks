#include <cctype>
#include <iostream>
#include <string>

int main() {
  std::string a = "abc";
  std::string b = "Bac";

  // Strings are coerced to &str when borrowed and needed
  if (a == b) {
    std::cout << "The strings are equal" << std::endl;
  }
  if (a != b) {
    std::cout << "The strings are not equal" << std::endl;
  }
  // C++ treats string types in a less intuitive way, this is an order operation
  // on the string data values rather than lexical ordering of the characters.
  if (a < b) {
    std::cout << "The first string is lexically before the second" << std::endl;
  } else if (a > b) {
    std::cout << "The first string is lexically after the second" << std::endl;
  }
  // Same as Rust, >= and <= check whether one string is not lexicographically
  // before or after another. However, C++ doesn't have a direct equivalent of
  // Rust's < > = comparison operators for strings, so we need to manually
  // compare them character by character using the standard library functions:
  else if (a >= b) {
    std::cout << "The first string is not lexically before the second"
              << std::endl;
  } else if (a <= b) {
    std::cout << "The first string is not lexically after the second"
              << std::endl;
  }

  // case-insensitives:

  // Equality, need to compare each character manually with a loop or use
  // built-in C++ function:
  bool equal = true;
  for (auto &c : a) {
    char temp = std::tolower(c);
    if (temp != b[a.find(c)]) {
      equal = false;
      break;
    }
  }

  // C++ uses tolower() to convert characters to lowercase, unlike Rust which
  // uses AsciiExt trait for this purpose.
  if (equal) {
    std::cout << "Both strings are equal when ignoring case" << std::endl;
  }

  return 0;
}