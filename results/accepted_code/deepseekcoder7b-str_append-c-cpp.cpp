#include <iostream>
#include <string>
int main() {
  // Create a string variable equal to any text value
  std::string str("Good Morning");

  // Append the string variable with another string literal
  str += " to all"; // equivalent of cstr in C
  str += " !!!";    // equivalent of cstr2 in C

  // Show the contents of the variable after append operation
  std::cout << str << std::endl;
}