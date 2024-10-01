#include <cstdlib>
#include <cstring>
#include <iostream>

int main() {
  std::string str = "my String";
  char *cstr = "Changed ";
  str = cstr + str; // Prepend the string variable with another string literal.
  std::cout << str;
  return 0;
}