#include <algorithm> // for std::transform
#include <iostream>
#include <string>

void compare(const std::string &A, const std::string &B) {
  if (A == B) {
    std::cout << "'" << A << "' and '" << B << "' are lexically equal.";
  } else {
    std::cout << "'" << A << "' and '" << B << "' are not lexically equal.";
  }
  std::cout << std::endl;

  // Case-insensitive comparison: convert both strings to lower case first.
  std::string a = A, b = B;
  std::transform(a.begin(), a.end(), a.begin(), ::tolower);
  std::transform(b.begin(), b.end(), b.begin(), ::tolower);
  if (a == b) {
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
  } else { // A and B are not less than each other, so they must be equal.
    std::cout << "'" << A << "' equals to '" << B << "'.";
  }

  std::cout << "\nThe lexical relationship is: " << A.compare(B) << std::endl;
}

int main() {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");

  return 0; // This is a valid and correct way of returning from main function.
}