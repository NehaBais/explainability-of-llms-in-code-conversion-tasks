#include <iostream>
#include <string>

int main() {
  std::string s = "world!";
  s = "Hello, " + s;

  // Printing the resulting string
  std::cout << s << std::endl;

  return 0;
}