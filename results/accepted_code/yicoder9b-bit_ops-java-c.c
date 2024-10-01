#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 // size of int in bits

// function for left rotate operation
int leftRotate(int a, int b) {
  b = b % INT_SIZE; // to handle b > INT_SIZE
  return (a << b) | (a >> (INT_SIZE - b));
}

// function for right rotate operation
int rightRotate(int a, int b) {
  b = b % INT_SIZE; // to handle b > INT_SIZE
  return (a >> b) | (a << (INT_SIZE - b));
}

void bitwise(int a, int b) {
  printf("a AND b: %d\n", (a & b));
  printf("a OR b: %d\n", (a | b));
  printf("a XOR b: %d\n", (a ^ b));
  printf("NOT a: %d\n", ~a);
  printf("a << b: %d\n", (a << b));
  printf("a >> b: %d\n", (a >> b));
  // logical right shift operation can be performed by arithmetic right shift
  // then OR with highest bit of a
  int highest_bit = a < 0 ? 1 : 0; // get the highest bit of a
  printf("a >>> b: %d\n", ((a >> b) | (highest_bit << INT_SIZE - b)));
  // rotate left and right operations are performed by two functions above.
  printf("a rol b: %d\n", leftRotate(a, b));
  printf("a ror b: %d\n", rightRotate(a, b));
}