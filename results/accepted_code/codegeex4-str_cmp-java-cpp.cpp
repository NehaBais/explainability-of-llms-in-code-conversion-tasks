#include <iostream>
#include <string>

void compare(const std::string &A, const std::string &B) {
  if (A == B)
    std::cout << "'" << A << "' and '" << B << "' are lexically equal."
              << std::endl;
  else
    std::cout << "'" << A << "' and '" << B << "' are not lexically equal."
              << std::endl;

  if (A.compare(B, 0, A.length()) == 0)
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
  std::cout << "The case-insensitive lexical relationship is: "
            << A.compareIgnoreCase(B) << "\n";
}

int main() {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");

  return 0;
}