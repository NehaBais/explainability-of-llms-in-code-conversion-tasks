#include <iostream>

void bitwise(int a, int b) {
  std::cout << "a and b: " << (a & b) << "\n";
  std::cout << "a or b: " << (a | b) << "\n";
  std::cout << "a xor b: " << (a ^ b) << "\n";
  std::cout << "not a: " << (~a) << "\n";
  std::cout << "a << n: " << (a << b) << "\n"; /* left shift */
  std::cout << "a >> n: " << (a >> b)
            << "\n"; /* on most platforms: arithmetic right shift */
  unsigned int c = a;
  std::cout << "c >> b: " << (c >> b) << "\n"; /* logical right shift */

  // left rotate
  std::cout << "left rotate: ";
  for (int i = 0; i < b; ++i) {
    if (a & 1)
      a = (a >> 31) | (a << 1);
    else
      a <<= 1;
  }
  std::cout << a << "\n";

  // right rotate
  std::cout << "right rotate: ";
  for (int i = 0; i < b; ++i) {
    if (a & (1 << (sizeof(int) * 8 - 1)))
      a = (a << 31) | (a >> 1);
    else
      a >>= 1;
  }
  std::cout << a << "\n";
}

int main() { bitwise(10, 2); }