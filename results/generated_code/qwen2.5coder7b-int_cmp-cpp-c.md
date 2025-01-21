Sure, here's the equivalent code in C:

```c
#include <stdio.h>

int main() {
    int a, b;

    if (!(scanf("%d %d", &a, &b) == 2)) {
        fprintf(stderr, "Could not read the numbers\n");
        return 1;
    }

    // test for less-than
    if (a < b)
        printf("%d is less than %d\n", a, b);

    // test for equality
    if (a == b)
        printf("%d is equal to %d\n", a, b);

    // test for greater-than
    if (a > b)
        printf("%d is greater than %d\n", a, b);

    return 0;
}
```

Here's how the code works:
- `scanf` reads two integers from the user. The function returns the number of items successfully read and assigned which should be 2 in this case.
- If not exactly two items are successfully read, an error message is printed to `stderr`.
- Then, it checks the conditions for `less-than`, `equality`, and `greater-than` using simple if statements.

To run this code:
1. Save it to a file with a `.c` extension (e.g., `compare.c`).
2. Compile it using a C compiler like `gcc`: `gcc compare.c -o compare`.
3. Run the compiled program: `./compare`.

This will prompt you for two integers and then print out whether the first integer is less than, equal to, or greater than the second one.
