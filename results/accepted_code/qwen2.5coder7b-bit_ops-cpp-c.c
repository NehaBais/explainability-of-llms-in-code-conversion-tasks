#include <stdint.h>
#include <stdio.h>

// Bitwise AND operation
int bitwise_and(int a, int b) { return (a & b); }

// Bitwise OR operation
int bitwise_or(int a, int b) { return (a | b); }

// Bitwise XOR operation
int bitwise_xor(int a, int b) { return (a ^ b); }

// Bitwise NOT operation on the first integer
int bitwise_not(int a) { return ~a; }

// Left shift on the first integer with a shift amount of the second integer
int left_shift(int a, int b) { return (a << b); }

// Right shift on the first integer with a shift amount of the second integer
int right_shift(int a, int b) { return (a >> b); }

// Logical right shift (guaranteed) on the first integer with a shift amount of
// the second integer
unsigned int logical_right_shift(unsigned int a, int b) {
  unsigned int ua = a;
  return (ua >> b);
}

// Left rotate on the first integer with a shift amount of the second integer
int left_rotate(int a, int b) {
  unsigned int ua = (unsigned int)a;
  return ((ua << b) | (ua >> (32 - b)));
}

// Right rotate on the first integer with a shift amount of the second integer
int right_rotate(int a, int b) {
  unsigned int ua = (unsigned int)a;
  return ((ua >> b) | (ua << (32 - b)));
}

void bitwise_operations(int a, int b) {
  printf("a and b: %d\n", bitwise_and(a, b));
  printf("a or b:  %d\n", bitwise_or(a, b));
  printf("a xor b: %d\n", bitwise_xor(a, b));
  printf("not a:   %d\n", bitwise_not(a));
  printf("a shl b: %d\n", left_shift(a, b));
  printf("a shr b: %d\n", right_shift(a, b));
  printf("a lsr b: %u\n", logical_right_shift((unsigned int)a, b));
  printf("a rol b: %d\n", left_rotate(a, b));
  printf("a ror b: %d\n", right_rotate(a, b));
}

int main() {
  int a = 5;
  int b = 3;

  bitwise_operations(a, b);

  return 0;
}