#include <iostream>
#include <string>

std::string sconcat(const std::string &s1, const std::string &s2) {
  return s1 + s2;
}

int main() {
  std::string s = "hello";

  std::cout << s << std::endl;

  std::string s2 = sconcat(s, " literal");

  std::cout << s2 << std::endl;
}