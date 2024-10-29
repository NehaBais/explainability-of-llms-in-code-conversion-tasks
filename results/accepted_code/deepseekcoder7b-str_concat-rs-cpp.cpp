#include <iostream>
#include <string>
int main() {
  std::string s = "hello";
  std::cout << s << std::endl;

  s += " world";
  std::cout << s << std::endl;

  return 0;
}