#include <stdexcept>
#include <string>

// Function to find index of a character in string
size_t FindIndex(const std::string &str, char c) {
  size_t found = str.find(c);
  if (found == std::string::npos)
    throw std::invalid_argument("Character not found");
  return found;
}

// Function to find index of a substring in string
size_t FindIndex(const std::string &str, const std::string &sub) {
  size_t found = str.find(sub);
  if (found == std::string::npos)
    throw std::invalid_argument("Substring not found");
  return found;
}

std::string Substring(const std::string &str, int n, int m) {
  return str.substr(n, m);
}
std::string Substring(const std::string &str, int n) { return str.substr(n); }
std::string Substring(const std::string &str) {
  return str.substr(0, str.length() - 1);
}
std::string Substring(const std::string &str, char c, int m) {
  size_t index = FindIndex(str, c);
  return str.substr(index, m + 1);
}
std::string Substring(const std::string &str, const std::string &sub, int m) {
  size_t index = FindIndex(str, sub);
  return str.substr(index, m + sub.length());
}