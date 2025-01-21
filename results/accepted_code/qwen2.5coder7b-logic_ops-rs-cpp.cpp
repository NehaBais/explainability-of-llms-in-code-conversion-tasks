#include <iostream>

void boolean_ops(bool a, bool b) {
  std::cout << a << " and " << b << " -> " << (a && b) << std::endl;
  std::cout << a << " or " << b << " -> " << (a || b) << std::endl;
  std::cout << a << " xor " << b << " -> " << (a ^ b) << std::endl;
  std::cout << "not " << a << " -> " << (!a) << std::endl;
}

int main() {
  boolean_ops(true, true);
  boolean_ops(true, false);
  boolean_ops(false, true);
  boolean_ops(false, false);
}