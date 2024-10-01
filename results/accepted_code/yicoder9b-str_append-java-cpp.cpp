#include <iostream>
#include <string>

int main() {
  std::string string = "abc";
  std::cout << string << std::endl; // Outputs: abc
  string += "def";
  std::cout << string << std::endl; // Outputs: abcdef
  return 0;
}