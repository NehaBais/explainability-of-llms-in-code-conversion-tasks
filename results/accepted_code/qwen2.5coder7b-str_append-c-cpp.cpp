#include <iostream>
#include <string>

int main() {
  std::string str = "Good Morning";
  std::string cstr = " to all";
  std::string cstr2 = " !!!";

  // Append the strings
  str += cstr;
  str += cstr2;

  // Display the contents of the variable after appending
  std::cout << str << std::endl;

  return 0;
}