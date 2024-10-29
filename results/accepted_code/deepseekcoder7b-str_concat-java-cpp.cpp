#include <iostream>
#include <string>

int main() {
  std::string s = "hello";
  std::cout << s + " literal" << std::endl;

  // Create another string variable whose value is the original variable
  // concatenated with another string literal.
  std::string s2 = s + " literal";
  std::cout << s2 << std::endl;

  return 0;
}