#include <stdio.h>

// Helper function for the rotations
unsigned int rotate_right(unsigned int val, unsigned int n) {
  unsigned int mask = (1 << 8) - 1;
  return ((val >> n) | ((val & mask) << (8 - n)));
}

unsigned int rotate_left(unsigned int val, unsigned int n) {
  unsigned int mask = (1 << 8) - 1;
  return (((val << n) & mask) | (val >> (8 - n)));
}

int main() {
  unsigned int width = 8, a = 27, b = 125;

  // Bitwise AND
  printf("AND:    0b%08X \n", a);
  printf("&  0b%08X \n", b);
  printf("= 0b%08X\n", (a & b));

  // Bitwise OR
  printf("\nOR:     0b%08X \n", a);
  printf("|  0b%08X \n", b);
  printf("= 0b%08X\n", (a | b));

  // Bitwise XOR
  printf("\nXOR:    0b%08X \n", a);
  printf("^  0b%08X \n", b);
  printf("= 0b%08X\n", (a ^ b));

  // Bitwise NOT
  printf("\nNOT:    ~ 0b%08X \n", a);
  printf("= 0b%08X\n", (~a));

  // Bitwise RIGHT SHIFT
  printf("\nRIGHT SHIFT:\n");
  unsigned int result = rotate_right(a, 1);
  printf("Rotate right:   0b%08X -> ", a);
  printf("0b%08X \n", result);

  result = rotate_right(a, 2);
  printf("Rotate right:   0b%08X -> ", a);
  printf("0b%08X \n", result);

  result = rotate_right(a, 4);
  printf("Rotate right:   0b%08X -> ", a);
  printf("0b%08X \n", result);

  // Bitwise LEFT SHIFT
  printf("\nLEFT SHIFT:\n");
  result = rotate_left(a, 1);
  printf("Rotate left:  0b%08X -> ", a);
  printf("0b%08X \n", result);

  result = rotate_left(a, 2);
  printf("Rotate left:  0b%08X -> ", a);
  printf("0b%08X \n", result);

  result = rotate_left(a, 4);
  printf("Rotate left:  0b%08X -> ", a);
  printf("0b%08X \n", result);

  return 0;
}