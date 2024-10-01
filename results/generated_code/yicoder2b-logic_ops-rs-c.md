Sure, here is the equivalent C code for the given Rust function:

```c
#include <stdio.h>

void boolean_ops(int a, int b) {
    printf("%d and %d -> %d\n", a, b, (a && b));
    printf("%d or %d -> %d\n", a, b, (a || b));
    printf("%d xor %d -> %d\n", a, b, (a ^ b));
    printf("not %d -> %d\n", a, !a);
}

int main() {
    boolean_ops(1, 1);
    boolean_ops(1, 0);
    boolean_ops(0, 1);
    boolean_ops(0, 0);
    return 0;
}
```
Please note that:
- In C the boolean values are represented by integers. So `true` is represented as `1` and `false` as `0`. 
- Unlike Rust which uses `&&, ||, ^` for bitwise operators to perform logical AND, OR, XOR respectively in expressions, in C we use `&&` for the "and" operator, `||` for "or", and `^` for XOR operator.
- The `not` operator is represented as a unary `!` that flips the boolean value of its operand.
