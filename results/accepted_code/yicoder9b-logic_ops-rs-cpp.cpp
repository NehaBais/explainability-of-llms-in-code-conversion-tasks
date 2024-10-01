#include <iostream>

void boolean_ops(bool a, bool b) {
  std::cout << "and operation : " << a << " and " << b << " -> " << (a && b)
            << std::endl;
  std::cout << "or operation:  " << a << " or " << b << " -> " << (a || b)
            << std::endl;
  // XOR operator in C++ is implemented using the '^' operator.
  std::cout << "xor operation : " << a << " xor " << b << " -> " << (a ^ b)
            << std::endl;
  std::cout << "not operation:  " << a << " not " << " -> " << !a << std::endl;
}

int main() {
  boolean_ops(true, true);
  boolean_ops(true, false);
  boolean_ops(false, true);
  boolean_ops(false, false);
  return 0; // standard return for a void function in C++.
}