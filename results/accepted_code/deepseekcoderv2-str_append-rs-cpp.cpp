#include <iostream>
#include <string>

int main() {
  std::string hello = "Hello world";
  hello += "!!!!"; // Append using the assignment operator with a string literal
  std::cout << hello
            << std::endl; // Print the contents of the variable after appending
  return 0;
}