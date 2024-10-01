#include <iostream>
#include <string>

bool startsWith(const std::string &str, const std::string &substr) {
  if (str.length() >= substr.length())
    return (str.substr(0, substr.length()) == substr);

  return false;
}

bool endsWith(const std::string &str, const std::string &substr) {
  size_t strLength = str.length();
  size_t subLength = substr.length();

  if (strLength >= subLength)
    return (str.substr(strLength - subLength, subLength) == substr);

  return false;
}

bool contains(const std::string &str, const std::string &substr,
              int startPos = 0) {
  size_t index = str.find(substr, startPos);
  if (index != std::string::npos)
    return true;

  return false;
}

int indexOf(const std::string &str, const std::string &substr,
            int startPos = 0) {
  size_t index = str.find(substr, startPos);
  if (index == std::string::npos)
    return -1;

  return static_cast<int>(index);
}

int main() {
  // Test cases
  std::cout << "startsWith: " << std::boolalpha << startsWith("abcd", "ab")
            << '\n';                                           // returns true
  std::cout << "endsWith: " << endsWith("abcd", "zn") << '\n'; // returns false
  std::cout << "contains: " << contains("abab", "bb") << '\n'; // returns false
  std::cout << "contains: " << contains("abab", "ab") << '\n'; // returns true
  int loc = indexOf("abab", "bb");                             // returns -1
  std::cout << "indexOf (first occurrence): " << loc << '\n';
  loc = indexOf("abab", "ab"); // returns 0
  std::cout << "indexOf (second occurrence): " << loc << '\n';

  return 0;
}