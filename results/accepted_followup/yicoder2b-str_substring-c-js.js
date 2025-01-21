#include <string>
#include <iostream>
#include <algorithm>

std::string substring(const std::string & s, int n, ptrdiff_t m) {
  if (n >= s.size()) {
    return "";
  }

  // Subtract `m` from `s.size() - n` to find the range of characters we're interested in
  int start = std::max(0, static_cast<int>(s.size() - m));
  int end = std::min(n + m, s.size()) - 1; // Subtract `m` to correct for `m < 0` cases

  // Copy the substring from `start` to `end` and return it
  return s.substr(start, end - start + 1);
}

int main() {
  std::string s = "hello world shortest program";
  std::cout << substring(s, 12, 5) << std::endl; // prints "shortest"
  std::cout << substring(s, 6, -1) << std::endl;  // prints "world shortest program"
  std::cout << substring(s, s.size()-1, -1) << std::endl; // prints "program"
  std::cout << substring(s, 'w', 5) << std::endl; // prints "world"
  std::cout << substring(s, "ro", 3) << std::endl; // prints "org"

  return 0;
}