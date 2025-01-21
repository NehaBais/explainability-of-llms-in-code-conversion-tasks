#include <cctype>
#include <iostream>
#include <string>

void compare_strings(const std::string &a, const std::string &b) {
  // Convert string literals into strings before comparison
  if (std::string("abc") == std::string("ABC")) {
    std::cout << "Case sensitive comparison successful" << std::endl;
  } else {
    std::cout << "Case sensitive comparison failed" << std::endl;
  }

  // Apply std::tolower to convert both strings before comparison
  if (std::tolower(a) == std::tolower(b)) {
    std::cout << "Case insensitive comparison successful" << std::endl;
  } else {
    std::cout << "Case insensitive comparison failed" << std::endl;
  }
}

int main() {
  compare_strings("YUP", "YUP");   // exact equality
  compare_strings("BALL", "BELL"); // inequality (i.e., not equal)
  compare_strings("24", "123");    // lexicographic comparison
  compare_strings(std::to_string(24),
                  std::to_string(123)); // numeric string comparison

  return 0;
}