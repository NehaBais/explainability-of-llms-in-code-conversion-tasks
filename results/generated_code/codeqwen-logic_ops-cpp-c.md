Here's the equivalent code in C:

```c
#include <stdio.h>
#include <stdbool.h>

void print_logic(bool A, bool b) {
  printf("A and b is %d\n", A && b);
  printf("A or b is %d\n", A || b);
  printf("not a is %d\n", !A);
}
```

Please note that C doesn't have boolean data type by default, so we use int as substitute. In this code, 0 represents false and any non-zero value represents true.
