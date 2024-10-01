#include <iostream>
#include <string>

int main() {
  std::string s = "world!";
  s = "Hello, " + s;

  std::cout << s;
  return 0;
}