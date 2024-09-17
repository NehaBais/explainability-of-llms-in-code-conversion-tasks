#include <stdint.h>
#include <stdio.h>

int main() {
  uint8_t A = 105;
  uint8_t b = 91;

  printf("A      = %08X\n", A);
  printf("b      = %08X\n", b);
  printf("A | b  = %08X\n", A | b);
  printf("A & b  = %08X\n", A & b);
  printf("A ^ b  = %08X\n", A ^ b);
  printf("!A     = %08X\n", ~A);
  printf("A << 3 = %08X\n", A << 3);
  printf("A >> 3 = %08X\n", A >> 3);

  return 0;
}