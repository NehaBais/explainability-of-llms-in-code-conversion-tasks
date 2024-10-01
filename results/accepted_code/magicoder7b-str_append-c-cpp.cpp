#include <cstring> // for strlen and strcpy
#include <iostream>

int main() {
  std::string str = "Good Morning";
  const char *cstr = " to all";
  const char *cstr2 = " !!!";

  str += cstr;
  str += cstr2;

  std::cout << str << std::endl;

  return 0;
}