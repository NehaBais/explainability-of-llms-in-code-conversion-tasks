The equivalent C code for the above Rust function is as follows:
```C
#include <stdio.h>

void boolean_ops(bool a, bool b) {
    printf("%d and %d -> %d\n", a, b, a && b);
    printf("%d or %d -> %d\n", a, b, a || b);
    printf("%d xor %d -> %d\n", a, b, a ^ b);
    printf("not %d -> %d\n", a, !a);
}

int main() {
    boolean_ops(true, true);
    boolean_ops(true, false);
    boolean_ops(false, true);
    boolean_ops(false, false);
    return 0;
}
```
In this C code, we define a function `boolean_ops` which takes two bool arguments and prints out the results of "and", "or", "xor", and "not" operations. We then use these functions in the `main` function to demonstrate their functionality with the given inputs. The `!a` in the last line is equivalent to the Rust `!a` expression in the Rust code, which performs the logical negation operation on `a`.
