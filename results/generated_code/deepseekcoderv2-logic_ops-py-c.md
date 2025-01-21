 Certainly! Below is the equivalent code in C that performs the same operations as your Python function. Note that C does not have built-in boolean types, so we will use `int` to represent booleans (`0` for `False` and any non-zero value for `True`).

```c
#include <stdio.h>

void logic(int a, int b) {
    printf("a and b: %d\n", a && b);
    printf("a or b: %d\n", a || b);
    printf("not a: %d\n", !a);
}

int main() {
    logic(1, 1); // Example usage with true values
    return 0;
}
```

In this C code:
- `printf` is used to print the results.
- The logical "and" (`&&`) and "or" (`||`) operators are used from the C standard library.
- The logical not operator (`!`) is implemented using the unary operator in C.
