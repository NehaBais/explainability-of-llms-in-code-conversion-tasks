The equivalent code in C would be:

```c
#include <stdio.h>
#include <sys/stat.h>

int main() {
    struct stat buffer;   
    int exist_in_current = (stat("docs/input.txt", &buffer) == 0);
    int exist_in_root = (stat("/docs/input.txt", &buffer) == 0);

    printf("File exists in current working directory: %d\n", exist_in_current);
    printf("File exists in root directory: %d\n", exist_in_root);

    return 0;
}
```

This code uses the `stat()` function from the C standard library to check if a file or directory exists. If it returns zero, the file/directory exists and `exist_in_*` variables will be set to `1`. Otherwise, they are set to `0`.
