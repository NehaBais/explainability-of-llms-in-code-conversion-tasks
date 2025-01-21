#include <iostream>
#include <string>

int main() {
  std::string str = "def";
  str = "abc" + str;
  std::cout << str; // Outputs: abcdef
  return 0;
}