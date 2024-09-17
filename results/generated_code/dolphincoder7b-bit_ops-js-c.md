Below is the equivalent C code for the JavaScript code provided. Please note, in C, there are no bitwise AND (&), OR (|), and XOR (^) operators, so we need to use corresponding functions from the standard library.

Also, C has a left shift operator, but it doesn't handle negative numbers as well as JavaScript's left shift does. We'll simulate that functionality with the multiplication by 2 raised to the power of `b`.

```c
#include <stdio.h>
#define MASK_INT (sizeof(int) * 8 - 1)

void bitwise(int a, int b){
   printf("a AND b: %d\n", a & b);
   printf("a OR b: %d\n", a | b);
   printf("a XOR b: %d\n", a ^ b);
   printf("NOT a: %d\n", ~a);
   // Left shift. We simulate it by multiplication by 2 raised to the power of `b`.
   printf("a  << b: %d\n", a * (1 << b));

   // Arithmetic right shift (C has no >>> operator).
   int sign = a >> 31;
   printf("a >> b: %d\n", (a + sign) >> b);
   
   // Logical right shift. Same as C's right shift, but the result can be negative.
   printf("a >> b: %d\n", a >> b);

   // Right rotate. Similar to left rotate, but we use bitwise operations instead of multiplication and division.
   int r = (b < 0) ? ~(~(MASK_INT + 1) << -b) : ((1 << b) - 1);
   printf("a >>> b: %d\n", (a >> r) | (a << (~r & MASK_INT)));
}
```

