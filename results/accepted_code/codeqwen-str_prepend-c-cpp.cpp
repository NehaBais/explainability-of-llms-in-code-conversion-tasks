#include <iostream>
#include <string>

int main() {
  std::string str = "my String";
  std::string cstr = "Changed ";
  std::string dup(str);
  str = cstr + dup;
  std::cout << str << "\n";
  return 0;
}