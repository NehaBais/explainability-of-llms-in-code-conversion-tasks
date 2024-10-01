#include <string>

std::string Substring(const std::string &str, int n, int m) {
  if (n + m > str.size())
    return ""; // In case of exceeding string size
  return str.substr(n, m);
}

std::string Substring(const std::string &str, int n) {
  if (n >= str.size())
    return ""; // In case of exceeding string size
  return str.substr(n);
}

std::string Substring(const std::string &str) {
  if (str.empty())
    return "";
  return str.substr(0, str.size() - 1); // Removes the last character
}

std::string Substring(const std::string &str, char c, int m) {
  int index = str.find(c);
  if (index == std::string::npos || index + m >= str.size())
    return ""; // In case of exceeding string size or not found the character
  return str.substr(index, m + 1);
}

std::string Substring(const std::string &str, const std::string &sub, int m) {
  int index = str.find(sub);
  if (index == std::string::npos || index + m >= str.size())
    return ""; // In case of exceeding string size or not found the substring
  return str.substr(index, m + 1);
}