#include <iostream>
#include <string>

int main() {
  std::string str = "Good Morning";
  std::string cstr = " to All";
  std::string cstr2 = " !!!";

  // Appending the strings in a more idiomatic way using '+=' operator
  str += cstr;
  str += cstr2;

  std::cout << str << std::endl;

  return 0;
}