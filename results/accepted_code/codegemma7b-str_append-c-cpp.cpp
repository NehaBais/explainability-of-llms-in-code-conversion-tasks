#include <iostream>
#include <string>

int main() {
  std::string str = "Good Morning";
  std::string cstr = " to all";
  std::string cstr2 = " !!!";

  // Append cstr to str
  str += cstr;

  // Append cstr2 to str
  str += cstr2;

  // Print the contents of str
  std::cout << str << std::endl;

  return 0;
}