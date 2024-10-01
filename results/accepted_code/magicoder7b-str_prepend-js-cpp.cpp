#include <iostream>
#include <string>

int main() {
  // Declare and initialize string variable
  std::string s = ", World";

  // Prepend "Hello" to the string
  s = "Hello" + s;

  // Print the result
  std::cout << s << std::endl;

  return 0;
}