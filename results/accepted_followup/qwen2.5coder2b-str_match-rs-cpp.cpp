#include <iostream>
#include <variant>

int main() {
  std::string str1 = "Hello";
  std::string str2 = "World";

  // Corrected to use std::variant for optional values
  std::variant<int> result;

  if (str1.size() > str2.size()) {
    result = static_cast<int>(str1.size());
  } else {
    result = 0; // or any other default value
  }

  std::cout << "Result: " << result << std::endl;

  return 0;
}