#include <algorithm>
#include <iostream>
#include <string>

void print_n(const std::string &str, size_t n) {
  auto it = str.begin();
  while (n-- > 0 && it != str.end())
    ++it;
  for (; it != str.end(); ++it)
    std::cout << *it;
  std::cout << '\n';
}

void print_m(const std::string &str, size_t m) {
  auto it = std::next(str.begin(), m);
  for (; it != str.end(); ++it)
    std::cout << *it;
  std::cout << '\n';
}

void print_from_n(const std::string &str, size_t n) {
  auto it = std::next(str.begin(), n);
  for (; it != str.end(); ++it)
    std::cout << *it;
  std::cout << '\n';
}

void print_all_except_last(const std::string &str) {
  if (!str.empty()) {
    auto it = --str.end();
    for (; it != str.begin(); --it)
      std::cout << *it;
    std::cout << '\n';
  }
}

int main() {
  std::string s = "abc文字化けdef";

  // Print 3 characters starting at index 2 (c文字)
  print_m(s, 2);

  // Print all characters starting at index 2 (c文字化けdef)
  print_from_n(s, 2);

  // Print all characters except the last (abc文字化けde)
  print_all_except_last(s);

  // Print 3 characters starting with 'b' (bc文)
  size_t cpos = s.find('b');
  if (cpos != std::string::npos)
    print_m(s, cpos + 1);

  // Print 3 characters starting with "けd" (けde)
  size_t spos = s.find("けd");
  if (spos != std::string::npos)
    print_m(s, spos + 2);
}