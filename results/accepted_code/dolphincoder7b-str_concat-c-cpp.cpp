#include <iostream>
#include <string>

std::string sconcat(const std::string &s1, const std::string &s2) {
  return s1 + s2;
}

int main() {
  std::string s = "hello";

  // The way to print a string in C++ is by using the `<<` operator.
  std::cout << s << "\n";

  // In C++, you can concatenate strings with `+` operator instead of
  // `strcat()`.
  std::string s2 = s + " literal";
  std::cout << s2;
}