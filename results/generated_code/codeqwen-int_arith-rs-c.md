In C, the code would look like this:

```c
#include <stdio.h>

int main() {
   int A, B;

   printf("Enter two integers: ");
   scanf("%d %d", &A, &B);

   printf("sum:              %d\n", A + B);
   printf("difference:       %d\n", A - B);
   printf("product:          %d\n", A * B);
   printf("integer quotient: %d\n", A / B); // truncates towards zero
   printf("remainder:        %d\n", A % B); // same sign as first operand

   return 0;
}
```

This code takes two integers as input from the user, and then (for those two integers), display their:
- sum
- difference
- product
- integer quotient
- remainder
