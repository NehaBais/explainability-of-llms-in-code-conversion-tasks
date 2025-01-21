#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string c = "cat";
  std::string d = "dog";

  // Comparing two strings for exact equality
  if (c == d) {
    std::cout << c << " is bytewise identical to " << d << std::endl;
  } else {
    std::cout << c << " is not equal to " << d << std::endl;
  }

  // Comparing two strings for inequality (i.e., the inverse of exact equality)
  if (c != d) {
    std::cout << c << " is bytewise different from " << d << std::endl;
  } else {
    std::cout << c << " is equal to " << d << std::endl;
  }

  // Comparing two strings to see if one is lexically ordered before than the
  // other
  if (c < d) {
    std::cout << c << " is lexically bytewise less than " << d << std::endl;
  } else if (c > d) {
    std::cout << c << " is lexically bytewise greater than " << d << std::endl;
  } else {
    std::cout << c << " is equal to " << d << std::endl;
  }

  // Comparing two strings to see if one is lexically ordered after than the
  // other
  if (c > d) {
    std::cout << c << " is lexically bytewise greater than " << d << std::endl;
  } else if (c < d) {
    std::cout << c << " is lexically bytewise less than " << d << std::endl;
  } else {
    std::cout << c << " is equal to " << d << std::endl;
  }

  // Case insensitive comparison using std::equal and
  // std::lexicographical_compare
  std::string eqf = "when interpreted as UTF-8 and compared under Unicode "
                    "simple case folding rules.";
  if (std::equal(c.begin(), c.end(), d.begin(), [](char a, char b) {
        return std::tolower(a) == std::tolower(b);
      })) {
    std::cout << c << " equal to " << d << " " << eqf << std::endl;
  } else {
    std::cout << c << " not equal to " << d << " " << eqf << std::endl;
  }

  // Case sensitive comparison using default string comparison
  if (c == d) {
    std::cout << c << " is bytewise identical to " << d << std::endl;
  } else {
    std::cout << c << " is not equal to " << d << std::endl;
  }

  // Case insensitive comparison using std::equal and custom case folding
  // function
  if (std::equal(c.begin(), c.end(), d.begin(), [](char a, char b) {
        return std::tolower(a) == std::tolower(b);
      })) {
    std::cout << c << " equal to " << d << " " << eqf << std::endl;
  } else {
    std::cout << c << " not equal to " << d << " " << eqf << std::endl;
  }

  return 0;
}