#include <iostream>
#include <string>

int main() {
  std::string str = "Good Morning";
  std::string cstr = " to all";
  std::string cstr2 = " !!!";

  // concatenate strings
  str = str + cstr;

  // append another string literal
  str = str + cstr2;

  std::cout << str << std::endl;

  return 0;
}