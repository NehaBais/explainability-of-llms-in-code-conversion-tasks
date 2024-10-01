#include <algorithm>
#include <iostream>
#include <string>

int main() {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");
  return 0;
}

void compare(const std::string &A, const std::string &B) {
  if (A == B)
    std::cout << "'" << A << "' and '" << B << "' are lexically equal.\n";
  else
    std::cout << "'" << A << "' and '" << B << "' are not lexically equal.\n";

  if (A == B) {
    std::transform(B.begin(), B.end(), B.begin(), ::tolower);
    if (A == B)
      std::cout << "'" << A << "' and '" << B
                << "' are case-insensitive lexically equal.\n";
    else
      std::cout << "'" << A << "' and '" << B
                << "' are not case-insensitive lexically equal.\n";
  }

  if (A < B)
    std::cout << "'" << A << "' is lexically before '" << B << "'.\n";
  else if (B < A)
    std::cout << "'" << A << "' is not lexically before '" << B << "'.\n";

  if (A > B)
    std::cout << "'" << A << "' is lexically after '" << B << "'.\n";
  else if (B < A)
    std::cout << "'" << A << "' is not lexically after '" << B << "'.\n";

  std::cout << "The lexical relationship is: " << std::string(A) - B << "\n";
  std::cout << "The case-insensitive lexical relationship is: "
            << std::string(A) - B << "\n";
}