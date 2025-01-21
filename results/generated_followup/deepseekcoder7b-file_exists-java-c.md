The error is caused by trying to initialize variables with non-constant expressions like `access("input.txt", F_OK)`. In C, all initial values must be compile-time constants. The function `access()` returns an integer and the comparison in `== 0` also yields a constant result at compile time.

The fix is to initialize the variables `fileExists` and `dirExists` with the return value of the `access()` function, which are non-constant expressions:

```c
#include <unistd.h>  // For access() function

int fileExists = access("input.txt", F_OK);
int dirExists = access("docs", F_OK);
```

