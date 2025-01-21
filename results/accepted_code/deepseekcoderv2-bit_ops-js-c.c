#include <stdio.h>

void bitwise(int a, int b) {
  printf("a AND b: %d\n", (a & b));
  printf("a OR b: %d\n", (a | b));
  printf("a XOR b: %d\n", (a ^ b));
  printf("NOT a: %d\n", ~a);

  // In C, the right shift operations are arithmetic if the value is signed, and
  // logical if it's unsigned.
  printf("a << b: %d\n", (a << b)); // left shift
  printf("a >> b: %d\n",
         (a >> b)); // arithmetic right shift for signed integers
  printf("a >>> b: %u\n",
         (unsigned int)(a) >>
             b); // logical right shift for unsigned integers, cast to unsigned
                 // to avoid sign extension issues
}

int main() {
  int a = 29; // Example values
  int b = 4;
  bitwise(a, b);
  return 0;
}