#include <iostream>
#include <string>

int main() {
  std::string s = "foo";
  s += "bar"; // Append another string literal to the variable s.
  std::cout
      << s; // Show the contents of the variable after the append operation.
  return 0;
}