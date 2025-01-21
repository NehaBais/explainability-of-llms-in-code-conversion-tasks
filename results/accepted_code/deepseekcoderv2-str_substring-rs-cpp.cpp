#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string s = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print 3 characters starting at index 2 (c文字)
  if (n + m <= s.length()) {
    std::cout << std::string(s.begin() + n, s.begin() + n + m) << std::endl;
  } else {
    std::cout << "Index out of range" << std::endl;
  }

  // Print all characters starting at index 2 (c文字化けdef)
  if (n < s.length()) {
    std::string sub = s.substr(n);
    std::cout << sub << std::endl;
  } else {
    std::cout << "Index out of range" << std::endl;
  }

  // Print all characters except the last (abc文字化けde)
  if (!s.empty()) {
    std::string truncated = s.substr(0, s.length() - 1);
    std::cout << truncated << std::endl;
  } else {
    std::cout << "String is empty" << std::endl;
  }

  // Print 3 characters starting with 'b' (bc文)
  auto it = std::find(s.begin(), s.end(), 'b');
  if (it != s.end() && std::distance(s.begin(), it) + m <= s.length()) {
    std::string sub = std::string(it, it + m);
    std::cout << sub << std::endl;
  } else {
    std::cout << "Character not found or index out of range" << std::endl;
  }

  // Print 3 characters starting with "けd" (けde)
  auto pos = s.find("けd");
  if (pos != std::string::npos && pos + m <= s.length()) {
    std::string sub = s.substr(pos, m);
    std::cout << sub << std::endl;
  } else {
    std::cout << "Substring not found or index out of range" << std::endl;
  }

  return 0;
}