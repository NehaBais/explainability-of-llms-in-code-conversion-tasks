#include <iostream>
#include <string>

int main() {
  std::string str = "abcdefgh";

  int n = 2;
  int m = 3;

  //  * starting from n characters in and of m length;
  std::cout << str.substr(n, m) << std::endl; // => "cde"

  //  * starting from n characters in, up to the end of the string;
  std::cout << str.substr(n) << std::endl; // => "cdefgh"

  //  * whole string minus last character;
  std::string new_str = str.substr(0, str.length() - 1);
  std::cout << new_str << std::endl; // => "abcdefg"

  //  * starting from a known character within the string and of m length;
  int index = str.find('b');
  if (index != std::string::npos) {
    std::cout << str.substr(index, m) << std::endl; // => "bcd"
  }

  //  * starting from a known substring within the string and of m length.
  index = str.find("bc");
  if (index != std::string::npos) {
    std::cout << str.substr(index, m) << std::endl; // => "bcd"
  }

  return 0;
}