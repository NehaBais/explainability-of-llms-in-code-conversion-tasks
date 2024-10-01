#include <algorithm>
#include <iostream>
#include <string>

int main() {
  // C++ string comparison operators:
  std::string c = "cat";
  std::string d = "dog";
  if (c == d) {
    std::cout << c << " is bytewise identical to " << d << std::endl;
  }
  if (c != d) {
    std::cout << c << " Is bytewise different from " << d << std::endl;
  }
  if (c > d) {
    std::cout << c << " Is lexically bytewise greater than " << d << std::endl;
  }
  if (c < d) {
    std::cout << c << " Is lexically bytewise less than " << d << std::endl;
  }
  if (c >= d) {
    std::cout << c << " Is lexically bytewise greater than or equal to " << d
              << std::endl;
  }
  if (c <= d) {
    std::cout << c << " Is lexically bytewise less than or equal to " << d
              << std::endl;
  }

  // A case insensitive compare can be done with a function in the string class:
  std::string eqf = "when interpreted as UTF-8 and compared under Unicode "
                    "simple case folding rules.";
  if (c.compare(0, c.length(), d, 0, c.length(), std::locale("")) == 0) {
    std::cout << c << " equal to " << d << eqf << std::endl;
  } else {
    std::cout << c << " not equal to " << d << eqf << std::endl;
  }

  // C++ has no built-in numeric string comparison. However, you can compare
  // strings that represent numbers as follows:
  if (c.find_first_not_of("0123456789") == std::string::npos &&
      d.find_first_not_of("0123456789") == std::string::npos) {
    // Both are numeric strings - compare as numbers:
    int num1 = std::stoi(c);
    int num2 = std::stoi(d);

    if (num1 == num2) {
      std::cout << c << " is numerically equal to " << d << std::endl;
    } else if (num1 < num2) {
      std::cout << c << " Is numerically less than " << d << std::endl;
    } else {
      std::cout << c << " Is numerically greater than " << d << std::endl;
    }
  }

  return 0;
}