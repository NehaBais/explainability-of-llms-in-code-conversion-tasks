#include <iostream>
#include <string>

int main() {
  // Create a string variable equal to any text value.
  std::string s = "hello";
  std::cout << s << std::endl;

  // Create another string variable whose value is the original variable
  // concatenated with another string literal.
  std::string s1 = s + " world";
  std::cout << s1 << std::endl;

  return 0;
}