#include <iostream>
#include <string>

int main() {
  std::cout << (std::string("abcd") == "abcd") << '\n';                     // 1
  std::cout << (std::string("abcd") != "dcba") << '\n';                     // 1
  std::cout << (std::string("123") < "124") << '\n';                        // 1
  std::cout << (std::string("123").compare("124") < 0) << '\n';             // 1
  std::cout << (std::string("abcd").compare("dcba") > 0) << '\n';           // 1
  std::cout << (std::string("ABCD").tolower() == "abcd".tolower()) << '\n'; // 1

  return 0;
}