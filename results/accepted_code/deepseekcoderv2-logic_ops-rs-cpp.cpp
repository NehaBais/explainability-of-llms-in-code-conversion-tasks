#include <iostream>

void boolean_ops(bool a, bool b) {
  std::cout << std::boolalpha; // Print bools as true/false
  std::cout << "and (" << a << ", " << b << ") -> " << (a && b) << std::endl;
  std::cout << "or  (" << a << ", " << b << ") -> " << (a || b) << std::endl;
  // In C++, the XOR operation is not directly supported by the standard
  // library, so we use the ^ operator for bitwise XOR
  std::cout << "xor (" << a << ", " << b << ") -> " << (a != b) << std::endl;
  std::cout << "not (" << a << ") -> " << !a << std::endl;
}

int main() {
  boolean_ops(true, true);
  boolean_ops(true, false);
  boolean_ops(false, true);
  boolean_ops(false, false);
  return 0;
}