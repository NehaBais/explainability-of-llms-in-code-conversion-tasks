#include <cctype> // for tolower()
#include <iostream>
#include <string>

void compare(const std::string &A, const std::string &B) {
  if (A == B)
    std::cout << "'" << A << "' and '" << B << "' are lexically equal."
              << std::endl;
  else
    std::cout << "'" << A << "' and '" << B << "' are not lexically equal."
              << std::endl;

  if (A.size() == B.size()) {
    bool caseSensitiveEqual = true, caseInsensitiveEqual = true;
    for (size_t i = 0; i < A.size(); ++i) {
      if (std::tolower(A[i]) != std::tolower(B[i]))
        caseInsensitiveEqual = false;
      if (A[i] != B[i])
        caseSensitiveEqual = false;
    }
    if (caseInsensitiveEqual)
      std::cout << "'" << A << "' and '" << B
                << "' are case-insensitive lexically equal." << std::endl;
    else
      std::cout << "'" << A << "' and '" << B
                << "' are not case-insensitive lexically equal." << std::endl;
  } else {
    std::cout << "'" << A << "' and '" << B
              << "' are not case-insensitive lexically equal due to different "
                 "lengths."
              << std::endl;
  }

  if (A < B)
    std::cout << "'" << A << "' is lexically before '" << B << "'."
              << std::endl;
  else if (A > B)
    std::cout << "'" << A << "' is lexically after '" << B << "'." << std::endl;
  else {
    std::cout << "'" << A << "' is not lexically before '" << B << "."
              << std::endl;
    std::cout << "'" << A << "' is not lexically after '" << B << "."
              << std::endl;
  }

  int lexicalComparison = A.compare(B);
  if (lexicalComparison < 0)
    std::cout << "'" << A << "' is lexically before '" << B << '.' << std::endl;
  else if (lexicalComparison > 0)
    std::cout << "'" << A << "' is lexically after '" << B << '.' << std::endl;
  else
    std::cout << "'" << A << "' and '" << B << "' are lexically equal."
              << std::endl;

  int caseInsensitiveComparison = A.compare(0, A.size(), B, 0, B.size());
  if (caseInsensitiveComparison < 0)
    std::cout << "'" << A << "' is lexically before '" << B << '.' << std::endl;
  else if (caseInsensitiveComparison > 0)
    std::cout << "'" << A << "' is lexically after '" << B << '.' << std::endl;
  else
    std::cout << "'" << A << "' and '" << B << "' are lexically equal."
              << std::endl;
}

int main() {
  compare("Hello", "Hello");
  compare("5", "5.0");
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");
  return 0;
}