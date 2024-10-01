#include <iostream>
#include <string>

int main() {
  std::string s = ", World";
  s = "Hello" + s;
  std::cout << s << "\n";
  return 0;
}