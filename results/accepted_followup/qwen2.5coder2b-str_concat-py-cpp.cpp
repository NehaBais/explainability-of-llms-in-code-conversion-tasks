#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string s1 = "hello";
  std::cout << s1 + " world" << std::endl;

  std::string s2 = s1 + " world";
  std::cout << s2 << std::endl;

  s1 = "hello";
  std::vector<std::string> strings = {"world", "mom"};
  std::string s2;
  for (const auto &str : strings) {
    s2 += str;
  }
  std::cout << s2 << std::endl;

  return 0;
}