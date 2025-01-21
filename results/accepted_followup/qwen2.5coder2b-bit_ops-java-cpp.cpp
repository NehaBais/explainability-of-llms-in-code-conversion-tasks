#include <bitset>
#include <iostream>

int Integer_rotateLeft(int x, int y) { return (x << y) | (x >> (32 - y)); }

int Integer_rotateRight(int x, int y) {
  // Use bit manipulation to rotate right
  return ((x >> y) << 32) | (x & ((1 << y) - 1));
}

void bitwise(int a, int b) {
  std::cout << "a AND b: " << (a & b) << std::endl;
  std::cout << "a OR b: " << (a | b) << std::endl;
  std::cout << "a XOR b: " << (a ^ b) << std::endl;

  // NOT a
  int not_a = ~a;
  std::cout << "NOT a: " << not_a << std::endl;

  // Left shift
  int left_shifted = a << b;
  std::cout << "a << b: " << left_shifted << std::endl;

  // Arithmetic right shift
  int arithmetic_right_shifted = a >> b;
  std::cout << "a >> b: " << arithmetic_right_shifted << std::endl;

  // Logical right shift (Using bit manipulation)
  int logical_right_shifted = ((x >> y) << 32) | (x & ((1 << y) - 1));
  std::cout << "a >>> b: " << logical_right_shifted << std::endl;

  // Rotate left
  int rotated_left = Integer_rotateLeft(a, b);
  std::cout << "a rol b: " << rotated_left << std::endl;

  // Rotate right
  int rotated_right = Integer_rotateRight(a, b);
  std::cout << "a ror b: " << rotated_right << std::endl;
}

int main() {
  bitwise(5, 2);
  return 0;
}