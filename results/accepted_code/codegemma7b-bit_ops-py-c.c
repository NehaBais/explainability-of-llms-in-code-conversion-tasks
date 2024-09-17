#include <stdint.h>
#include <stdio.h>

#define MASK(width) ((1U << (width)) - 1)

int main() {
  int width = 8;
  int a = 27;
  int b = 125;

  printf("Bitwise Operations:\n");
  printf("AND: %0*b & %0*b = %0*b\n", width, a, width, b, width,
         (a & b) & MASK(width));
  printf("OR: %0*b | %0*b = %0*b\n", width, a, width, b, width,
         (a | b) & MASK(width));
  printf("XOR: %0*b ^ %0*b = %0*b\n", width, a, width, b, width,
         (a ^ b) & MASK(width));
  printf("NOT: ~%0*b = %0*b\n", width, a, width, ~a & MASK(width));

  printf("\nLeft Shift:\n");
  printf("a << 1: %0*b\n", width, a << 1);

  printf("\nRight Shift:\n");
  printf("a >> 1: %0*b\n", width, a >> 1);

  printf("\nArithmetic Right Shift:\n");
  printf("a >> 1 (sign preserving): %0*b\n", width, a >> 1);

  printf("\nRotate Right:\n");
  printf("rotr(a, 1): %0*b\n", width, rotr(a, 1));
  printf("rotr(a, 2): %0*b\n", width, rotr(a, 2));

  printf("\nRotate Left:\n");
  printf("rotl(a, 1): %0*b\n", width, rotl(a, 1));
  printf("rotl(a, 2): %0*b\n", width, rotl(a, 2));

  return 0;
}

int rotr(int value, int shift) {
  return (value >> shift) | (value << (width - shift));
}

int rotl(int value, int shift) {
  return (value << shift) | (value >> (width - shift));
}