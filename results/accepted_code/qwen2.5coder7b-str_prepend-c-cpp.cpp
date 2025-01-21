#include <iostream>
#include <string>

int main() {
  std::string str = "my String";
  const char *cstr = "Changed ";

  // Prepend the string variable with another string literal.
  str = std::string(cstr) + str;

  std::cout << str << std::endl;

  return 0;
}