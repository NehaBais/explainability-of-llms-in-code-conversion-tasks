Sure, here is your Python code converted to C:

```C
#include <stdio.h>

void logic(int a, int b) {
    printf("a and b: %d\n", a && b);
    printf("a or b: %d\n", a || b);
    printf("not a: %d\n", !a);
}

int main() {
    int a = 1;
    int b = 0;

    logic(a, b);

    return 0;
}
```

In this C code:
- `printf` is used instead of `print`.
- The `%d` format specifier is used to print integer values.
- In C, logical operations are done using `&&` (and), `||` (or) and `!` (not) operators instead of Python's logical and (`and`) and not (`not`) keywords.
- Boolean values in C are represented by integers where `1` represents `True` and `0` represents `False`.
