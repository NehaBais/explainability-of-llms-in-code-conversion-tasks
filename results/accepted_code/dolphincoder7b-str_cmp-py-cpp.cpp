#include <cctype>
#include <iostream>
#include <string>

void compare_strings(const std::string &a, const std::string &b) {
  if (a == b) {
    std::cout << a << " is equal to " << b << std::endl;
  } else if (a != b) {
    std::cout << a << " is not equal to " << b << std::endl;
  }

  int cmp = a.compare(b);
  if (cmp < 0) {
    std::cout << a << " is less than " << b << std::endl;
  } else if (cmp == 0) {
    std::cout << a << " is equal to " << b << std::endl;
  } else {
    std::cout << a << " is greater than " << b << std::endl;
  }
}

int main() {
  compare_strings("YUP", "YUP");   // exact equality
  compare_strings("BALL", "BELL"); // inequality (i.e., not equal)
  compare_strings("24", "123");    // lexicographic comparison
  compare_strings(std::to_string(24),
                  std::to_string(123)); // numeric string comparison

  // case sensitive and case insensitive comparisons using the string's compare
  // method
  if ("abc" == "ABC") {
    std::cout << "Case sensitive comparison successful" << std::endl;
  } else {
    std::cout << "Case sensitive comparison failed" << std::endl;
  }

  if (std::tolower("abc") == std::tolower("ABC")) {
    std::cout << "Case insensitive comparison successful" << std::endl;
  } else {
    std::cout << "Case insensitive comparison failed" << std::endl;
  }

  return 0;
}