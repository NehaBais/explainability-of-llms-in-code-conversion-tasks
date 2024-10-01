#include <iostream>
#include <string>

int main() {
  std::string s = "hello";
  std::string s2 = s + " literal";

  std::cout << s << std::endl;
  std::cout << s2 << std::endl;
}