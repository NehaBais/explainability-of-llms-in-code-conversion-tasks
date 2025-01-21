#include <iostream>
#include <string>

int main() {
  std::string str = "abc";
  std::cout << str << std::endl;
  str += "def";
  std::cout << str << std::endl;
  return 0;
}