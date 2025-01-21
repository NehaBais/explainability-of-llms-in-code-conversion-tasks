#include <iostream>
#include <string>
#include <typeinfo>

void compare(const std::string &a, const std::string &b) {
  std::cout << "\"" << a << "\" is of type " << typeid(a).name() << " and \""
            << b << "\" is of type " << typeid(b).name() << std::endl;

  if (a < b)
    std::cout << "\"" << a << "\" is strictly less than \"" << b << "\""
              << std::endl;
  if (a <= b)
    std::cout << "\"" << a << "\" is less than or equal to \"" << b << "\""
              << std::endl;
  if (a > b)
    std::cout << "\"" << a << "\" is strictly greater than \"" << b << "\""
              << std::endl;
  if (a >= b)
    std::cout << "\"" << a << "\" is greater than or equal to \"" << b << "\""
              << std::endl;
  if (a == b)
    std::cout << "\"" << a << "\" is equal to \"" << b << "\"" << std::endl;
  if (a != b)
    std::cout << "\"" << a << "\" is not equal to \"" << b << "\"" << std::endl;
  // Object identity comparisons are not applicable in C++ as they don't use
  // pointers like in Python
}

void compare(const char *a, const char *b) {
  std::string sa(a), sb(b);
  compare(sa, sb);
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  // Uncomment the following lines to test numeric string comparisons
  // compare("24", "123"); // This will not work as expected due to
  // lexicographical comparison of strings compare(24, 123); // This will not
  // work because direct integer or double comparison without type conversion is
  // not possible in C++ compare(5.0, 5); // This will not work for the same
  // reason

  return 0;
}