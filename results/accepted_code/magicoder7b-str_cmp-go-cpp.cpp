#include <iostream>
#include <string>

int main() {
  std::string c = "cat";
  std::string d = "dog";

  if (c == d) {
    std::cout << c << " is bytewise identical to" << d << std::endl;
  } else {
    std::cout << c << " is bytewise different from" << d << std::endl;
  }
  if (c != d) {
    std::cout << c << " is lexically bytewise less than" << d << std::endl;
  }
  if (c < d) {
    std::cout << c << " is lexically bytewise less than" << d << std::endl;
  } else {
    std::cout << c << " is lexically bytewise greater or equal to" << d
              << std::endl;
  }

  // For the case-insensitive comparison, we need to implement it by ourselves.
  if (c.compare(d) == 0) {
    std::cout << c << " is equal to " << d << " under case insensitivity"
              << std::endl;
  } else {
    std::cout << c << " is not equal to " << d << " under case insensitivity"
              << std::endl;
  }

  return 0;
}