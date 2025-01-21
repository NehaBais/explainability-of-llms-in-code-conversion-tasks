#include <iostream>
#include <string>

int main() {
  std::string s = "hello";

  // Illustrate the operation – show content of variables
  std::cout << s << " literal" << std::endl;

  // concatenation with another string literal
  std::string s2 = s + " literal";
  std::cout << s2 << std::endl;

  return 0;
}