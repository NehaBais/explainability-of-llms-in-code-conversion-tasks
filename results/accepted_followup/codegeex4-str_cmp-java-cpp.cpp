#include <algorithm>
#include <iostream>
#include <string>

void compare(const std::string &A, const std::string &B) {
  if (A == B)
    std::cout << "'" << A << "' and '" << B << "' are lexically equal."
              << std::endl;
  else
    std::cout << "'" << A << "' and '" << B << "' are not lexically equal."
              << std::endl;

  std::string lowerA = A;
  std::transform(lowerA.begin(), lowerA.end(), lowerA.begin(), ::tolower);
  std::string lowerB = B;
  std::transform(lowerB.begin(), lowerB.end(), lowerB.begin(), ::tolower);

  if (lowerA == lowerB)
    std::cout << "'" << A << "' and '" << B
              << "' are case-insensitive lexically equal." << std::endl;
  else
    std::cout << "'" << A << "' and '" << B
              << "' are not case-insensitive lexically equal." << std::endl;

  if (A.compare(B) < 0)
    std::cout << "'" << A << "' is lexically before '" << B << ".'"
              << std::endl;
  else if (A.compare(B) > 0)
    std::cout << "'" << A << "' is lexically after '" << B << ".'" << std::endl;

  if (A.compare(B) >= 0)
    std::cout << "'" << A << "' is not lexically before '" << B << ".'"
              << std::endl;

  if (A.compare(B) <= 0)
    std::cout << "'" << A << "' is not lexically after '" << B << ".'"
              << std::endl;

  std::cout << "The lexical relationship is: " << A.compare(B) << "\n";
}

int main() { compare("Hello", "hello"); }