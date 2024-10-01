#include <iostream>
#include <string>

std::string Substring(const std::wstring &str, int n, int m) {
  return std::wstring(str.begin() + n, str.begin() + n + m);
}

std::string Substring(const std::wstring &str, int n) {
  return std::wstring(str.begin() + n, str.end());
}

std::string Substring(const std::wstring &str) {
  return std::wstring(str.begin(), str.end() - 1);
}

// This will return the substring of length m from character c in a string
std::wstring Substring(const std::wstring &str, wchar_t c, int m) {
  auto pos = str.find(c);
  if (pos != std::wstring::npos && pos + m <= str.size()) {
    return std::wstring(str.begin() + pos, str.begin() + pos + m);
  } else {
    // If the character is not found or the substring length exceeds string size
    throw "Error in Substring function";
  }
}

std::wstring Substring(const std::wstring &str, const std::wstring &sub,
                       int m) {
  auto pos = str.find(sub);
  if (pos != std::wstring::npos && pos + m <= str.size()) {
    return std::wstring(str.begin() + pos, str.begin() + pos + m);
  } else {
    // If the substring is not found or the substring length exceeds string size
    throw "Error in Substring function";
  }
}