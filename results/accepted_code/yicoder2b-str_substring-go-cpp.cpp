#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string s = "ABCDEFGH";
  int n = 2, m = 3;

  // for reference
  std::cout << "Index: " << "0123456789" << std::endl;
  std::cout << "String:" << s << std::endl;

  // starting from n characters in and of m length
  std::string substr_n = s.substr(n, m);
  std::cout << "Start " << n << ", length " << m << ": " << substr_n
            << std::endl;

  // starting from n characters in, up to the end of the string
  std::string substr_end = s.substr(n);
  std::cout << "Start " << n << ", to end: " << substr_end << std::endl;

  // whole string minus last character
  std::string all_but_last = s.substr(0, s.length() - 1);
  std::cout << "All but last: " << all_but_last << std::endl;

  // starting from a known character within the string and of m length
  size_t dx = s.find('D');
  std::string substr_dx = s.substr(dx, m);
  std::cout << "Start 'D', length " << m << ": " << substr_dx << std::endl;

  // starting from a known substring within the string and of m length
  size_t sx = s.find("DE");
  std::string substr_sx = s.substr(sx, m);
  std::cout << "Start \"DE\", length " << m << ": " << substr_sx << std::endl;

  return 0;
}