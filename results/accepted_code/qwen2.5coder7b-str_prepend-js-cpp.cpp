#include <iostream>
#include <string>

int main() {
  // Create a string variable equal to any text value.
  std::string s = ", World";

  // Prepend the string variable with another string literal.
  s = "Hello" + s;

  // Print the final result
  std::cout << s << std::endl;

  return 0;
}