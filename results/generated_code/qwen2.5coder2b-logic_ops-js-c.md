In C, we can use the logical operators `&&`, `||`, and `!` to perform these operations. Here's how you could translate your JavaScript code to C:

```c
#include <stdio.h>

void logic(int a, int b) {
  printf("a AND b: %d\n", (a && b));
  printf("a OR b: %d\n", (a || b));
  printf("NOT a: %d\n", !a);
}

int main() {
    logic(1, 0); // Call the function with arguments 1 and 0
    return 0;
}
```

In this C code:
- The `logic` function takes two integers as arguments.
- It uses the logical operators `&&`, `||`, and `!` to perform the "and", "or", and "not" operations respectively.
- The results of these operations are printed using the `printf` function.
- In the `main` function, we call the `logic` function with arguments `1` and `0`.

Note that in C, boolean values can be either `0` (false) or `1` (true). If you have a boolean value defined as `int`, you should use this to pass the appropriate integer value.
