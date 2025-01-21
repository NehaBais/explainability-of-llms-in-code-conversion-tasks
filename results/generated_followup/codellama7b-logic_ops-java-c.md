The error "Undefined symbols for architecture arm64" means that the linker was unable to find the entry point of the program, which is indicated by the "_main" symbol. This is usually caused by a missing or misplaced main function.

The fix is to add a `main` function in the code, which is the entry point of the program. The corrected code would look like this:
```c
#include <stdio.h>

int main() {
  logic(true, false);
}

void logic(int a, int b) {
  printf("a AND b: %d\n", (a && b));
  printf("a OR b: %d\n", (a || b));
  printf("NOT a: %d\n", (!a));
}
```
