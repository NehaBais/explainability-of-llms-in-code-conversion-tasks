#include <iostream>
#include <string>

int main() {
  std::string str1 = "Hello";
  std::string str2 = "World";

  // Correct comparison of strings
  if (str1 == str2) {
    std::cout << "Strings are equal.\n";
  } else {
    std::cout << "Strings are not equal.\n";
  }

  return 0;
}