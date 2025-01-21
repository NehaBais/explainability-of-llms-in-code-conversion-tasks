The error occurred because the `printf` and `scanf` functions are not declared in the C standard library, which is why the compiler could not find them. To fix this, we need to include the appropriate header files that declare these functions. The correct headers are `<stdio.h>` and `<string.h>`, respectively.
Here's the corrected code:
```c
#include
#include
int main() {
  int a, b;

  printf("Enter value of a: ");
  scanf("%d", &a);

  printf("Enter value of b: ");
  scanf("%d", &b);

  if (a < b) {
    printf("a is less than b");
  } else if (a > b) {
    printf("a is greater than b");
  } else {
    printf("a is equal to b");
  }

  return 0;
}
```
The compiler can now find the `printf` and `scanf` functions, so there are no more errors.

