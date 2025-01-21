 Certainly! Below is the equivalent code in C that performs the same operations as your JavaScript function:

```c
#include <stdio.h>
#include <stdbool.h>

void logic(bool a, bool b) {
  printf("a AND b: %d\n", a && b);
  printf("a OR b: %d\n", a || b);
  printf("NOT a: %d\n", !a);
}

int main() {
  logic(true, true);
  logic(true, false);
  logic(false, true);
  logic(false, false);
  return 0;
}
```

### Explanation:
1. **Include Headers**: We include the necessary headers for input/output operations and using boolean types in C.
2. **Function Definition**: The `logic` function takes two boolean arguments (`bool a`, `bool b`) and performs the logical AND, OR, and NOT operations.
3. **Print Statements**: In C, we use `printf` to print strings and values. The result of the logical operations is printed directly as integers (0 for false, 1 for true).
4. **Main Function**: The `main` function demonstrates how to call the `logic` function with different combinations of boolean values.
