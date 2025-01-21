#include <iostream>
#include <string>

bool compare(const std::string &a, const std::string &b) {
  if (a == b) {
    std::cout << a << " is equal to " << b << '\n';
    return true;
  } else if (a < b) {
    std::cout << a << " is less than " << b << '\n';
    return true;
  } else {
    std::cout << a << " is greater than " << b << '\n';
    return true;
  }
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");
  compare(24, 123);
  compare(5.0, 5);

  return 0;
}