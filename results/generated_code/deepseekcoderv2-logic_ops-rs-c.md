 Here's the equivalent code in C:

```c
#include <stdio.h>

void boolean_ops(int a, int b) {
    printf("%d and %d -> %d\n", a, b, a && b);
    printf("%d or %d -> %d\n", a, b, a || b);
    // In C, there's no direct xor operator for booleans, so we represent it using 0 and 1
    printf("%d xor %d -> %d\n", a, b, (a != b) ? 1 : 0);
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

Explanation:
- The `boolean_ops` function in C takes two integer arguments (`int a`, `int b`) instead of boolean values. This is because C does not have a built-in boolean type like Rust. Integers are used to represent truth values, where 0 represents false and any non-zero value (usually 1) represents true.
- The logical AND operation is represented by the `&&` operator.
- The logical OR operation is represented by the `||` operator.
- The logical XOR operation is implemented using a conditional expression (`(a != b) ? 1 : 0`) to convert the result back to an integer (0 or 1).
- The logical NOT operation is represented by the `!` operator.
