The error occurred because `atoi` is not declared in the C standard library. To fix this, we need to include the header file <stdlib.h> at the beginning of our program.

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 3)
    return -1;

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  printf("sum:              %d\n", a + b);
  printf("difference:       %d\n", a - b);
  printf("product:          %d\n", a * b);
  printf("integer quotient: %d\n", a / b); // truncates towards zero
  printf("remainder:        %d\n", a % b); // same sign as first operand

  return 0;
}
```
