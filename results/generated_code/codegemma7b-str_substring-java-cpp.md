```cpp
#include <string>

std::string Substring(const std::string& str, int n, int m) {
  return str.substr(n, m);
}

std::string Substring(const std::string& str, int n) {
  return str.substr(n);
}

std::string Substring(const std::string& str) {
  return str.substr(0, str.size() - 1);
}

std::string Substring(const std::string& str, char c, int m) {
  size_t start = str.find(c);
  return str.substr(start, m + 1);
}

std::string Substring(const std::string& str, const std::string& sub, int m) {
  size_t start = str.find(sub);
  return str.substr(start, m + 1);
}
```
