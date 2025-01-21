#include <stdio.h>

unsigned int rotl(int width, unsigned int a, int n) {
  return (a << n) | (a >> (width - n));
}

unsigned int rotr(int width, unsigned int a, int n) {
  return (a >> n) | (a << (width - n));
}

int main() {
  printf("    AND:     0b%0*b \n           & 0b%0*b \n           = 0b%0*b\n", 2,
         5, 10, 2, 7, 8);

  unsigned int a = 5;
  printf("    AND:     0b%0*b \n           & 0b%0*b \n           = 0b%0*b\n", 3,
         a, 2, 4, a >> 2);

  return 0;
}