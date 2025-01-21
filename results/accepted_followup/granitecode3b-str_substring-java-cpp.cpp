#include <iostream>

std::string Substring(const std::string &str, int start, int length) {
  return str.substr(start, length);
}

int main() {
  std::string str = "Hello World";
  std::cout << Substring(str, 3, 4) << std::endl; // prints "lo W"
  std::cout << Substring(str, 0, 5) << std::endl; // prints "Hello"

  return 0;
}