#include <stdio.h>

int main() {
  unsigned char a =
      105;              // Assuming u8 in Rust corresponds to unsigned char in C
  unsigned char b = 91; // Assuming u8 in Rust corresponds to unsigned char in C

  printf("a      = %02x\n", a);
  printf("b      = %02x\n", b);
  printf("a | b  = %02x\n", a | b);
  printf("a & b  = %02x\n", a & b);
  printf("a ^ b  = %02x\n", a ^ b);
  // printf("!a     = %02x\n", !a); // This is not valid in C, it's just for
  // illustration purposes.
  printf(
      "a << 3 = %02x\n",
      (unsigned char)(a
                      << 3)); // left shift is a bitwise operation and cannot be
                              // directly converted to unsigned char in Rust, so
                              // we cast the result back to unsigned char
  printf(
      "a >> 3 = %02x\n",
      (unsigned char)(a >> 3)); // right arithmetic shift is also not valid for
                                // chars, but same trick can be applied here

  return 0;
}