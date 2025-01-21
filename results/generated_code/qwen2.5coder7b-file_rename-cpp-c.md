Sure, here is the equivalent code in C:

```c
#include <stdio.h>

int main() {
    rename("input.txt", "output.txt");
    rename("docs", "mydocs");
    rename("/input.txt", "/output.txt");
    rename("/docs", "/mydocs");
    return 0;
}
```

This C code performs the same operations as your C++ code, renaming files and directories in both the current working directory and the filesystem root.
