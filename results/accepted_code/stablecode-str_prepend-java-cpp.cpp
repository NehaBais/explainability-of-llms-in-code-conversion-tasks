#include <iostream>
#include <string>

int main() {

  // Create a string variable equal to any text value.
  std::string string = "def";

  // Prepend the string variable with another string literal.
  string = "abc" + string;

  // Output result
  std::cout << string << std::endl;

  return 0;
}