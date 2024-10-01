#include <iostream>
#include <string>

int main() {
  std::string str = "Good Morning";
  std::string cstr = " to all";
  std::string cstr2 = " !!";

  // Append the string variable with another string literal
  str += cstr;
  str += cstr2;

  // Print the contents of the variable after the append operation.
  std::cout << str << std::endl;

  return 0;
}