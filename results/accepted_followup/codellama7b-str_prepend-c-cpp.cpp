#include <cstring>
#include <iostream>
#include <string>

int main() {
  std::string str = "my String";
  std::string cstr = "Changed ";
  std::string dup;
  dup = str.format("%s%s", cstr,
                   str); // Use `std::string::format` instead of `sprintf`.
  std::cout << dup << "\n";
  return 0;
}