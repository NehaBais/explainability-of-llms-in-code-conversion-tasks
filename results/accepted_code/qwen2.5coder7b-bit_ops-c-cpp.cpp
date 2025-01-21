#include <iostream>

void bitwise(int a, int b) {
  std::cout << "a and b: " << (a & b) << std::endl;
  std::cout << "a or b: " << (a | b) << std::endl;
  std::cout << "a xor b: " << (a ^ b) << std::endl;
  std::cout << "not a: " << (~a) << std::endl;
  std::cout << "a << n: " << (a << b) << std::endl; // left shift
  std::cout << "a >> n: " << (a >> b)
            << std::endl; // arithmetic right shift on most platforms
  unsigned int c = a;
  std::cout << "c >> b: " << (c >> b) << std::endl; // logical right shift

  // Left rotate implementation for completeness
  unsigned int leftRotate(unsigned int n, int d) {
    return (n << d) | (n >> (32 - d)); // Assuming 32-bit integer
  }

  // Right rotate implementation for completeness
  unsigned int rightRotate(unsigned int n, int d) {
    return (n >> d) | (n << (32 - d)); // Assuming 32-bit integer
  }

  std::cout << "a left rotate b: " << leftRotate(a, b) << std::endl;
  std::cout << "a right rotate b: " << rightRotate(a, b) << std::endl;
}

int main() {
  int a = 5; // Example values
  int b = 2;
  bitwise(a, b);
  return 0;
}