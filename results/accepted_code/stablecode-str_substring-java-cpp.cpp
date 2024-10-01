#include <string>

std::string Substring(const std::string &str, int n, int m) {
  return str.substr(n, m);
}

std::string Substring(const std::string &str, int n) { return str.substr(n); }

std::string Substring(const std::string &str) {
    return str.substr(0, str.length()-1));
}

std::string Substring(const std::string &str, char c, int m) {
  auto pos = str.find(c);
  if (pos == std::string::npos)
        throw std::invalid_argument("Character not found in string"));

    return str.substr(pos, m));
}

std::string Substring(const std::string &str, const std::string &sub, int m) {
  auto pos = str.find(sub);
  if (pos == std::string::npos)
        throw std::invalid_argument("Substring not found in string"));

    return str.substr(pos, m));
}