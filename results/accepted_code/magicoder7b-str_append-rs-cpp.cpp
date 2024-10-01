#include <iostream>
#include <string>

int main() {
  std::string hello = "Hello world";
  hello += "!!!!"; // or you can use the + operator, but it will create a new
                   // object and old one will be lost.
  std::cout << hello << std::endl;
  return 0;
}