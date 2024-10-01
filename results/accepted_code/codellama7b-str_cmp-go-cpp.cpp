#include <iostream>
#include <string>

int main() {
  std::string c = "cat";
  std::string d = "dog";

  // Comparing two strings for exact equality
  if (c == d) {
    std::cout << c << " is bytewise identical to " << d << std::endl;
  } else {
    std::cout << c << " is bytewise different from " << d << std::endl;
  }

  // Comparing two strings for inequality (i.e., the inverse of exact equality)
  if (c != d) {
    std::cout << c << " is bytewise different from " << d << std::endl;
  } else {
    std::cout << c << " is bytewise identical to " << d << std::endl;
  }

  // Comparing two strings to see if one is lexically ordered before than the
  // other
  if (c < d) {
    std::cout << c << " is lexically bytewise less than " << d << std::endl;
  } else {
    std::cout << c << " is not lexically bytewise less than " << d << std::endl;
  }

  // Comparing two strings to see if one is lexically ordered after than the
  // other
  if (c > d) {
    std::cout << c << " is lexically bytewise greater than " << d << std::endl;
  } else {
    std::cout << c << " is not lexically bytewise greater than " << d
              << std::endl;
  }

  // Comparing two strings to see if one is lexically ordered before or equal to
  // the other
  if (c <= d) {
    std::cout << c << " is lexically bytewise less than or equal to " << d
              << std::endl;
  } else {
    std::cout << c << " is not lexically bytewise less than or equal to " << d
              << std::endl;
  }

  // Comparing two strings to see if one is lexically ordered after or equal to
  // the other
  if (c >= d) {
    std::cout << c << " is lexically bytewise greater than or equal to " << d
              << std::endl;
  } else {
    std::cout << c << " is not lexically bytewise greater than or equal to "
              << d << std::endl;
  }

  // Comparing two strings for case insensitive equality using the strings
  // library
  if (strings::EqualFold(c, d)) {
    std::cout << c << " is equal to " << d
              << " under Unicode simple case folding rules." << std::endl;
  } else {
    std::cout << c << " is not equal to " << d
              << " under Unicode simple case folding rules." << std::endl;
  }

  // Comparing two strings for numeric equality using the strings library
  if (strings::EqualFold(c, d)) {
    std::cout << c << " is numerically equal to " << d << std::endl;
  } else {
    std::cout << c << " is not numerically equal to " << d << std::endl;
  }

  return 0;
}