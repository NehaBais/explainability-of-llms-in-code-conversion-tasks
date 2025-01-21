#include <iostream>

bool logic(const bool &a, const bool &b) {
  std::cout << "a and b:" << (a && b) << std::endl;
  std::cout << "a or b:" << (a || b) << std::endl;
  std::cout << "not a:" << !a << std::endl;
}

int main() {
  bool a = true, b = false;
  logic(a, b);
  return 0; // return value of main depends on the success of program.
} // If error occurs at any point, it will return non-zero value.