#include <iostream>
#include <typeinfo> // Needed for typeid().name()

void compare(std::string a, std::string b) {
  std::cout << "'" << a << "' is of type '" << typeid(a).name() << "' and '"
            << b << "' is of type '" << typeid(b).name() << "'\n";
  if (a < b)
    std::cout << "' " << a << "' is strictly less than  ' " << b << "'\n";
  if (a <= b)
    std::cout << "' " << a << "' is less than or equal to ' " << b << "'\n";
  if (a > b)
    std::cout << "' " << a << "' is strictly greater than  ' " << b << "'\n";
  if (a >= b)
    std::cout << "' " << a << "' is greater than or equal to ' " << b << "'\n";
  if (a == b)
    std::cout << "' " << a << "' is equal to ' " << b << "'\n";
  if (a != b)
    std::cout << "' " << a << "' is not equal to ' " << b << "'\n";
  // There's no equivalent for Python's `is` and `is not` in C++.
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");
  // compare(24, 123);   // Error: type mismatch
  // compare(5.0, 5);    // Error: type mismatch
  return 0;
}