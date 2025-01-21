Sure, here's the equivalent code in C:

```c
#include <stdio.h>

void print_logic(int a, int b)
{
    // Convert integer values (0 or 1) to boolean for comparison
    int bool_a = (a != 0);
    int bool_b = (b != 0);

    printf("a and b is %d\n", bool_a && bool_b);
    printf("a or b is %d\n", bool_a || bool_b);
    printf("not a is %d\n", !bool_a);
}

int main() {
    print_logic(1, 0); // Example usage
    return 0;
}
```

In C, there is no `bool` type like in C++. Instead, we use integers (0 and 1) to represent boolean values. The `!`, `&&`, and `||` operators work the same way in both languages for performing logical operations.

The function `print_logic` now takes two integer parameters (`a` and `b`). Inside the function, these integers are converted to boolean by checking if they are non-zero (which is equivalent to `true` in C). Then, the logic operations are performed as required.
