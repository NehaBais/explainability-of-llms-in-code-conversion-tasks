In C programming language there are no built-in boolean data types but they can be simulated using integers where `0` represents `false` and any non-zero value represents `true`. Here's how you could convert the Golang code to C:

```c
#include <stdio.h>

void printLogic(int a, int b) {
    printf("a and b is %d\n", a && b);
    printf("a or b is %d\n", a || b);
    printf("not a is %d\n", !a);
}

int main() {
  printLogic(1, 0); // Replace with the values you want to test.
  return 0;
}
```

The `&&` and `||` operators in C are the logical "and" and "or" operations respectively. The `!` operator is used for creating the negation of a boolean value.
