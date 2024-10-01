#include
#include
#include
int main() {
  std::string a("abc");
  std::string b("Bac");

  // Strings are coerced to const char* when borrowed and needed
  if (a == b) {
    std::cout << "The strings are equal" << std::endl;
  }
  if (a != b) {
    std::cout << "The strings are not equal" << std::endl;
  }
  if (a > b) {
    std::cout << "The first string is lexically after the second" << std::endl;
  }
  if (a < b) {
    std::cout << "The first string is lexically before the second" << std::endl;
  }
  if (a >= b) {
    std::cout << "The first string is not lexically before the second"
              << std::endl;
  }
  if (a <= b) {
    std::cout << "The first string is not lexically after the second"
              << std::endl;
  }

  // case-insensitives:
  // equality
  // this avoids new allocations
  if (std::equal(a.begin(), a.end(), b.begin())) {
    std::cout << "Both strings are equal when ignoring case" << std::endl;
  }

  // everything else, create owned Strings, then compare as above
  std::string a2 = a;
  std::transform(a2.begin(), a2.end(), a2.begin(), ::tolower);
  std::string b2 = b;
  std::transform(b2.begin(), b2.end(), b2.begin(), ::tolower);

  // repeat checks
}