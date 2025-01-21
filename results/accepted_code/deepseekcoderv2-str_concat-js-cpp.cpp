#include <iostream>
#include <string>

int main() {
  // Create a string variable equal to any text value.
  std::string s = "hello";

  // Concatenate another string literal with the original variable and print it.
  std::string result = s + " there!";
  std::cout << result << std::endl;

  return 0;
}