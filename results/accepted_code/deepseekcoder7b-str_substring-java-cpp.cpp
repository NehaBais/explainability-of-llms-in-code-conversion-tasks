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

// Whole string minus the last character;
std::u32string Substring(const std::u32string &str) {
  return str.substr(0, str.length() - 1);
}

// Starting from a known character within the string and of m length;
std::u32string Substring(const std::u32string &str, char32_t c, int m) {
  size_t pos = str.find(c);
  if (pos == std::u32string::npos) {
    // Handle not found case here or throw an exception
    // For now returning the original string
    return str;
  } else {
    return str.substr(pos, m + 1);
  }
}

// Starting from a known substring within the string and of m length;
std::u32string Substring(const std::u32string &str, const std::u32string &sub,
                         int m) {
  size_t pos = str.find(sub);
  if (pos == std::u32string<｜begin▁of▁sentence｜>::npos) {
    // Handle not found case here or throw an exception
    // For now returning the original string
    return str;
  } else {
    return str.substr(pos, m + sub.length());
  }
}