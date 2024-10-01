#include <cstring>
#include <iostream>

int main() {
  std::string str = "my String";
  const char *cstr = "Changed ";

  // Prepend
  str = cstr + str;

  std::cout << str << "\n";
  return 0;
}