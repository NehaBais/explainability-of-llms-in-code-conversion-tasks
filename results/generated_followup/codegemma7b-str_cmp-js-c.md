The error occurs because the `printf` function is not declared before its first use. To fix this, add `#include <stdio.h>` to the top of the code.

```c
#include <stdio.h>
#include <string.h>

int main() {
  // ...
}
```
