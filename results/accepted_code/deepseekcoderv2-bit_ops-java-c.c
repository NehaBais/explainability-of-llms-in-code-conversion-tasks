#include <limits.h>
#include <stdint.h>
#include <stdio.h>

void bitwise(uint32_t a, uint32_t b) {
  printf("a AND b: %u\n", (a & b));
  printf("a OR b: %u\n", (a | b));
  printf("a XOR b: %u\n", (a ^ b));
  printf("NOT a: %u\n", ~a);
  if (b < sizeof(uint32_t) * CHAR_BIT) { // Check for valid shift amount
    printf("a << b: %u\n", (a << b));    // left shift
    printf("a >> b: %u\n", (a >> b));    // arithmetic right shift
  } else {
    printf("Invalid shift amount for a << b\n");
  }
  if (b < sizeof(uint32_t) * CHAR_BIT) { // Check for valid shift amount
    printf("a >>> b: %u\n",
           (unsigned int)(a >> b)); // logical right shift, unsigned to avoid
                                    // sign extension
  } else {
    printf("Invalid shift amount for a >>> b\n");
  }
  if (b < sizeof(uint32_t) * CHAR_BIT) { // Check for valid shift amount
    printf("a rol b: %u\n", _rotl((int)a, (int)b)); // rotate left
  } else {
    printf("Invalid shift amount for a rol b\n");
  }
  if (b < sizeof(uint32_t) * CHAR_BIT) { // Check for valid shift amount
    printf("a ror b: %u\n", _rotr((int)a, (int)b)); // rotate right
  } else {
    printf("Invalid shift amount for a ror b\n");
  }
}

// Assuming these functions are defined in stdlib.h or similar header
uint32_t _rotl(uint32_t value, int shift) {
  return (value << shift) | (value >> (32 - shift));
}

uint32_t _rotr(uint32_t value, int shift) {
  return (value >> shift) | (value << (32 - shift));
}

int main() {
  uint32_t a = 0x12345678; // Example values
  uint32_t b = 0x23;
  bitwise(a, b);
  return 0;
}