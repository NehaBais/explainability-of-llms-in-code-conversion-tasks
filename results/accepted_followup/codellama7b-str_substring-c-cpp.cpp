#include <iostream>
#include <string>

std::string substring(const std::string &s, size_t n, size_t m) {
  // Make sure string does not end before n and advance the "s" pointer to
  // beginning of substring
  for (size_t i = 0; i < n && !s.empty(); ++i) {
    s.erase(0, 1);
  }
  std::string result;
  for (size_t i = 0; i < m && !s.empty(); ++i) {
    result += s[0];
    s.erase(0, 1);
  }
  return result;
}

int main() {
  const std::string s = "hello world shortest program";

  // Test the substring function with different arguments
  std::cout << "substring(s, 12, 5): " << substring(s, 12, 5) << std::endl;
  std::cout << "substring(s, 6, -1): " << substring(s, 6, -1) << std::endl;
  std::cout << "str_wholeless1(s): " << str_wholeless1(s) << std::endl;
  std::cout << "str_fromch(s, 'w', 5): " << str_fromch(s, 'w', 5) << std::endl;
  std::cout << "str_fromstr(s, \"ro\", 3): " << str_fromstr(s, "ro", 3)
            << std::endl;

  return 0;
}