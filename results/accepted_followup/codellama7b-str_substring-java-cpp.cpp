#include <iostream>
#include <string>

int main() {
  std::string str = "Hello World";
  int n, m; // declare variables n and m

  // Display a substring:
  // starting from n characters in and of m length
  std::cout << str.substr(n, m) << "\n";

  // starting from n characters in, up to the end of the string
  std::cout << str.substr(n) << "\n";

  // whole string minus the last character
  std::cout << str.substr(0, str.length() - 1) << "\n";

  // starting from a known character within the string and of m length
  std::cout << str.substr(str.indexOf(c), m + 1) << "\n";

  // starting from a known substring within the string and of m length
  std::cout << str.substr(str.indexOf(sub), m + 1) << "\n";

  return 0;
}