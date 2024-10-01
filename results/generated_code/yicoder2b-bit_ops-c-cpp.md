This problem requires several conversions. Here is the equivalent code written in C++. Note that the C language doesn't have a built-in logical right shift operator. In this case, we convert the integer to an unsigned type before performing the shift (this will discard the sign bit). The right arithmetic shift in C is equivalent to signed right shift in C++:

```cpp
#include <stdio.h>

void bitwise(int a, int b)
{
  printf("a & b: %d\n", a & b); // bitwise AND
  printf("a | b: %d\n", a | b); // bitwise OR
  printf("a ^ b: %d\n", a ^ b); // bitwise XOR
  printf("~a: %d\n", ~a);       // bitwise NOT (complement)

  int c = a;              
  printf("c << b: %d\n", c << b);      // left shift
  unsigned int d = c >> b; // logical right shift to convert signed integer to unsigned
  printf("c >> b: %d\n", d);          // logical right shift
}
```
This code will output the results of the bitwise operations performed on `a` and `b`. Note that the actual shifts and rotations could vary depending on the specifics of your system's architecture (e.g. endianness).
