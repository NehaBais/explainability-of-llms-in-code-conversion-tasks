#include <iostream>
#include <string>

int main() {
  std::string hello = "Hello world";

  // Method 1: Using += operator
  hello += "!!!!";
  std::cout << hello << std::endl;

  // Method 2: Using the append function of string object
  hello.append("!!!!");
  std::cout << hello << std::endl;

  return 0;
}