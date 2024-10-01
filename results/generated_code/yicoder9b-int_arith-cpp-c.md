The C version of the code would look like this:
```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    printf("a+b = %d\n", a+b);
    printf("a-b = %d\n", a-b);
    printf("a*b = %d\n", a*b);
    if (b != 0) {
        printf("a/b = %d, remainder %d\n", a/b, a%b);
    } else {
        printf("Cannot divide by zero.\n");
    }
  return 0;
}
```
Note that C language performs arithmetic operations according to the integer rounding towards zero rule when dividing integers. This means that for negative numbers, it rounds down to the nearest whole number rather than towards zero. Also note that, unlike in C++ where the sign of remainder matches the first operand, in C the sign of remainder is implementation-defined and can be either like the dividend or the divisor.
