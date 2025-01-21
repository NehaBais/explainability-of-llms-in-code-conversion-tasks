#include <iostream>
#include <locale>
#include <string>

int main() {
  std::string c = "cat";
  std::string d = "dog";

  // Comparing two strings for exact equality
  if (c == d) {
    std::cout << c << " is byte-wise identical to " << d << std::endl;
  }

  // Comparing two strings for inequality (i.e., the inverse of exact equality)
  if (c != d) {
    std::cout << c << " is byte-wise different from " << d << std::endl;
  }

  // Comparing two strings to see if one is lexically ordered before than the
  // other
  if (c < d) {
    std::cout << c << " is lexicographically less than " << d << std::endl;
  }

  // Comparing two strings to see if one is lexically ordered after than the
  // other
  if (c > d) {
    std::cout << c << " is lexicographically greater than " << d << std::endl;
  }

  // Case insensitive comparison using locale and transform functions
  std::locale loc;
  bool isEqual = true;
  for (size_t i = 0; i < c.size() && i < d.size(); ++i) {
    if (std::toupper(c[i], loc) != std::toupper(d[i], loc)) {
      isEqual = false;
      break;
    }
  }

  if (isEqual) {
    std::cout << "Case insensitive comparison: " << c << " is equal to " << d
              << std::endl;
  } else {
    std::cout << "Case insensitive comparison: " << c << " is not equal to "
              << d << std::endl;
  }

  return 0;
}