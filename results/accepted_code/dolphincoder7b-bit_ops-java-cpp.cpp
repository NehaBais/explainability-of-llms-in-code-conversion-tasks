#include <iostream>

void bitwise_operations(int a, int b) {
  std::cout << "a AND b: " << (a & b) << '\n'; // bitwise AND operation
  std::cout << "a OR b: " << (a | b) << '\n';  // bitwise OR operation
  std::cout << "a XOR b: " << (a ^ b) << '\n'; // bitwise XOR operation
  std::cout << "NOT a: " << ~a << '\n';        // bitwise NOT operation
  std::cout << "a  left shift by b: " << (a << b)
            << '\n'; // left shift operation
  std::cout << "a  right arithmetic shift by b: " << (a >> b)
            << '\n'; // right arithmetic shift operation
  std::cout << "a  right logical shift by b: " << (a >> b)
            << '\n'; // right logical shift operation
  std::cout << "a rotated left by b: " << __builtin_rotateleft(a, b)
            << '\n'; // rotate left operation, C++11 or later
  std::cout << "a rotated right by b: " << __builtin_rotateright(a, b)
            << '\n'; // rotate right operation, C++11 or later
}

int main() {
  bitwise_operations(4, 2);
  return 0;
}