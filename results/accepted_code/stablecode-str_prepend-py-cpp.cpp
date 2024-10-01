#include <iostream>
#include <string>

int main() {

  std::string s = "123 456 78";
  std::string prefix = "0";

  s = prefix + s; // by concatenation

  std::cout << s << std::endl;

  return 0;
}