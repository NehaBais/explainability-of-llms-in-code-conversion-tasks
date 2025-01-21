#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
  std::string s1 = "hello";
  std::cout << s1 + " world" << std::endl;

  std::string s2 = s1 + " world";
  std::cout << s2 << std::endl;

  std::vector<std::string> words({s1, "world", "mom"});
  std::ostringstream oss;
  for (size_t i = 0; i < words.size(); ++i) {
    if (i != 0) {
      oss << ", ";
    }
    oss << words[i];
  }
  std::cout << oss.str() << std::endl;

  s2 = "";
  for (size_t i = 0; i < words.size(); ++i) {
    if (!s2.empty()) {
      s2 += ", ";
    }
    s2 += words[i];
  }
  std::cout << s2 << std::endl;

  return 0;
}