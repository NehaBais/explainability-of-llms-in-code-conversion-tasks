#include <algorithm> // For std::find
#include <iostream>
#include <string>

int main() {
  std::string s = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print 3 characters starting at index 2 (c文字)
  std::cout << s.substr(n, m) << std::endl;

  // Print all characters starting at index 2 (c文字化けdef)
  std::cout << s.substr(n) << std::endl;

  // Print all characters except the last (abc文字化けde)
  std::cout << s.substr(0, s.length() - 1) << std::endl;

  // Print 3 characters starting with 'b' (bc文)
  auto cpos = std::find(s.begin(), s.end(), 'b') - s.begin();
  if (cpos != s.length()) // Check that character is in string
    std::cout << s.substr(cpos, m) << std::endl;

  // Print 3 characters starting with "けd" (けde)
  auto spos = s.find("けd");
  if (spos != std::string::npos) // Check that substring is in string
    std::cout << s.substr(spos, m) << std::endl;

  return 0;
}