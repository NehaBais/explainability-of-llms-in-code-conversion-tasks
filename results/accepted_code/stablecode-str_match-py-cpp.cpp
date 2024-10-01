#include <iostream>
#include <string>

bool starts_with(const std::string &s1, const std::string &s2) {
  if (s1.length() >= s2.length()) {
        return s1.substr(0, s2.length())) == s2;
  } else {
    return false;
  }
}

bool contains(const std::string &s1, const std::string &s2) {
  if (s1.length() >= s2.length()) {
    for (size_t i = 0; i < s1.length() - s2.length() + 1; ++i) {
      if (s1.substr(i, s2.length())) == s2) {
                return true;
            }
    }
  } else {
    return false;
  }
}

bool ends_with(const std::string &s1, const std::string &s2) {
  if (s1.length() >= s2.length())) {
        return s1.substr(s1.length() - s2.length())) == s2;
    }
  else {
    return false;
  }
}

int main() {
  std::string str = "abcd";
  std::string s1 = "ab";
  std::string s2 = "bb";

  std::cout << std::boolalpha;
    std::cout << starts_with(str, s1)) << std::endl;
    std::cout << ends_with(str, s2))) << std::endl;
    std::cout << contains(str, s2))) << std::endl;

    return 0;
}