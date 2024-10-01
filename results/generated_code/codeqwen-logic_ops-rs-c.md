Here is the equivalent C code for your Rust function:

```c
#include <stdio.h>
#include <stdbool.h>

void boolean_ops(bool A, bool B) {
    printf("%d and %d -> %d\n", A, B, A && B);
    printf("%d or %d -> %d\n", A, B, A || B);
    printf("%d xor %d -> %d\n", A, B, A ^ B);
    printf("not %d -> %d\n", A, !A);
}

int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
    return 0;
}
```
Please note that C doesn't have boolean types natively like Rust does. Instead, it uses an integer type (usually `int`) to represent a boolean value where non-zero is considered true and zero is considered false. The same applies for logical operations like "and" or "or".
