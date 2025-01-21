#include <iostream>
#include <string>

// Starting from n characters in and of m length;
std::u32string Substring(const std::u32string &str, int n, int m) {
  return str.substr(n, m);
}

// Starting from n characters in, up to the end of the string;
std::u32string Substring(const std::u32string &str, int n) {
  return str.substr(n);
}

// Convert Java String to UTF-32 (std::u32string) and handle error cases
std::u32string ToUTF32(const std::string &s) {
  std::u32string result;
  for (char c : s)
    result += static_cast<char32_t>(static_cast<uint8_t>(c));
  return result;
}

// Starting from n characters in, up to the end of the string;
std::u32string Substring(const std::string &str, int n) {
  return ToUTF32(str).substr(n);
}

// Starting from n characters in and of m length;
std::u32string Substring(const std::string &str, int n, int m) {
  return ToUTF32(str).substr(n, m);
}