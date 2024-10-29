#include <iostream>
#include <string>

void compare(const std::string &A, const std::string &B) {
  if (A == B) {
    std::cout << "'" << A << "' and '" << B << "' are lexically equal.";
  } else {
    std::cout << "'" << A << "' and '" << B << "' are not lexically equal.";
  }
  std::cout << std::endl;

  if (A.compare(B) == 0) {
    std::cout << "'" << A << "' and '" << B
              << "' are case-insensitive lexically equal.";
  } else {
    std::cout << "'" << A << "' and '" << B
              << "' are not case-insensitive lexically equal.";
  }
  std::cout << std::endl;

  if (A < B) {
    std::cout << "'" << A << "' is lexically before '" << B << "'.";
  } else if (B < A) {
    std::cout << "'" << A << "' is lexically after '" << B << "'.";
  }

  // For the not before and not after messages, we use `>=` or `<=` instead of
  // `>` or `<` because if a string is equal to another one then it's by
  // definition not before or after it.

  std::cout << "The lexical relationship is: " << A.compare(B) << std::endl;
  std::cout << "The case-insensitive lexical relationship is: " << A.compare(B)
            << std::endl;
}

int main() {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");

  return <｜begin▁of▁sentence｜ > 0;
}