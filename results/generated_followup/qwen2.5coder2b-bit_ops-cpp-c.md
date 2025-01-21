The error indicates that the compiler does not recognize the built-in function `__builtin_rotate_left` or `__builtin_rotate_right`. These are available starting from C++17.

To fix this issue, you need to include `<bit>` header file and use the correct rotate functions. Here's how you can rewrite your code:

```c
#include <stdio.h>
#include <bit> // For __builtin_rotate_left and __builtin_rotate_right

void bitwise(int a, int b) {
  printf("a and b: %d \n", (a & b));
  printf("a or b:  %d \n", (a | b));
  printf("a xor b: %d \n", (a ^ b));
  printf("not a:   %d \n", ~a);

  // Note: the C/C++ shift operators are not guaranteed to work if the shift
  // count (that is, b) is negative, or is greater or equal to the number of
  // bits in the integer being shifted.
  printf("a shl b: %d \n", a << b);
  printf("a shr b: %d \n", a >> b);

  unsigned int ua = a;
  printf("a lsr b: %d \n", (ua >> b));

  // There are no rotation operators in C++, but as of c++20 there is a
  // standard-library rotate function. The rotate function works for all
  // rotation amounts, but the integer being rotated must always be an unsigned
  // integer.
  printf("a rol b: %d \n", __builtin_rotate_left(ua, b));
  printf("a ror b: %d \n", __builtin_rotate_right(ua, b));
}
```

The corrected code now includes the `<bit>` header file, which provides the `__builtin_rotate_left` and `__builtin_rotate_right` functions.
