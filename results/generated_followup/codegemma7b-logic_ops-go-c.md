The error occurs because the C compiler doesn't recognize the `bool` type. The fix is to include the `<stdbool.h>` header file.

```c
#include <stdbool.h>

void printLogic(bool a, bool b) {
  printf("a and b is %d\n", a && b);
  printf("a or b is %d\n", a || b);
  printf("not a is %d\n", !a);
}
```
