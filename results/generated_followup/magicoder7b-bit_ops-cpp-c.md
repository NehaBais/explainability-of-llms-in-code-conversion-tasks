 The error "Undefined symbols for architecture arm64" appears when attempting to link an object file that was compiled with different flags or system libraries. This typically happens because of differences in how the code was compiled, such as between a 32-bit and a 64-bit build, or using two different versions of the same library.

To fix this error:
Make sure to compile both the source file and the main() function with the same flags (like -m32 for 32-bit systems). This should solve the problem.

The corrected code is:
```c
#include <stdio.h>

void bitwise(int a, int b) {
  printf("a and b: %d\n", (a & b));
  printf("a or b:  %d\n", (a | b));
  printf("a xor b: %d\n", (a ^ b));
  printf("not a:   %d\n", ~a);

  printf("a shl b: %d\n", (a << b));
  if (b >= 0) { // check for negative shift count
    printf("a shr b: %d\n", ((unsigned int)a >> b));
    unsigned int ua = a;
    printf("a lsr b: %u\n", (ua >> b));
  } else {
    printf("Invalid shift count (must be non-negative)\n");
  }

  // Below are the manual left and right rotate functions.
  int a_rotl = (a << b) | ((unsigned int)a >> sizeof(int) * 8 - b);
  printf("a rotl b: %d\n", a_rotl);

  int a_rotr = ((unsigned int)a >> b) | (a << (sizeof(int) * 8 - b));
  printf("a rotr b: %u\n", a_rotr);
}

// The main function must be defined for the linker to find it.
int main() {
    int a = 10, b = 5;
    bitwise(a,b);
    return 0;
}
```
