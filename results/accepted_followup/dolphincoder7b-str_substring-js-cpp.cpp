#include <iostream>
#include <string>

int main() {
  std::string str = "abcdefgh";

  int n = 2;
  int m = 3;

  //    * starting from n characters in and of m length;
  std::cout << str.substr(n, m) << "\n";

  //    * starting from n characters in, up to the end of the string;
  std::cout << str.substr(n) << "\n";

  //    * whole string minus last character;
  std::cout << str.substr(0, str.length() - 1) << "\n";
  std::cout << str.erase(str.length() - 1) << "\n";

  //    * starting from a known character within the string and of m length;
  std::cout << str.substr(str.find('b'), m) << "\n";

  //    * starting from a known substring within the string and of m length.
  std::cout << str.substr(str.find("bc"), m) << "\n";

  return 0;
}