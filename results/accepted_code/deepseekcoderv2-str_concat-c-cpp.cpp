#include <iostream>
#include <string>

int main() {
  std::string s = "hello";
  std::string s2;

  std::cout << s << " literal" << std::endl;

  s2 = s + " literal";
  std::cout << s2 << std::endl;

  return 0;
}