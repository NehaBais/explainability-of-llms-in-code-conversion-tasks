#include <stdio.h>

void bitwise_built_ins(int width, int a, int b) {
  int mask = (1 << width) - 1;

  printf("AND:    0b%*d\n& 0b%*dbits  =  0b%*dbits\n", width, a, width, b,
         width, (a & b) & mask);
  printf("OR:     0b%*d\n|   0b%*dbits  =  0b%*dbits\n", width, a, width, b,
         width, (a | b) & mask);
  printf("XOR:    0b%*d\n^ 0b%*dbits  =  0b%*dbits\n", width, a, width, b,
         width, (a ^ b) & mask);
  printf("NOT:\t~0b%*d =  0b%*d\n", width, a, width, ~a & mask);
}

int main() {
  bitwise_built_ins(
      8, 5, 3); // Test the function with 8-bit numbers 5 (0101) and 3 (0011)
  return 0;
}