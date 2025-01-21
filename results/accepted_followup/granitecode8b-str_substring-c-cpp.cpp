#include <iostream>
#include <string>

std::string substring(const std::string &s, int pos) { return s.substr(pos); }

std::string str_wholeless1(const std::string &s) { return substring(s, 0); }

int main() {
  std::string s = "Hello, world!";
  std::cout << s << std::endl;
  return 0;
}