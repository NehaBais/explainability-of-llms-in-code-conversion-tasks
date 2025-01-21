#include <iostream>

void bitwise(int a, int b) {
  std::cout << "a and b: " << (a & b) << std::endl;
  std::cout << "a or b: " << (a | b) << std::endl;
  std::cout << "a xor b: " << (a ^ b) << std::endl;
  std::cout << "not a: " << (~a) << std::endl;
  std::cout << "a << n: " << (a << b) << std::endl; /* left shift */
  std::cout << "a >> n: " << (a >> b)
            << std::endl; /* on most platforms: arithmetic right shift */
  /* convert the signed integer into unsigned, so it will perform logical shift
   */
  unsigned int c = a;
  std::cout << "c >> b: " << (c >> b) << std::endl; /* logical right shift */
  /* there are no rotation operators in C */
}

int main() {
  bitwise(5, 3);
  return 0;
}