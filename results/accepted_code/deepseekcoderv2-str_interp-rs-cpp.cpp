#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string adj = "little";
  std::string name = "Mary";

  // Using positional arguments
  std::cout << name << " had a " << adj << " lamb" << std::endl;

  // Using named arguments
  std::cout << "{name} had a {adj} lamb" << std::endl;
  std::stringstream ss;
  ss << name << " had a " << adj << " lamb";
  std::string result = ss.str();
  std::cout << result << std::endl;

  return 0;
}