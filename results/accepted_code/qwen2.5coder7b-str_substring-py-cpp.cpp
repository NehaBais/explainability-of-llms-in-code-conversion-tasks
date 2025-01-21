#include <codecvt>
#include <iostream>
#include <locale>
#include <string>

int main() {
  std::u32string s = u"abcdefgh";
  uint32_t n = 2;
  uint32_t m = 3;
  char32_t char_ = U'd';
  std::u32string chars = u"cd";

  // starting from n=2 characters in and m=3 in length
  auto start_n_m = s.begin() + n - 1;
  auto end_n_m = s.begin() + n - 1 + m;
  for (auto it = start_n_m; it != end_n_m; ++it) {
    std::cout << *it;
  }
  std::cout << std::endl;

  // starting from n characters in, up to the end of the string
  auto start_n_to_end = s.begin() + n - 1;
  for (auto it = start_n_to_end; it != s.end(); ++it) {
    std::cout << *it;
  }
  std::cout << std::endl;

  // whole string minus last character
  auto start_last_char_removed = s.begin();
  auto end_last_char_removed = s.end() - 1;
  for (auto it = start_last_char_removed; it != end_last_char_removed; ++it) {
    std::cout << *it;
  }
  std::cout << std::endl;

  // starting from a known character char="d" within the string and of m length
  auto indx_char = s.find(char_);
  if (indx_char != std::u32string::npos) {
    auto start_known_char = s.begin() + indx_char;
    auto end_known_char = start_known_char + m;
    for (auto it = start_known_char; it != end_known_char && it != s.end();
         ++it) {
      std::cout << *it;
    }
    std::cout << std::endl;
  }

  // starting from a known substring chars="cd" within the string and of m
  // length
  auto indx_chars = s.find(chars);
  if (indx_chars != std::u32string::npos) {
    auto start_known_substring = s.begin() + indx_chars;
    auto end_known_substring = start_known_substring + m;
    for (auto it = start_known_substring;
         it != end_known_substring && it != s.end(); ++it) {
      std::cout << *it;
    }
    std::cout << std::endl;
  }

  return 0;
}