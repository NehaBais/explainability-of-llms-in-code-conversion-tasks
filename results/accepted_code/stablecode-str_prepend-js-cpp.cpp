#include <iostream>
#include <string>

int main() {
  // Initialize string s with value ", World"
  std::string s = ", World";

  // Prepend the string variable with another string literal "Hello"
  s = "Hello" + s;

  // Print out the final value of s
  std::cout << s;

  return 0;
}