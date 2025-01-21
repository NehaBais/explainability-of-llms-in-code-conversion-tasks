#include <algorithm> // for std::transform and std::islower
#include <iostream>
#include <string>

bool caseInsensitiveCompare(const std::string &str1, const std::string &str2) {
  std::transform(str1.begin(), str1.end(), str1.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  std::transform(str2.begin(), str2.end(), str2.begin(),
                 [](unsigned char c) { return std::tolower(c); });

  return strcmp(str1.c_str(), str2.c_str()) == 0;
}

int main() {
  std::string c = "cat";
  std::string d = "dog";

  if (strcmp(c.c_str(), d.c_str()) == 0) {
    std::cout << c << " is bytewise identical to " << d << std::endl;
  } else {
    std::cout << c << " is bytewise different from " << d << std::endl;
  }

  if (strcmp(c.c_str(), d.c_str()) != 0) {
    std::cout << c << " is not bytewise different from " << d << std::endl;
  }

  if (strcmp(c.c_str(), d.c_str()) > 0) {
    std::cout << c << " is lexically bytewise greater than " << d << std::endl;
  } else if (strcmp(c.c_str(), d.c_str()) < 0) {
    std::cout << c << " is lexically bytewise less than " << d << std::endl;
  }

  if (strcmp(c.c_str(), d.c_str()) >= 0) {
    std::cout << c << " is lexically bytewise greater than or equal to " << d
              << std::endl;
  } else if (strcmp(c.c_str(), d.c_str()) <= 0) {
    std::cout << c << " is lexically bytewise less than or equal to " << d
              << std::endl;

    // Case insensitive comparison
    if (caseInsensitiveCompare(c, d)) {
      std::cout << c << " equal to " << d << std::endl;
    } else {
      std::cout << c << " not equal to " << d << std::endl;
    }

    return 0;
  }