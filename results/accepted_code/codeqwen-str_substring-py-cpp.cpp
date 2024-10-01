#include <iostream>
#include <string>

int main() {
  std::string s = "abcdefgh";
  size_t n, m;
  std::string char_str, chars_str;
  std::cin >> n >> m >> char_str >> chars_str;

  // starting from n characters in and m length
  std::cout << s.substr(n - 1, m) << std::endl;

  // starting from n characters in, up to the end of the string
  std::cout << s.substr(n - 1) << std::endl;

  // whole string minus last character
  std::cout << s.substr(0, s.length() - 1) << std::endl;

  // starting from a known character char within the string and of m length
  size_t indx = s.find(char_str);
  if (indx != std::string::npos) {
    std::cout << s.substr(indx, m) << std::endl;
  } else {
    std::cout << "Character not found" << std::endl;
  }

  // starting from a known substring chars within the string and of m length
  indx = s.find(chars_str);
  if (indx != std::string::npos) {
    std::cout << s.substr(indx, m) << std::endl;
  } else {
    std::cout << "Substring not found" << std::endl;
  }

  return 0;
}