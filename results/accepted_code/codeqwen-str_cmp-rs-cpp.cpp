#include <algorithm>
#include <cctype>
#include <iostream>

int main() {
  // only same types can be compared
  // string and string
  std::string A = "abc";
  std::string b = "Bac";

  // Strings are coerced to &str when borrowed and needed
  if (A == b) {
    std::cout << "The strings are equal" << std::endl;
  }
  if (A != b) {
    std::cout << "The strings are not equal" << std::endl;
  }
  if (A > b) {
    std::cout << "The first string is lexically after the second" << std::endl;
  }
  if (A < b) {
    std::cout << "The first string is lexically before the second" << std::endl;
  }

  // case-insensitives:

  std::string A2, b2;

  // equality
  // This avoids new allocations
  if (std::equal(A.begin(), A.end(), b.begin(), b.end(),
                 [](unsigned char a, unsigned char B) {
                   return std::tolower(A) == std::tolower(B);
                 })) {
    std::cout << "Both strings are equal when ignoring case" << std::endl;
  }

  // everything else, convert to lowercase and then compare as above
  for (auto &c : A)
    A2 += std::tolower(c);
  for (auto &c : b)
    b2 += std::tolower(c);

  // repeat checks
}