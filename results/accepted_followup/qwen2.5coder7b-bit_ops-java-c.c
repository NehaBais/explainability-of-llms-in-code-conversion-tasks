#include <stdio.h>

// Function declarations
unsigned int rotate_left(unsigned int value, int count);
unsigned int rotate_right(unsigned int value, int count);

void bitwise(int a, int b) {
  printf("a AND b: %d\n", (a & b));
  printf("a OR b: %d\n", (a | b));
  printf("a XOR b: %d\n", (a ^ b));
  printf("NOT a: %d\n", ~a);

  if (b >= 0) {
    printf("a << b: %u\n", (unsigned int)(a << b)); // left shift
  } else {
    printf("Left shift by negative value is undefined in C.\n");
  }

  if (b >= 0 && a >= 0) {
    printf("a >> b: %d\n", (a >> b)); // arithmetic right shift
  } else {
    printf("Arithmetic right shift with negative values is "
           "implementation-dependent in C.\n");
  }

  if (b >= 0 && a >= 0) {
    printf("a >>> b: %u\n", ((unsigned int)a >> b)); // logical right shift
  } else {
    printf("Logical right shift with negative values is undefined in C.\n");
  }

  if (b >= 0 && a >= 0) {
    printf("a rol b: %u\n", rotate_left(a, b));
  } else {
    printf("Rotate operations with negative values are not defined in standard "
           "C.\n");
  }

  if (b >= 0 && a >= 0) {
    printf("a ror b: %u\n", rotate_right(a, b));
  } else {
    printf("Rotate operations with negative values are not defined in standard "
           "C.\n");
  }
}

// Function definitions
unsigned int rotate_left(unsigned int value, int count) {
  return (value << count) | (value >> (32 - count));
}

unsigned int rotate_right(unsigned int value, int count) {
  return (value >> count) | (value << (32 - count));
}