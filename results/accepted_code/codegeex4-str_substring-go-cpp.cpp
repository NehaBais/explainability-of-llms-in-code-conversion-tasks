#include <iostream>
#include <string>

int main() {
  std::string s = "ABCDEFGH";
  int n, m;
  n = 2, m = 3;

  // for reference
  std::cout << "Index: " << "01234567" << std::endl;
  std::cout << "String:" << s << std::endl;

  // starting from n characters in and of m length
  std::cout << "Start " << n << ", length " << m << ": " << s.substr(n, m)
            << std::endl;

  // starting from n characters in, up to the end of the string
  std::cout << "Start " << n << ", to end: " << s.substr(n) << std::endl;

  // whole string minus last character
  std::cout << "All but last: " << s.substr(0, s.size() - 1) << std::endl;

  // starting from a known character within the string and of m length
  size_t dx = s.find('D');
  if (dx != std::string::npos)
    std::cout << "Start 'D', length " << m << ": " << s.substr(dx, m)
              << std::endl;

  // starting from a known substring within the string and of m length
  size_t sx = s.find("DE");
  if (sx != std::string::npos)
    std::cout << "Start \"DE\", length " << m << ": " << s.substr(sx, m)
              << std::endl;

  return 0;
}