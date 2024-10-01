#include <iostream>
#include <string>

int main() {

  std::string s = "world!";
  s = "Hello, " + s;

  std::cout << s << std::endl;

  return 0;
}