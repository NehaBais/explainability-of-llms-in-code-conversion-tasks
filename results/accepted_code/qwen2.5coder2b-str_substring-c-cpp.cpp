#include <cstring>
#include <iostream>

std::string substring(const std::string &s, size_t n, ptrdiff_t m) {
  if (n >= s.length())
    return "";

  if (m < 0)
    m = s.length() + m - n;

  if (n < 0 || m < 0 || n + m > s.length())
    return "";

  return s.substr(n, m);
}

std::string str_wholeless1(const std::string &s) {
  return substring(s, 0, s.length() - 1);
}

std::string str_fromch(const std::string &s, char ch, ptrdiff_t m) {
  size_t pos = s.find(ch);
  if (pos == std::string::npos)
    return "";

  return substring(s, pos, m);
}

std::string str_fromstr(const std::string &s, const std::string &in,
                        ptrdiff_t m) {
  size_t pos = s.find(in);
  if (pos == std::string::npos)
    return "";

  return substring(s, pos, m);
}

int main() {
  const std::string s = "hello world shortest program";

  std::cout << substring(s, 12, 5) << std::endl; // get "short"
  std::cout << substring(s, 6, -1) << std::endl; // get "world shortest program"
  std::cout << str_wholeless1(s) << std::endl;   // "... progra"
  std::cout << str_fromch(s, 'w', 5) << std::endl;   // "world"
  std::cout << str_fromstr(s, "ro", 3) << std::endl; // "rog"

  return 0;
}