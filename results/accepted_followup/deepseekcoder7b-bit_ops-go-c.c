#include <inttypes.h>
#include <stdio.h>

void print_bin(uint16_t n) {
  for (int i = 15; i >= 0; --i) {
    printf("%d", (n >> i) & 1);
  }
}

void bitwise(uint16_t a, uint8_t b) {
  printf("shr: ");
  print_bin(a >> 2);
}

int main() {
  uint16_t a = 460; // Change these values as per your requirement.
  uint8_t b = 2;    // Change these values as per your requirement.

  bitwise(a, b);

  return 0;
}