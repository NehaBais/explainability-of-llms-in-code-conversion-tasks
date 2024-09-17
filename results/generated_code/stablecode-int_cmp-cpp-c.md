Here's the equivalent C code:

```c
#include <stdio.h>

int main() {
  int a, b;

  if (!scanf("%d %d", &a, &b))) {
    printf("Could not read the numbers\n");
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
This C code performs the same task as your original C++ code. It gets two integers from the user and displays different messages based on whether the first integer is less than, equal to, or greater than the second integer. The condition for each case is separately tested using if-else statements.
