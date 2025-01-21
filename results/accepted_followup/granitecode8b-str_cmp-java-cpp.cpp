#include
#include
int main() {
  std::string A = "Hello";
  std::string B = "Hello";
  if (A == B) {
    std::cout << "'" << A << "' and '" << B << "' are lexically equal."
              << std::endl;
  } else {
    std::cout << "'" << A << "' and '" << B << "' are not lexically equal."
              << std::endl;
  }
  if (A < B) {
    std::cout << "'" << A << "' is lexically before '" << B << "'."
              << std::endl;
  } else {
    std::cout << "'" << A << "' is not lexically before '" << B << "'."
              << std::endl;
  }
  if (A > B) {
    std::cout << "'" << A << "' is lexically after '" << B << "'." << std::endl;
  } else {
    std::cout << "'" << A << "' is not lexically after '" << B << "'."
              << std::endl;
  }
  return 0;
}