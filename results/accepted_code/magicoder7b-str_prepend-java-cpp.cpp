#include <iostream>
#include <string>

int main() {
  std::string string =
      "def"; // Create a string variable equal to any text value.
  string = "abc" +
           string; // Prepend the string variable with another string literal.

  std::cout << string << std::endl; // Outputs: abcdef
  return 0;
}