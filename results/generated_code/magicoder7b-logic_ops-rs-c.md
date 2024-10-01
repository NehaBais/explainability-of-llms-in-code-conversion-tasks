 In C language, there is no built-in logical AND (`&&`) and OR (`||`) operators for integer types. Instead, they are usually used with Boolean type (0 or 1). However, the XOR operator `^` works perfectly fine on both integers and booleans in C. The 'not' operation can be achieved by using the bitwise NOT operator `~`. Here is how you can translate your Rust code into a C program:

```c
#include <stdio.h>
#define TRUE 1
#define FALSE 0

void boolean_ops(int a, int b) {
    printf("%d and %d -> %d\n", a, b, (a && b));
    printf("%d or %d -> %d\n", a, b, (a || b));
    printf("%d xor %d -> %d\n", a, b, (a ^ b));
    printf("not %d -> %d\n", a, ~a);
}

int main() {
    boolean_ops(TRUE, TRUE);
    boolean_ops(TRUE, FALSE);
    boolean_ops(FALSE, TRUE);
    boolean_ops(FALSE, FALSE);
    return 0;
}
```
Note: The C language does not differentiate between Boolean and integer types. Both `1` (which is commonly used to denote a true value) and `0` (false) are integers.
