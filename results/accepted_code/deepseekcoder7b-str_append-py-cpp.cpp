#include <iostream>
#include <string>

int main() {
  std::string str = "12345678"; // Create a string variable and assign it value.
  str += "9!"; // Append the string variable with another string literal.
  std::cout << str << std::endl; // Show the contents of the variable after the
                                 // append operation.

  return 0;
}