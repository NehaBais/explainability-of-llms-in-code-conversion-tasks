```
#include <stdio.h>

void boolean_ops(bool a, bool b) {
    printf("%d and %d -> %d\n", a, b, (a && b));
    printf("%d or %d -> %d\n", a, b, (a || b));
    printf("%d xor %d -> %d\n", a, b, (a ^ b));
    printf("not %d -> %d\n", a, (!a));
}

int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
    return 0;
}
```
Explanation:
The code has been converted from Rust to C. The `println!` macro in Rust has been replaced with `printf`, which is a function for formatting and printing output in C. The `bool` type in Rust has been replaced with the `int` type in C, as C does not have a built-in boolean data type. The function `boolean_ops` has been converted to take two `int` arguments instead of two `bool` arguments. The `not` operator in Rust has been replaced with the unary `!` operator in C.

The `main` function has also been converted from Rust to C, and it calls the `boolean_ops` function four times with different argument values.
