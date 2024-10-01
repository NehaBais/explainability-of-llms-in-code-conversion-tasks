#include <iostream>
#include <locale>
#include <string>

int main() {
  std::string c = "cat";
  std::string d = "dog";

  // Comparing two strings for exact equality
  if (c == d) {
    std::cout << c << " is bytewise identical to " << d << std::endl;
  }

  // Comparing two strings for inequality
  if (c != d) {
    std::cout << c << " is bytewise different from " << d << std::endl;
  }

  // Comparing two strings to see if one is lexically ordered before than the
  // other
  if (c < d) {
    std::cout << c << " is lexically bytewise less than " << d << std::endl;
  }

  // Comparing two strings to see if one is lexically ordered after than the
  // other
  if (c > d) {
    std::cout << c << " is lexically bytewise greater than " << d << std::endl;
  }

  // Case sensitive comparison
  if (c.compare(d) == 0) {
    std::cout << c << " is case sensitive equal to " << d << std::endl;
  }

  // Case insensitive comparison
  if (c.compare(d, std::locale("en_US.UTF-8")) == 0) {
    std::cout << c << " is case insensitive equal to " << d << std::endl;
  }

  // Numerical string comparison
  std::string num1 = "10";
  std::string num2 = "20";
  if (num1.compare(num2) < 0) {
    std::cout << num1 << " is numerically less than " << num2 << std::endl;
  }

  return 0;
}