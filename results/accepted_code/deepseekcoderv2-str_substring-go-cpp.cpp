#include <cctype> // for std::isprint
#include <iostream>
#include <string>

std::string utf8Substring(const std::string &str, int start, int length) {
  if (start >= str.size())
    return "";
  int remaining = str.size() - start;
  if (length > remaining)
    return str.substr(start);
  return str.substr(start, length);
}

std::string findAndSubstring(const std::string &str, char ch, int length) {
  auto pos = str.find(ch);
  if (pos == std::string::npos || pos >= str.size())
    return "";
  return utf8Substring(str, pos, length);
}

std::string findAndSubstring(const std::string &str, const std::string &substr,
                             int length) {
  auto pos = str.find(substr);
  if (pos == std::string::npos || pos >= str.size())
    return "";
  return utf8Substring(str, pos, length);
}

int main() {
  std::string s = "ABCDEFGH";
  int n = 2, m = 3;

  // for reference
  std::cout << "Index: " << "01234567" << std::endl;
  std::cout << "String: " << s << std::endl;

  // starting from n characters in and of m length
  if (n >= 0 && n + m <= s.size()) {
    std::string substr = s.substr(n, m);
    std::cout << "Start " << n << ", length " << m << ": " << substr
              << std::endl;
  } else {
    std::cout << "Start " << n << ", length " << m << ": out of bounds"
              << std::endl;
  }

  // starting from n characters in, up to the end of the string
  if (n >= 0 && n < s.size()) {
    std::string substr = s.substr(n);
    std::cout << "Start " << n << ", to end: " << substr << std::endl;
  } else {
    std::cout << "Start " << n << ", to end: out of bounds" << std::endl;
  }

  // whole string minus the last character
  if (!s.empty()) {
    std::string substr = s.substr(0, s.size() - 1);
    std::cout << "All but last: " << substr << std::endl;
  } else {
    std::cout << "All but last: empty string" << std::endl;
  }

  // starting from a known character within the string and of m length
  char ch = 'D';
  if (std::isprint(ch)) {
    std::string substr = findAndSubstring(s, ch, m);
    std::cout << "Start '" << ch << "', length " << m << ": " << substr
              << std::endl;
  } else {
    std::cout << "Start '" << ch << "': invalid character" << std::endl;
  }

  // starting from a known substring within the string and of m length
  std::string substr_find = "DE";
  if (!substr_find.empty()) {
    std::string substr = findAndSubstring(s, substr_find, m);
    std::cout << "Start \"" << substr_find << "\", length " << m << ": "
              << substr << std::endl;
  } else {
    std::cout << "Start \"" << substr_find << "\": invalid substring"
              << std::endl;
  }

  return 0;
}