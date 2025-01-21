#include <algorithm> // For transform function
#include <iostream>
#include <string>

void compare(std::string A, std::string B) {
  if (A == B) {
    std::cout << "'" << A << "' and '" << B << "' are lexically equal."
              << std::endl;
  } else {
    std::cout << "'" << A << "' and '" << B << "' are not lexically equal."
              << std::endl;
  }

  // Convert strings to lower case for case-insensitive comparison
  std::transform(A.begin(), A.end(), A.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  std::transform(B.begin(), B.end(), B.begin(),
                 [](unsigned char c) { return std::tolower(c); });

  if (A == B) {
    std::cout << "'" << A << "' and '" << B
              << "' are case-insensitive lexically equal." << std::endl;
  } else {
    std::cout << "'" << A << "' and '" << B
              << "' are not case-insensitive lexically equal." << std::endl;
  }

  // Reset original strings
  std::transform(A.begin(), A.end(), A.begin(),
                 [](unsigned char c) { return std::toupper(c); });
  std::transform(B.begin(), B.end(), B.begin(),
                 [](unsigned char c) { return std::toupper(c); });

  if (A < B) {
    std::cout << "'" << A << "' is lexically before '" << B << "'."
              << std::endl;
  } else if (A > B) {
    std::cout << "'" << A << "' is lexically after '" << B << "'." << std::endl;
  }

  int relationship = A.compare(B);
  std::cout << "The lexical relationship is: " << relationship << std::endl;

  int caseInsensitiveRelationship = A.compare(
      0, A.length(), B, 0, B.length(),
      true); // Custom compare function for case-insensitive comparison
  std::cout << "The case-insensitive lexical relationship is: "
            << caseInsensitiveRelationship << std::endl;
}

int main() {
  compare("Hello", "Hello");
  compare(
      "5",
      "5.0"); // Note that numeric strings are compared lexicographically in C++
  compare("java", "Java");
  compare("ĴÃVÁ", "ĴÃVÁ");
  compare("ĴÃVÁ", "ĵãvá");

  return 0;
}